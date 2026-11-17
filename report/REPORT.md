# ICS 2175 – Laboratory 01 Report

## 1. Cover Information

- **Student Full Name:** Victor Koome Mutwiri
- **Registration Number:** ENB211-0042/2025
- **Programme:** Bsc. Agriculture and Biosystems Engineering
- **GitHub Username:** @Mutwiri-Koome
- **Assigned Scenario:** A learner calculates the distance travelled over a fixed duration.
- **Variant ID:** ENB211-0042/2025
- **Date:** 17/11/2026

## 2. Objectives

The main objectives of this laboratory were to:
- Install and configure the Code::Blocks IDE and the GNU GCC C compiler on Windows.
- Understand the fundamental structure and syntax rules of a C program.
- Write, compile, and execute a basic C console program (`Hello Kioto`).
- Declare, initialize, and display variables using standard C data types (`int`, `float`, and `char`) and format specifiers.
- Implement and independently verify an arithmetic calculation based on an assigned personal scenario.
- Practise a structured Git and GitHub workflow involving forking, branching, committing, and submitting a Pull Request.


## 3. Software and Hardware Environment

- **Operating System:** Windows 11
- **IDE:** Code::Blocks 25.03
- **Compiler:** GNU GCC Compiler
- **Hardware:** Hp ZBook firefly,Intel Core i7, 32GB RAM

## 4. Code::Blocks Installation and Configuration

I installed the Code::Blocks bundle containing the MinGW GNU GCC compiler on Windows. After launching Code::Blocks, I verified that the GNU GCC Compiler was auto-detected under **Settings > Compiler > Toolchain executables**. Instead of creating a new project that would overwrite the repository structure, I enabled the left-hand **Management** pane (**View > Manager** / `Shift + F2`) and opened the starter `.c` source files directly from the cloned `src/` directory.


## 5. Hello Kioto Implementation

In `src/exercise01_hello_kioto.c`, I completed the `TODO` section using `printf()` statements to display my greeting, my programme (`BSc. Agriculture and Biosystems Engineering`), and a third custom line on separate console lines using the `\n` newline escape sequence.

```c
// [#include <stdio.h>

int main(void)
{
    /* TODO: Print "Hello, Kioto!" */
    printf("Hello, Kioto!\n");

    /* TODO: Print a second line introducing your programme or course */
    printf("I am studying Agriculture and Biosystems Engineering at JKUAT and learning C programming.\n");

    /* TODO: Return 0 */
    return 0;
}
]
```
### Controlled Experiments (Checkpoint B)
Following the lab instructions, I performed controlled modifications to observe how the compiler and runtime output responded:
    **Changing the greeting text:** Modifying the text inside the double quotation marks `"..."` compiled and ran without any errors because string literals are treated as plain text data by the compiler rather than C syntax commands.
    **Removing a semicolon / terminating quote:** Removing the semicolon from a `printf()` statement (and testing a missing terminating quote on line 7) caused compilation to fail immediately with the errors `error: missing terminating " character`, `error: expected expression before 'return'`, and `error: expected ';' before '}' token`. Restoring the missing punctuation resolved the build errors.
    **Removing `\n`:** Removing the `\n` escape sequence allowed the program to compile cleanly, but consecutive `printf()` statements printed continuously on the same console line without a line break. Restoring `\n` separated the output lines properly

## 6. Explanation of C Program Structure

Every C program follows a strict, modular structure:
    **`#include <stdio.h>`:** A preprocessor directive that includes the Standard Input/Output library header so functions such as `printf()` can be called.
    **`int main(void)`:** The mandatory entry point function where program execution begins. The `int` return type indicates that the function returns an integer exit status to the operating system.
    **Curly Braces `{ }`:** Mark the opening and closing boundaries of a block of code, grouping all statements inside `main()`.
    **Statements and Semicolons `;`:** Every executable C instruction is a statement that must terminate with a semicolon so the compiler knows where one instruction ends and the next begins.
    **`return 0;`:** Ends execution of `main()` and returns `0` to the operating system to indicate successful completion.

## 7. Variables and Data Types

In `src/exercise02_variables.c`, I declared and initialized variables using three core C data types and displayed them using matching `printf` format specifiers:
- **`int` (`%d`):** Stores whole integers without fractional parts accurately in memory.
- **`float` (`%.2f`):** Stores real numbers containing decimal points (using the `f` suffix such as `1.5f`), with `%.2f` formatting the output to two decimal places.
- **`char` (`%c`):** Stores a single ASCII character enclosed in single quotes (such as `'B'`).

```c
// [#include <stdio.h>

int main(void)
{
    /* TODO: Declare and initialise an int variable */
    int average_speed = 48;

    /* TODO: Declare and initialise a float variable */
    float time = 1.5f;

    /* TODO: Declare and initialise a double variable */
    double fuel_efficiency = 14.756;

    /* TODO: Declare and initialise a char variable */
    char vehicle_category = 'B';

    /* TODO: Print each value with a label and the correct format specifier */
    printf("Average speed (km/h): %d\n", average_speed);
    printf("Time taken (hours): %.1f\n", time);
    printf("Fuel efficiency (km/l): %.3lf\n", fuel_efficiency);
    printf("Vehicle category: %c\n", vehicle_category);

    return 0;
}
]
```
## 8. Personalised Calculation

- **Variant ID:** `ENB211-0042/2025`
- **Assigned Scenario:** A learner calculates the distance travelled over a fixed duration.
- **Input Values:**
  - `vehicle_category` (`char`): `'B'`
  - `average_speed` (`int`): `48` km/h
  - `time` (`float`): `1.5f` hours
- **Operation and Independent Verification:**
  Using the formula distance_travelled = average_speed * time, the program multiplies `average_speed` (`48`) by `time` (`1.5f`) and stores the product in the `float` variable `distance`. Calculating manually ($48 \times 1 = 48$ and $48 \times 0.5 = 24$, yielding $48 + 24 = 72.0$) independently verified the program's output of `72.00`.

```c
// [#include <stdio.h>

int main(void)
{
    /* --- PART 1: Assigned Values --- */
    /* TODO: Declare input variables with your assigned values */
    char vehicle_category = 'B';   // Single character category
    int average_speed = 48;        // Whole number speed in km/h
    float time = 1.5f;             // Decimal value for hours

    /* TODO: Declare a result variable */
    float distance_travelled;      // Decimal result for distance

    /* TODO: Perform the required arithmetic operation */
    distance_travelled = average_speed * time;

    /* TODO: Print the result using the required output label */
    printf("Vehicle category: %c\n", vehicle_category);
    printf("Average speed (km/h): %d\n", average_speed);
    printf("Time taken (hours): %.1f\n", time);
    printf("Distance travelled (km): %.2f\n", distance_travelled);
    printf("A vehicle of category %c covered a distance of %.2f km at a speed of %d km/h for %.1f hours.\n\n",
           vehicle_category, distance_travelled, average_speed, time);

    /* --- PART 2: Extra Optional Assignment (User Input) --- */
    printf("--- User Input Version ---\n");
    printf("Enter Vehicle category: ");
    scanf(" %c", &vehicle_category);

    printf("Enter average speed: ");
    scanf("%d", &average_speed);

    printf("Enter time taken: ");
    scanf("%f", &time);

    // Recalculate using user-entered values
    distance_travelled = average_speed * time;

    printf("Vehicle category: %c\n", vehicle_category);
    printf("Average speed (km/h): %d\n", average_speed);
    printf("Time taken (hours): %.1f\n", time);
    printf("Distance travelled (km): %.2f\n", distance_travelled);
    printf("A vehicle of category %c covered a distance of %.2f km at a speed of %d km/h for %.1f hours.\n",
           vehicle_category, distance_travelled, average_speed, time);

    return 0;
}
]
```
## 9. Testing and Troubleshooting

Each `.c` file was built and executed in Code::Blocks 25.03 (`Build and Run`) to verify `0 error(s), 0 warning(s)` before inspecting the console output. Key errors tested and resolved during the lab included:
- **Intentional Syntax Experiment (Exercise 1):** Removing statement punctuation on line 7 triggered `error: expected expression before 'return'` and `error: expected ';' before '}' token` in the Build messages log. Restoring the terminating character and semicolon fixed the build.
- **Spaces in Variable Identifiers (Exercise 2 / 3):** Declaring multi-word variables with spaces (`int average speed = 48;` and `float disatance travelled = ...`) produced compiler errors (`error: expected '=', ',', ';', 'asm' or '__attribute__' before 'speed'` and `error: 'speed' undeclared`) because C variable names cannot contain spaces. Renaming identifiers using snake_case (`average_speed`, `distance_travelled`) and correcting the format specifier (`%.2f`) resolved all compilation errors.


## 10. GitHub Workflow

1. **Fork:** Forked the upstream repository `Kiotolabs/kioto-ics2175-c-lab01` to my personal GitHub account at `https://github.com/Mutwiri-Koome`.
2. **Clone & Branch:** Cloned the fork locally via GitHub Desktop and worked on my personal branch `student/ENB211-0042-2025/lab01`.
3. **Commit & Push:** Committed the completed C source files (`src/*.c`), report (`report/REPORT.md`), evidence checklist (`report/EVIDENCE_CHECKLIST.md`), and screenshots (`report/screenshots/*`) with descriptive commit messages and pushed them to `origin`.
4. **Pull Request:** Opened Pull Request `#8` targeting `Kiotolabs/kioto-ics2175-c-lab01:main` (`https://github.com/Kiotolabs/kioto-ics2175-c-lab01/pull/8`) and left it open for automated validation and lecturer review.

## 11. Screenshots

### Exercise 01 — Hello Kioto (Source Code, Intentional Syntax Experiment, and Console Output)
![Exercise 01 Code](screenshots/exercise01_code.png)
![Exercise 01 Intentional Syntax Error](screenshots/exercise01_error_1.png)
![Exercise 01 Console Result](screenshots/exercise01_result.png)

### Exercise 02 — Variables and Data Types (Source Code, Identifier Spacing Error, and Console Output)
![Exercise 02 Code](screenshots/exercise02_code.png)
![Exercise 02 Variable Spacing Error](screenshots/exercise02_error_1.png)
![Exercise 02 Console Result](screenshots/exercise02_result.png)

### Exercise 03 — Personalised Calculation (Source Code and Console Output)
![Exercise 03 Code](screenshots/exercise03_code.png)
![Exercise 03 Console Result](screenshots/exercise03_result.png)

### GitHub Workflow (Fork, Feature Branch, Commits, and Pull Request)
![GitHub Fork](screenshots/github_fork.png)
![GitHub Feature Branch](screenshots/github_feature_branch.png)
![GitHub Commit History](screenshots/github_commits.png)
![GitHub Pull Request](screenshots/github_pr.png)

### Code::Blocks Installation / About Dialog
![Code::Blocks About Dialog](screenshots/codeblocks_about.png)

## 12. Individual Reflection

- **What I Learned:** I learned how C programs are structured, why strict punctuation like semicolons and quotes matters to the compiler whereas string literal contents can change freely, how format specifiers (`%d`, `%c`, `%.2f`) format console output, and how GitHub forks, branches, commits, and Pull Requests track software revisions.
- **What Was Difficult:** Understanding how local file edits in Code::Blocks connect to GitHub Desktop commits and cross-fork Pull Requests—as well as realizing that `REPORT.md` and screenshot files live inside the repository folder itself—was initially challenging.
- **What I Will Do Differently Next Time:** In future labs, I will read all documentation files in `docs/` completely before writing code, verify identifier naming rules carefully, and push incremental commits after each exercise.

## 13. Conclusion

All objectives of Laboratory 01 were successfully achieved. Code::Blocks 25.03 and the GCC compiler were properly configured, all three C exercises compiled and ran cleanly, the controlled syntax experiments and personalised distance calculation (`72.00`) were verified, and the full codebase, report, and screenshot evidence were submitted via Pull Request `#8` on GitHub.
