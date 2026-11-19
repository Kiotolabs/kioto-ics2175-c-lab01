# ICS 2175 – Laboratory 01 Report

## 1. Cover Information

- **Student Full Name:** Felistas Wanjira
- **Registration Number:** ENB211-0008/2025
- **Programme:** ABE
- **Course:** ICS 2175 – Introduction to Computer Programming
- **Unit:** ICS 2175
- **Lab:** 01 – Getting Started with C Programming
- **GitHub Username:** felistaswanjira-alt
- **Assigned Scenario:** Event ticket revenue
- **Variant ID:** V06
- **Date:** 18 November 2026

## 2. Objective

I set out to create, compile and run simple C programs in Code::Blocks, understand basic variables and output formatting, implement my assigned calculation, and practise submitting work through Git and GitHub.

## 3. Environment and Setup

- **Operating System:** Windows 10 Pro, build 26200
- **IDE:** Code::Blocks 25.03 (release, 64-bit)
- **Compiler:** GCC 14.2.0, MinGW-W64 UCRT POSIX threads, SEH
- **Hardware:** Not recorded

I opened Code::Blocks and created an Empty project for each exercise, then added the supplied `.c` file to the project. I checked that Settings → Compiler identified the bundled MinGW GCC toolchain and used the `C11`, `-Wall`, `-Wextra`, and `-pedantic` options. No compiler discovery issue was encountered. Git and GitHub CLI package installation was slow, so direct GitHub release downloads and GitHub device authorization were used instead.

## 4. Exercise 1 – Hello Kioto

Final source code:

```c
#include <stdio.h>

int main(void)
{
    printf("Hello, Kioto!\n");
    printf("I am a student of ABE at JKUAT.\n");
    return 0;
}
```

`#include <stdio.h>` provides the standard input/output declarations. `main(void)` is the program entry point. `printf` writes text to the console and `\n` starts a new line. `return 0` reports successful completion to the operating system.

Output:

```text
Hello, Kioto!
I am a student of ABE at JKUAT.
```

## 5. Exercise 2 – Variables

| Variable | Data type | Example value | Reason |
|---|---|---|---|
| `studentAge` | `int` | 21 | An age is a whole number. |
| `laboratoryHours` | `float` | 3.14 | It demonstrates a single-precision fractional value. |
| `mathematicalConstant` | `double` | 2.718281828 | It stores a decimal value with greater precision. |
| `grade` | `char` | `A` | A grade is a single character. |

The matching format specifiers were `%d`, `%f`, `%lf`, and `%c`. The `.2` and `.6` precision specifications control display rounding.

## 6. Exercise 3 – Personalised Calculation

**Variant V06: Event ticket revenue**

- Tickets sold: 1000
- Ticket price: 35
- Operation: multiply
- Required label: `Total revenue`

Calculation:

```text
1000 × 35 = 35,000
```

Source code:

```c
#include <stdio.h>

int main(void)
{
    int ticketsSold = 1000;
    int ticketPrice = 35;
    int totalRevenue = ticketsSold * ticketPrice;

    printf("Total revenue: %d\n", totalRevenue);
    return 0;
}
```

Output:

```text
Total revenue: 35000
```

I independently verified the result as 35 groups of 1000, or by addition: `1000 × (30 + 5) = 30000 + 5000 = 35000`. This calculation was checked separately from the C program output.

## 7. Testing and Troubleshooting

I compiled and ran all three programs with GCC using `gcc -std=c11 -Wall -Wextra -pedantic`. I also tested a deliberately removed semicolon from `printf("Hello, Kioto!\n")`; the compiler reported an `expected ';' before 'return'`-style syntax error and the build stopped. Restoring the semicolon rebuilt successfully. Removing `\n` changed the second output line so that it appeared on the same console line, because `\n` was the character that inserted the newline.

## 8. GitHub Workflow

- **Repository URL:** Pending GitHub device authorization
- **Feature branch:** `student/ENB211-0008-2025/lab01`
- **Commit practice:** Three exercise/report commits remain pending.
- **Pull request:** Pending GitHub device authorization

A commit records a named snapshot of the staged files and preserves each change in the repository history. It enables recovery and comparison of earlier states. A pull request proposes the feature branch as a change to `main` and enables review, automated checks, discussion and lecturer approval before merging.

## 9. Screenshots

Evidence capture was started, but GitHub submission and final repository screenshots could not be completed because GitHub device authorization did not complete and no authenticated Git client was available. The lab directory should contain the source and report files while the remaining screenshots are completed locally.

## 10. Individual Reflection

I learned the structure of a C program, the relationship between declarations and format specifiers, and the basic stages of a GitHub submission. The most difficult parts were deriving the exact variant and ensuring every source comment and report field matched the registration number. Next time, I would first configure the compiler and branch, then compile after every exercise and save labelled screenshots immediately.

## 11. Conclusion

The programming work was prepared and the Hello Kioto and variable programs were compiled and run successfully. The V06 source compiled, and its result was independently calculated as 35000. GitHub submission remains incomplete because authorization was not confirmed, so the repository and pull request cannot yet be truthfully listed as submitted.