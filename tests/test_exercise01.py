import os
import re
import subprocess
import sys
import unittest

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC = os.path.join(ROOT, "src", "exercise01_hello_kioto.c")


class TestExercise01(unittest.TestCase):
    def test_source_exists(self):
        self.assertTrue(os.path.isfile(SRC), "exercise01 source missing")

    def test_source_includes_stdio(self):
        with open(SRC, encoding="utf-8") as f:
            text = f.read()
        self.assertIn("#include <stdio.h>", text)
        self.assertIn("int main", text)
        self.assertIn("return 0", text)

    def test_compiles(self):
        out = os.path.join(ROOT, "tests", "_ex01")
        r = subprocess.run(
            ["gcc", "-std=c11", "-Wall", "-Wextra", "-pedantic", SRC, "-o", out],
            capture_output=True, text=True,
        )
        self.assertEqual(r.returncode, 0, r.stderr)

    def test_runs_and_output(self):
        out = os.path.join(ROOT, "tests", "_ex01")
        if not os.path.isfile(out):
            subprocess.run(["gcc", "-std=c11", "-Wall", "-Wextra", "-pedantic", SRC, "-o", out],
                           capture_output=True, text=True)
        r = subprocess.run([out], capture_output=True, text=True)
        self.assertEqual(r.returncode, 0)
        self.assertIn("Hello, Kioto!", r.stdout)
        lines = [ln for ln in r.stdout.splitlines() if ln.strip()]
        self.assertGreaterEqual(len(lines), 2, "Expected at least two lines of output")


if __name__ == "__main__":
    unittest.main()