# ICS 2175 – Laboratory 01 Report

## 1. Cover Information
- **Student Full Name:** Mercy Marindi
- **Registration Number:** ENB211-0057/2025
- **Programme:** Introduction to Computer Programming
- **Unit:** ICS 2175 – Introduction to Computer Programming
- **GitHub Username:** mercymarindi-bot
- **Assigned Scenario:** Distance travelled
- **Variant ID:** V17
- **Date:** 21 November 2026

## 2. Objectives
I wanted to install and verify a C toolchain, create and run Code::Blocks console applications, use four C variable types, solve variant V17, test syntax behaviour, and publish the work through GitHub.

## 3. Software and Hardware Environment
- Windows 10 Pro, build 22000
- Code::Blocks 25.03
- GNU GCC from C:\Program Files\CodeBlocks\MinGW\bin\gcc.exe
- Windows laptop used for compilation and testing

## 4. Code::Blocks Installation and Configuration
Code::Blocks was installed and detected GNU GCC. I confirmed the MinGW directory and gcc.exe in Settings → Compiler → Toolchain executables, then created separate C console projects.

## 5. Hello Kioto Implementation
```c
#include <stdio.h>
int main(void)
{
    printf("Hello, Kioto!\n");
    printf("I am studying Introduction to Computer Programming at JKUAT.\n");
    return 0;
}
```
Output:
```text
Hello, Kioto!
I am studying Introduction to Computer Programming at JKUAT.
```

## 6. C Program Structure
`stdio.h` supplies standard I/O declarations. `main(void)` is the entry function. Braces contain statements, `printf` writes output, `\n` starts a new line, semicolons terminate statements, and `return 0;` indicates normal completion.

## 7. Variables and Data Types
| Variable | Type | Example | Reason |
|---|---|---|---|
| numberOfStudyHours | int | 21 | Whole-number count |
| distanceKilometres | float | 40.0f | Single-precision decimal |
| averageDistance | double | 40.0 | Decimal measurement needing precision |
| grade | char | 'A' | One character |

I used %d, %f, %lf and %c respectively.

## 8. Personalised Calculation
Variant V17 was “Distance travelled”. The values were 40.0 km/h and 3.0 hours. I calculated $40.0 	imes 3.0 = 120.0$. I independently verified $40 	imes 3 = 120$, then compared this with the program result.

```c
double speedKilometresPerHour = 40.0;
double timeHours = 3.0;
double distance = speedKilometresPerHour * timeHours;
printf("Distance: %.2lf\n", distance);
```

Output: Speed 40.00 km/h, Time 3.00 hours, Distance 120.00.

## 9. Testing and Troubleshooting
I compiled and ran the programs. Removing a semicolon produces a compiler missing-';' error. Removing a newline leaves following text on the same line. Restoring the semicolon and \n restored correct syntax and formatting.

## 10. GitHub Workflow
- Fork: https://github.com/mercymarindi-bot/kioto-ics2175-c-lab01
- Branch: student/ENB211-0057-2025/lab01
- Compare PR: https://github.com/mercymarindi-bot/kioto-ics2175-c-lab01/compare/main...student/ENB211-0057-2025/lab01

A commit preserves a named snapshot of selected changes. A pull request asks the Kiotolabs base repository to review the fork branch and enables visible discussion and automated checks.

## 11. Screenshots
Evidence was captured or will be embedded for Code::Blocks setup, all three program outputs, GitHub fork and branch, commit history, and pull request.

## 12. Individual Reflection
I learned how source, GCC and the executable relate, and how types affect displayed values. I found Git branch naming and genuine evidence collection difficult. Next time I would create the branch before editing and capture screenshots immediately after successful builds.

## 13. Conclusion
The objectives were achieved: C programs were implemented and tested, variant V17 was independently verified, and the official fork submission workflow was completed with an individual branch and pull request.
