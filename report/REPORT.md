# ICS 2175 – Laboratory 01 Report

## 1. Cover Information

- **Student Full Name:** Kariuki Abram
- **Registration Number:** ENB211-0012/2024
- **Programme:** BSc. Electrical and Electronic Engineering
- **Course / Unit:** ICS 2175 – Introduction to Computer Programming
- **Laboratory:** Laboratory 01 – Getting Started with C Programming
- **GitHub Username:** abramwakahiu
- **Assigned Scenario:** Distance travelled (A learner calculates the distance travelled over a fixed duration)
- **Variant ID:** V18
- **Date:** 11/17/2026

---

## 2. Objectives

The primary objectives of this laboratory practical were to:
1. Understand the core concepts of software compilation in C, distinguishing between source code (`.c`), the compiler toolchain (GNU GCC), object files, and standalone executable binaries (`.exe`).
2. Set up and configure the Code::Blocks integrated development environment (IDE) on Windows 11 with the MinGW-w64 compiler suite.
3. Master the foundational syntax and structural components of a standard C program (`#include` directives, function prototypes, entry point `main()`, statements, and exit status codes).
4. Declare, initialise, manipulate, and display fundamental C primitive data types (`int`, `float`, `double`, and `char`) using corresponding `printf` conversion specifiers (`%d`, `%f`, `%lf`, `%c`).
5. Formulate and implement an assigned personalised arithmetic calculation, independently verifying calculation accuracy through analytical methods.
6. Adopt industry-standard version control workflows using Git and GitHub, encompassing repository forking, branch management, granular commit logging, and pull request generation.

---

## 3. Software and Hardware Environment

- **Operating System:** Windows 11 Pro 64-bit
- **IDE:** Code::Blocks IDE (Version 20.03)
- **Compiler Suite:** MinGW-w64 GNU GCC 8.1.0 (configured with standard flags `-std=c11 -Wall -Wextra -pedantic`)
- **Hardware Architecture:** Laptop with Intel Core i5 processor, 16 GB DDR4 RAM, 512 GB NVMe SSD
- **Project Setup Steps:**
  1. Opened Code::Blocks and navigated to **File → New → Project**.
  2. Selected **Console Application**, selected **C** as the target language.
  3. Designated the project name as `Kioto_C_Lab01` inside the dedicated folder `Documents\Kioto\Lab01`.
  4. Selected **GNU GCC Compiler** as the default toolchain and verified the generation of the `main.c` starter template.
- **Setup Issue Encountered and Resolution:**
  Upon initial launch, Code::Blocks reported an environmental warning: *"Can't find compiler executable in your configured search path"*. This was investigated by opening **Settings → Compiler → Toolchain executables**. The installation path was updated to point directly to `C:\Program Files\CodeBlocks\MinGW`, after which `gcc.exe` was successfully identified and verified.

---

## 4. Code::Blocks Installation and Configuration

The development toolchain was deployed by downloading the official `codeblocks-20.03mingw-setup.exe` installer from the Code::Blocks repository. Choosing the bundled MinGW package ensured that both the Code::Blocks IDE shell and the GNU C Compiler toolchain were deployed simultaneously.

During installation, full component defaults were maintained. The compiler detection wizard automatically configured GNU GCC Compiler as the primary default compiler. To confirm compiler readiness, a test compilation was performed from the IDE command bar using **Build → Build and Run** (`F9`), verifying clean compilation and console rendering with zero warnings.

---

## 5. Hello Kioto Implementation (Exercise 1)

### Final Source Code (`src/exercise01_hello_kioto.c`)

```c
/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 01: Hello Kioto
 *
 * Student Name: Kariuki Abram
 * Registration Number: ENB211-0012/2024
 *
 * Instructions:
 *   - Include stdio.h.
 *   - Implement main().
 *   - Print "Hello, Kioto!".
 *   - Print a second line introducing your programme or course.
 *   - Return 0.
 */

#include <stdio.h>

int main(void)
{
    printf("Hello, Kioto!\n");
    printf("I am a student of BSc. Electrical and Electronic Engineering at JKUAT.\n");

    return 0;
}
```

### Explanation of Key Statements
- `#include <stdio.h>`: Preprocessor directive that imports the Standard Input/Output library header containing the prototype declaration for `printf()`.
- `int main(void)`: Defines the program entry point function. The keyword `int` specifies an integer return type, and `void` indicates that `main` does not accept command-line arguments in this implementation.
- `printf("Hello, Kioto!\n");`: Invokes standard library stream output, writing the literal character sequence to stdout, concluded by a newline escape sequence (`\n`).
- `return 0;`: Returns an exit status code of `0` to the calling shell/operating system, signaling successful execution without errors.

### Console Output
```text
Hello, Kioto!
I am a student of BSc. Electrical and Electronic Engineering at JKUAT.
```

---

## 6. Explanation of C Program Structure

A standard C application is structured systematically into logical layers:
1. **Preprocessor Directives (`#include`):** Executed by the preprocessor before actual compilation begins. Header files (`.h`) provide necessary function signatures, macros, and standard definitions.
2. **Main Function Definition (`main()`):** Serves as the mandatory starting execution point dictated by the C standard runtime. Program execution strictly begins at the first statement inside `main()`.
3. **Curly Braces (`{ ... }`):** Delineate lexical blocks and functional scope, grouping executable statements into the body of the function.
4. **Statements and Semicolons (`;`):** Every imperative statement in C represents an instruction and must terminate with a semicolon. The compiler uses semicolons as statement delimiters rather than whitespace or indentation.
5. **Exit Status Code (`return 0;`):** Relays execution termination metrics back to the operating environment. A value of zero represents conventional success, whereas non-zero values convey runtime error flags.

---

## 7. Variables and Data Types (Exercise 2)

### Final Source Code (`src/exercise02_variables.c`)

```c
/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 02: Variables and Data Types
 *
 * Student Name: Kariuki Abram
 * Registration Number: ENB211-0012/2024
 *
 * Instructions:
 *   - Declare and initialise one int, one float, one double and one char.
 *   - Use meaningful variable names.
 *   - Display each value with the correct printf format specifier.
 */

#include <stdio.h>

int main(void)
{
    int studentAge = 20;
    float examScore = 85.50f;
    double academicGpa = 3.82;
    char gradeLetter = 'A';

    printf("Student Age: %d\n", studentAge);
    printf("Exam Score: %f\n", examScore);
    printf("Academic GPA: %lf\n", academicGpa);
    printf("Grade Letter: %c\n", gradeLetter);

    return 0;
}
```

### Declared Variables Summary Table

| Identifier | Data Type | Assigned Value | Format Specifier | Technical Justification |
| :--- | :--- | :--- | :--- | :--- |
| `studentAge` | `int` | `20` | `%d` | Age is naturally a whole integer quantity with no fractional component. Standard 32-bit signed integer provides sufficient range. |
| `examScore` | `float` | `85.50f` | `%f` | Examination grades frequently contain fractional marks. Single precision (32-bit) floating point is memory efficient. |
| `academicGpa` | `double` | `3.82` | `%lf` (or `%f`) | Grade Point Average requires high precision representation (64-bit IEEE 754) to minimise rounding errors across multi-course evaluations. |
| `gradeLetter` | `char` | `'A'` | `%c` | Represents an individual discrete 8-bit ASCII character literal enclosed in single quotation marks. |

### Console Output
```text
Student Age: 20
Exam Score: 85.500000
Academic GPA: 3.820000
Grade Letter: A
```

---

## 8. Personalised Calculation (Exercise 3)

### Assigned Scenario Details
- **Student Registration Number:** ENB211-0012/2024
- **Variant ID:** V18
- **Scenario:** Distance travelled (A learner calculates the distance travelled over a fixed duration)
- **Assigned Input Values:**
  - Average Speed ($v$): $144\text{ km/h}$
  - Duration Time ($t$): $1.5\text{ hours}$
- **Operation:** Multiplication ($\text{distance} = \text{speed} \times \text{time}$)
- **Required Output Label:** `Distance travelled`

### Final Source Code (`src/exercise03_personalised_calculation.c`)

```c
/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: Kariuki Abram
 * Registration Number: ENB211-0012/2024
 * Variant ID: V18
 * Scenario: Distance travelled
 *
 * Instructions:
 *   - Record your assigned variant details above.
 *   - Use the two input values given for your variant.
 *   - Perform the required arithmetic operation.
 *   - Store the result in a meaningfully named variable.
 *   - Print the result using the required output label.
 */

#include <stdio.h>

int main(void)
{
    /* Input variables based on assigned task */
    double averageSpeed = 144.0; /* Average speed in km/h */
    double timeHours = 1.5;      /* Time duration in hours */

    /* Calculation: distance = speed * time */
    double distanceTravelled = averageSpeed * timeHours;

    /* Display the input values, operation and the final result */
    printf("Average Speed: %.2f km/h\n", averageSpeed);
    printf("Time: %.2f hours\n", timeHours);
    printf("Distance travelled: %.2f km\n", distanceTravelled);

    return 0;
}
```

### Independent Analytical Verification
To ensure verification independent of program runtime:
$$\text{Distance} = \text{speed} \times \text{time} = 144.0\text{ km/h} \times 1.5\text{ h} = 144 \times \frac{3}{2} = 72 \times 3 = 216.00\text{ km}$$

The manual mathematical calculation computes to exactly **216.00 km**, which matches the program execution output identically.

### Console Output
```text
Average Speed: 144.00 km/h
Time: 1.50 hours
Distance travelled: 216.00 km
```

---

## 9. Testing and Troubleshooting

During practical development, controlled experimentation and debugging were conducted:

1. **Semicolon Removal Experiment:**
   - **Action:** Removed the semicolon after `printf("Hello, Kioto!\n")`.
   - **Observed Result:** Compiler emitted `error: expected ';' before 'printf'` on the subsequent line.
   - **Explanation:** In C, statement boundaries are established exclusively by semicolons. Whitespace is ignored. Without the semicolon, the grammar parser attempted to parse the next keyword as an operand belonging to the uncompleted expression, generating a syntax error.
   - **Resolution:** Re-inserted the terminating semicolon.

2. **Newline Escape Sequence (`\n`) Experiment:**
   - **Action:** Removed `\n` from the first `printf()` call.
   - **Observed Result:** Console printed `Hello, Kioto!I am a student of BSc. Electrical and Electronic Engineering at JKUAT.` as a single merged line.
   - **Explanation:** The `printf()` routine writes directly to standard output without implicit line termination. Line feeds occur only when the explicit newline escape character (`\n`) is encountered in the format string.

3. **Compiler Flag Strictness Verification:**
   - All programs were verified against strict compliance flags: `-std=c11 -Wall -Wextra -pedantic`. Clean compilation was achieved with 0 errors and 0 warnings.

---

## 10. GitHub Workflow

### Workflow Details
- **Official Upstream Repository:** `https://github.com/Kiotolabs/kioto-ics2175-c-lab01.git`
- **Personal Fork URL:** `https://github.com/abramwakahiu/kioto-ics2175-c-lab01.git`
- **Active Working Branch:** `student/ENB211-0012-2024/lab01`
- **Target Pull Request URL:** `https://github.com/Kiotolabs/kioto-ics2175-c-lab01/pull/1`
- **PR Title:** `ICS2175 LAB01 - ENB211-0012/2024 - Kariuki Abram`

### Commit History Summary
1. `Commit 1: Complete Hello Kioto exercise` — Completed `exercise01_hello_kioto.c` printing student greeting and course line.
2. `Commit 2: Implement variables and data types` — Completed `exercise02_variables.c` declaring int, float, double, char with proper format specifiers.
3. `Commit 3: Complete personalised calculation and report` — Completed `exercise03_personalised_calculation.c` (Variant V18), verified math, and finalized `report/REPORT.md`.

### Technical Concept Explanation: Commit vs. Pull Request
- **Git Commit:** An immutable snapshot of changes recorded to the local repository DAG (Directed Acyclic Graph). It preserves author attribution, timestamp, commit message, and exact cryptographic SHA-1/SHA-256 state hashes, providing reproducible historical progression.
- **Pull Request (PR):** A GitHub collaboration mechanism requesting the upstream repository maintainer to review and merge changes from a feature branch. It facilitates code review, automated CI test validation (GitHub Actions), discussions, and quality assurance gates prior to code integration.

---

## 11. Screenshots and Evidence Reference

The required verification screenshots have been logged and verified in accordance with `report/EVIDENCE_CHECKLIST.md`:
1. *Code::Blocks environment and project tree showing active `main.c` workspace.*
2. *Clean build log with 0 errors and 0 warnings.*
3. *Console execution output for Exercise 1 (`Hello, Kioto!`).*
4. *Console execution output for Exercise 2 (Variables and format specifiers).*
5. *Source code and console output for Exercise 3 (`Distance travelled: 216.00 km`).*
6. *GitHub repository showing fork, feature branch `student/ENB211-0012-2024/lab01`, and commit history.*
7. *Pull Request view submitted to `Kiotolabs/kioto-ics2175-c-lab01:main`.*

---

## 12. Individual Reflection

- **What I Learned:** I solidified my understanding of the C compilation pipeline, transitioning from high-level human-readable syntax into machine instructions via the preprocessor, compiler, assembler, and linker. I also learned precise memory typing distinctions between integer and floating-point representations.
- **Challenges Faced:** Configuring the initial IDE compiler toolchain path required verifying binary locations on Windows. In addition, paying meticulous attention to syntax constraints such as format specifiers (`%d` vs `%f`) and terminating semicolons underscored the rigorous nature of C programming.
- **What I Would Do Differently:** In future laboratories, I will write automated unit test scripts and implement modular user input parsing (`scanf`) right from the start to enhance program flexibility and error handling.

---

## 13. Conclusion

All stated laboratory objectives were successfully attained. The development environment was comprehensively configured, all three laboratory exercises were implemented adhering to C11 standards and clean coding guidelines, the personalised scenario calculation was independently verified, and the full Git/GitHub fork-and-pull-request workflow was executed successfully.
