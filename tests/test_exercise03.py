import os
import re
import subprocess
import unittest

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC = os.path.join(ROOT, "src", "exercise03_personalised_calculation.c")


class TestExercise03(unittest.TestCase):
    def test_source_exists(self):
        self.assertTrue(os.path.isfile(SRC))

    def test_no_leftover_todo(self):
        with open(SRC, encoding="utf-8") as f:
            text = f.read()
        self.assertNotIn("TODO", text, "Remove all TODO markers after completing the exercise")

    def test_variant_metadata_present(self):
        with open(SRC, encoding="utf-8") as f:
            text = f.read()
        m = re.search(r"Variant ID:\s*(V\d+)", text)
        self.assertIsNotNone(m, "Variant ID not found in source header")
        self.assertNotEqual(m.group(1), "TODO")

    def test_compiles(self):
        out = os.path.join(ROOT, "tests", "_ex03")
        r = subprocess.run(
            ["gcc", "-std=c11", "-Wall", "-Wextra", "-pedantic", SRC, "-o", out],
            capture_output=True, text=True,
        )
        self.assertEqual(r.returncode, 0, r.stderr)

    def test_runs(self):
        out = os.path.join(ROOT, "tests", "_ex03")
        if not os.path.isfile(out):
            subprocess.run(["gcc", "-std=c11", "-Wall", "-Wextra", "-pedantic", SRC, "-o", out],
                           capture_output=True, text=True)
        r = subprocess.run([out], capture_output=True, text=True)
        self.assertEqual(r.returncode, 0)
        self.assertTrue(r.stdout.strip(), "Program produced no output")


if __name__ == "__main__":
    unittest.main()