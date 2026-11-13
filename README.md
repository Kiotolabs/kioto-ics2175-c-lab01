# Kioto iLMs – ICS 2175: Introduction to Computer Programming

## Laboratory 01: Getting Started with C Programming

**Institution:** Jomo Kenyatta University of Agriculture and Technology (JKUAT)  
**Platform:** Kioto iLMs  
**Unit:** ICS 2175 – Introduction to Computer Programming  
**Laboratory:** 01 – Getting Started with C Programming  
**Programming Language:** C  
**IDE:** Code::Blocks on Windows  
**Lecturer:** O.O. Maxwell  

---

## Welcome

Welcome to your first C programming laboratory. This repository is your personal workspace for
Laboratory 01. You will install a C compiler, write your first programs, learn how C programs are
structured, work with variables and data types, perform a personalised calculation, write a short
technical report, and practise the GitHub workflow used throughout this unit.

If you are an absolute beginner, that is completely fine. Every step is explained. Follow the
documents in the `docs/` folder in order.

---

## Getting Started (Read This First)

1. Read [`docs/WINDOWS_SETUP.md`](docs/WINDOWS_SETUP.md) to install Code::Blocks and GCC.
2. Read [`docs/CODEBLOCKS_GUIDE.md`](docs/CODEBLOCKS_GUIDE.md) to create your first C project.
3. Read [`docs/LAB_INSTRUCTIONS.md`](docs/LAB_INSTRUCTIONS.md) for the full exercise instructions.
4. Read [`docs/GITHUB_WORKFLOW.md`](docs/GITHUB_WORKFLOW.md) for the fork, branch, commit and pull request steps.
5. Complete the exercises in `src/`.
6. Copy `report/REPORT_TEMPLATE.md` to `report/REPORT.md` and complete it.
7. Complete `report/EVIDENCE_CHECKLIST.md`.
8. Open a Pull Request using the title format below.

---

## Repository Structure

```
kioto-ics2175-c-lab01/
├── README.md
├── LICENSE
├── .gitignore
├── CONTRIBUTING.md
├── docs/                 # Student guides
├── src/                  # Exercise source files (edit these)
├── report/               # Report template and evidence checklist
├── tests/                # Automated checks (Python)
├── .github/              # Pull request template and CI workflow
└── lecturer/             # Lecturer-only assessment resources
```

---

## Exercises

| # | File | Topic |
|---|------|-------|
| 1 | `src/exercise01_hello_kioto.c` | Hello Kioto – first C program |
| 2 | `src/exercise02_variables.c` | Variables and data types |
| 3 | `src/exercise03_personalised_calculation.c` | Personalised calculation (individual assessment) |

---

## Pull Request Title Format

```
ICS2175 LAB01 - REGISTRATION_NUMBER - FULL_NAME
```

Example:

```
ICS2175 LAB01 - ENE-01-1234-26 - Jane Doe
```

Target branch: `main`. Do **not** merge your own pull request.

---

## Automated Validation

A GitHub Actions workflow runs on every pull request to `main`. It compiles your C programs,
runs them and checks for required output patterns and report completion. A green check is
preliminary validation only; your lecturer still assesses your work using the rubric.

---

## Repository Access

This is a **public** repository so that any student can fork it without being a member of the
Kiotolabs organisation and without write access to the upstream repository. You only need a
free GitHub account. Do not request to be added as a collaborator on the upstream repository;
forking is the supported submission route.

## Instructor Resources

Lecturer-only assessment materials (rubric, marking guide, solutions, variant generator with
expected answers) are stored in the separate **private** repository
`Kiotolabs/kioto-ics2175-c-lab01-instructor` and are not available to students.

## How Grading Works

The GitHub Actions check on your pull request is preliminary technical validation only.
Final grading, including the personalised calculation's expected value, is performed by the
lecturer using trusted hidden tests.

## Kioto iLMs Branding

This assignment is delivered through **Kioto iLMs** for the unit **ICS 2175** at **JKUAT**.
Use the Kioto iLMs platform for submission of your lab report where required.

---

## License

This repository is provided for educational use. See [LICENSE](LICENSE).