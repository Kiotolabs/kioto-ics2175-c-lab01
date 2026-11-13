import os
import subprocess
import unittest

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC = os.path.join(ROOT, "src", "exercise02_variables.c")


class TestExercise02(unittest.TestCase):
    def test_source_exists(self):
        self.assertTrue(os.path.isfile(SRC))

    def test_declares_required_types(self):
        with open(SRC, encoding="utf-8") as f:
            text = f.read()
        for kw in ("int", "float", "double", "char"):
            self.assertIn(kw, text, f"Missing type {kw}")
        for spec in ("%d", "%f", "%c"):
            self.assertIn(spec, text, f"Missing format specifier {spec}")

    def test_compiles(self):
        out = os.path.join(ROOT, "tests", "_ex02")
        r = subprocess.run(
            ["gcc", "-std=c11", "-Wall", "-Wextra", "-pedantic", SRC, "-o", out],
            capture_output=True, text=True,
        )
        self.assertEqual(r.returncode, 0, r.stderr)

    def test_runs(self):
        out = os.path.join(ROOT, "tests", "_ex02")
        if not os.path.isfile(out):
            subprocess.run(["gcc", "-std=c11", "-Wall", "-Wextra", "-pedantic", SRC, "-o", out],
                           capture_output=True, text=True)
        r = subprocess.run([out], capture_output=True, text=True)
        self.assertEqual(r.returncode, 0)
        self.assertTrue(r.stdout.strip(), "Program produced no output")


if __name__ == "__main__":
    unittest.main()