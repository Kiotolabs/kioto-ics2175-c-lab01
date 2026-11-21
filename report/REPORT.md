
ICS 2175 – Laboratory 01 Report
1. Cover Information

- Student Full Name: SADDIMBAH PHAIZARD BRACKSTONE
- Registration Number: ENB211-0060/2025
- Programme: BSc Agricultural and Biosystems Engineering
- GitHub Username: Saddimbah
- Assigned Scenario: Study Hours
- Variant ID: V21
- Date: 21 November 2026
2. Objectives
The objectives of this laboratory were to learn the fundamentals of C programming, understand the structure of a C program, declare and use variables and data types, perform arithmetic calculations, compile programs using GCC, and use GitHub for version control and assignment submission.
3. Software and Hardware Environment

- Operating System: Windows 11
- IDE: Code::Blocks 25.03
- Compiler: GNU GCC Compiler
- Hardware: Personal laptop
4. Code::Blocks Installation and Configuration
Code::Blocks was installed together with the GCC compiler package. After installation, the IDE was launched and the compiler settings were checked to confirm that GCC had been detected correctly. A Console Application project named Kioto_C_Lab01 was created and used to develop the laboratory exercises. The programs were compiled and executed successfully within Code::Blocks.
5. Hello Kioto Implementation
Exercise 1 required the creation of a simple C program that displays text on the screen using the printf() function.
Example code:
#include <stdio.h>

int main(void)
{
    printf("Hello, Kioto!\n");
    printf("I am a student of BSc Agricultural and Biosystems Engineering.\n");

    return 0;
}
The program compiled successfully and displayed the required output.
6. Explanation of C Program Structure
The statement #include <stdio.h> imports the standard input/output library required for using functions such as printf().
The main() function is the entry point of the program where execution begins.
Statements inside the function body are executed sequentially.
Braces {} define the beginning and end of the function block.
The statement return 0; indicates that the program executed successfully.
7. Variables and Data Types
The following variables were used:
Variable	Data Type	Value
studyHours	int	4
numberOfDays	int	5
totalStudyHours	double	20.0
category	char	A

The %d format specifier was used for integer values, %lf for double values, and %c for character values. Appropriate data types were selected based on the values being stored.
8. Personalised Calculation
Variant ID: V21
Scenario: Study Hours
Input Values:

- Study Hours = 4
- Number of Days = 5
Operation:
Multiplication
Calculation:
Total Study Hours = Study Hours × Number Of Days

Total Study Hours = 4 × 5

Total Study Hours = 20
Source Code:
#include <stdio.h>

int main(void)
{
    int studyHours = 4;
    int numberOfDays = 5;
    int totalStudyHours;

    totalStudyHours = studyHours * numberOfDays;

    printf("Total study hours: %d\n", totalStudyHours);

    return 0;
}
Output:
Total study hours: 20
The manually calculated result matched the program output.
9. Testing and Troubleshooting
The programs were compiled using the GNU GCC compiler. Several tests were performed to verify correctness.
A semicolon was intentionally removed from a statement to observe the compiler error. After restoring the semicolon, the program compiled successfully.
The newline character (\n) was removed temporarily to observe changes in output formatting. Reintroducing the newline corrected the output.
The input values were also modified to verify that program calculations were working correctly.
10. GitHub Workflow
A GitHub repository was created and used to manage the laboratory work. A dedicated branch was created for development. Changes were committed regularly and pushed to GitHub. A pull request was created to submit the completed work for review.
Repository URL:
https://github.com/Saddimbah/kioto-ics2175-c-lab01
Branch:
student/ENB211-0060-2025/lab01
A pull request was submitted after completing all exercises and updating the report.
11. Screenshots
Include the following screenshots:

- Figure 1: Code::Blocks installation and project setup.
- Figure 2: Exercise 1 source code.
- Figure 3: Exercise 1 program output.
- Figure 4: Exercise 2 source code and output.
- Figure 5: Exercise 3 source code.
- Figure 6: Exercise 3 program output.
- Figure 7: GitHub repository.
- Figure 8: Pull request submission.
12. Individual Reflection
This laboratory improved my understanding of C programming and program development. I learned how to create and execute C programs, use variables and data types, perform calculations, and format program output. I also gained practical experience using GitHub for version control and submission of programming assignments.
The most challenging aspect of the laboratory was understanding the GitHub workflow involving branches, commits, and pull requests. Through practice, I became more confident in managing source code and collaborating using GitHub.
13. Conclusion
The objectives of the laboratory were successfully achieved. I learned the basic structure of C programs, applied variables and data types correctly, completed a personalised calculation, and gained experience using GitHub for software development and submission. The practical provided a strong foundation 
