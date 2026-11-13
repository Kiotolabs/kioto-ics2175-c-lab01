# Contributing Guidelines

This repository is an assessed university laboratory. Contributions are limited to your own
individual submission.

## For Students

- Work only on your own fork and feature branch (`student/REGISTRATION_NUMBER/lab01`).
- Do not commit compiled binaries (`.exe`, `.o`). Only commit source code (`.c`) and your report.
- Use meaningful commit messages. At least three commits are required.
- Do not copy another student's code or report. Academic integrity applies.
- Do not include passwords, API keys or personal secrets.
- Do not merge your own Pull Request. The lecturer reviews and merges.

## For Lecturer / Maintainers

- Keep solutions in the `lecturer/` directory and never publish them in a public student-facing copy.
- Run the variant generator to assign personalised variants.
- Review pull requests using `lecturer/MARKING_GUIDE.md`.

## Code Style

- C code must compile with `gcc -std=c11 -Wall -Wextra -pedantic`.
- Use meaningful variable names.
- Include comments explaining your work.
- Report must be Markdown and stored at `report/REPORT.md`.