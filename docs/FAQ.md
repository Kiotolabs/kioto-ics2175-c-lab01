# Frequently Asked Questions

## Installation

**Q: GCC is not recognised.**  
A: Add `C:\Program Files\CodeBlocks\MinGW\bin` to your system PATH and restart the terminal.

**Q: Code::Blocks opens but cannot find a compiler.**  
A: Go to **Settings > Compiler > Toolchain executables** and set the compiler's installation
directory to `C:\Program Files\CodeBlocks\MinGW`.

## Compilation

**Q: I get "expected ';' before '}'".**  
A: You are missing a semicolon at the end of a statement. Check the line number in the error.

**Q: I get warnings but the program runs.**  
A: Fix all warnings. The grading uses `-Wall -Wextra -pedantic`.

**Q: My console window closes immediately.**  
A: Run the program from Code::Blocks using **Build > Run**, not by double-clicking the `.exe`.

## GitHub

**Q: I cannot fork the repository.**  
A: The repository is public; any GitHub account can fork it. If forking fails, check that you
are signed in and that your account can create repositories.

**Q: My pull request shows no changes.**  
A: Make sure you committed and pushed on your feature branch, not on `main`.

**Q: Can I merge my own pull request?**  
A: No. Only the lecturer merges after review.

## General

**Q: Can I use a different IDE?**  
A: Yes, but Code::Blocks is the supported IDE. Your code must still compile with GCC.

**Q: Do I need to submit a Windows `.exe`?**  
A: No. Commit source code only. The CI compiles on Linux.