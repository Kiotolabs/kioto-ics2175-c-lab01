# Laboratory 01 Instructions: Getting Started with C Programming

## Overview

Complete three exercises in the `src/` folder. Each exercise is a separate C program.
You will also complete a technical report in `report/REPORT.md`.

## Exercise 1: Hello Kioto (`src/exercise01_hello_kioto.c`)

### Goal
Write your first C program.

### Requirements

- Include `stdio.h`.
- Implement `main()`.
- Print exactly: `Hello, Kioto!`
- Print a second line introducing your programme or course, for example:
  `I am a student of BSc. Computer Technology at JKUAT.`
- Return `0`.

### Starter TODO

Open `src/exercise01_hello_kioto.c` and complete the `TODO` sections. Do not just copy a
finished solution; type the code yourself so you learn the structure.

### Example Output

```
Hello, Kioto!
I am a student of BSc. Computer Technology at JKUAT.
```

## Exercise 2: Variables and Data Types (`src/exercise02_variables.c`)

### Goal
Declare, initialise and display variables of four different types.

### Requirements

Declare and initialise:

- One `int`
- One `float`
- One `double`
- One `char`

Use **meaningful variable names** (not `x`, `y`). Display each value using the correct
`printf` format specifier:

| Type | Format specifier |
|------|------------------|
| `int` | `%d` |
| `float` | `%f` |
| `double` | `%lf` (or `%f` in printf) |
| `char` | `%c` |

Print a label before each value, for example:

```
Integer value: 21
Float value: 3.14
Double value: 2.718281
Character value: A
```

## Exercise 3: Personalised Calculation (`src/exercise03_personalised_calculation.c`)

### Goal
Complete an individual calculation assigned to you by the lecturer.

### Your Variant

Your lecturer will give you a **Variant ID** (for example `V07`) and the matching scenario.
Record the following in a comment block at the top of your source file:

```c
/*
 * Registration Number: ENE-01-1234-26
 * Variant ID: V07
 * Scenario: Stationery order cost
 */
```

and in `report/REPORT.md`.

### Requirements

- Use the two input values given for your variant.
- Perform the required arithmetic operation.
- Store the result in a variable with a meaningful name.
- Print the result using the required output label.
- Include comments explaining the calculation.

### Example (illustrative only)

```
Total cost: 150.00
```

### Important

- Do not change your input values or scenario.
- Do not copy another student's variant.
- Your program must compile and run without errors.

## Testing and Troubleshooting

- Compile with `gcc -std=c11 -Wall -Wextra -pedantic`.
- Fix **all** warnings and errors before committing.
- Read compiler messages carefully: they tell you the line number and the problem.
- If stuck, check `docs/FAQ.md` and open a GitHub Issue using the help template.

## Report

Copy `report/REPORT_TEMPLATE.md` to `report/REPORT.md` and complete all sections.
See `docs/REPORT_GUIDELINES.md`.