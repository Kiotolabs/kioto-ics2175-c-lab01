# ICS 2175 – Laboratory 01 Report

## 1. Cover Information

- **Student Full Name:** Peter Mwai
- **Registration Number:** ENB211-0028/2025
- **Programme:** BSc. Agricultural and Biosystems Engineering
- **GitHub Username:** muleepeter04-ops
- **Assigned Scenario:** Event ticket revenue
- **Variant ID:** V05
- **Date:** 18 November 2025 

## 2. Objectives

TODO: List the objectives of this laboratory in your own words. 
1. To unerstand and explain what is source code, a compiler, an executable programme and an Integrated Development Environment (IDE). 
2. To install and configure Code::Blocks for use when writing programs. 
3. To learn how to create, save, compile and execute a basic C programme while identifying and correcting common programming errors we may encounter. 
4. Understanding how to declare variables, select suitable data types for the variables, assign values and display information using properly formatted output. 
5. Learning the use of Git and GitHub to track changes in projects, manage program versions, and submit practical programming work. 
6. To explain the completed program clearly and provide sufficient evidence of the all the steps that were followed when doing the work. 

## 3. Software and Hardware Environment

- **Operating System:** Windows 11 (e.g. Windows 11)
- **IDE:** Code::Blocks 25.03-r13644 (version)
- **Compiler:** GCC 14.2.0 (version)
- **Hardware:** HP Elitebook 840 G5 (e.g. laptop model, RAM)

## 4. Code::Blocks Installation and Configuration

TODO: Describe how you installed and configured Code::Blocks and GCC. Include screenshots. 
I installed Code::Blocks on my Windows computer by downloading the mingw-setup installer and following the installation instructions provided. During installation, I selected the version that included the MinGW compiler so as to provide the necessary GCC tools for compiling C programs. After installation, Code::Blocks was opened automatically and I configured it by selecting GNU GCC Compiler as the default compiler. I checked the compiler settings to ensure that the GCC executable files were correctly detected. I then created a test C  program and compiled and executed it to confirm that the IDE and compiler were properly configured and functioning correctly. 
[`report\screenshots\Code_Blocks_Screenshot.png`](report\screenshots\Code_Blocks_Screenshot.png)

## 5. Hello Kioto Implementation

TODO: Explain your Exercise 1 code. Include a code snippet and screenshot of the output. 
EXPLANATION:
The first line #include <stdio.h> instructs the compiler to include the Standard Input/Output library which contains the printf() function. The second line int main(void), declares the main function which serves as the starting point of execution in a C program. The statement printf("Hello, Kioto!\n"); instructs the computer to display the greeting message "Hello, Kioto!" on the screen. The printf() function is used to produce output in C programming. The statement printf("I am a student of BSc. Agricultural and Biosystems Engineering at JKUAT.\n"); displays my coure on the screen. The statement return 0; terminates the program and indicates that the program has executed successfully without encountering an error.

CODE SNIPPET:
#include <stdio.h>
int main(void)
{
    /* TODO: Print "Hello, Kioto!" */
    printf("Hello, Kioto!\n");
    /* TODO: Print a second line introducing your programme or course */
    printf("I am a student of BSc. Agricultural and Biosystems Engineering at JKUAT.\n");
    /* TODO: Return 0 */

    return 0;
} 

SCREENSHOTS: [`Hello Kioto Implementation`](report\screenshots\Hello_Kioto_Implementation_Screenshot.png)

## 6. Explanation of C Program Structure

TODO: Explain `#include`, `main()`, statements, `return 0;` and braces. 
A C programme begins with the #include directive, which allows the required header files and libraries, such as stdio.h, to be included. The main() function serves as the entry point where programme execution begins. Statements are instructions written inside the function to perform specific tasks, and each statement usually ends with a semicolon. The return 0; statement indicates that the programme has executed successfully and terminates the main function. Braces { } are used to define the beginning and end of a function or a block of code thus ensuring that the programme instructions are properly organized. 

## 7. Variables and Data Types

TODO: Explain the variables you declared in Exercise 2 and the format specifiers used. 
The program I wrote in Exercise 2 declares and initializes four variables using different data types to store different kinds of values. 
1. The int variable named age stores the whole number 12 and uses the %d format specifier to display its value. 
2. The float variable named height stores the decimal value 350.50 and uses %.2f to display the value to two decimal places. 
3. The double variable named weight stores 70.543289 and uses %lf as its format specifier to display the decimal value. 
4. Finally, the char variable named grade stores the single character 'A' and uses %c to display it. 
The printf() function is used to display each variable with an appropriate descriptive label, while the format specifiers ensure that each value is displayed according to its data type.

## 8. Personalised Calculation

TODO: Explain your assigned scenario, input values, operation and result. Include your variant ID. 
The assigned scenario involves calculating the total revenue generated from selling tickets. The programme declares two input variables: ticketsSold, which stores the number of tickets sold as 54, and ticketPrice, which stores the price of each ticket as KSh 250.00. A float variable named ticketRevenue is declared to store the calculated total revenue. The multiplication operator (*) is used to multiply the number of tickets sold by the price per ticket. Therefore, the total revenue is calculated as 54 × 250.00, giving **KSh 13,500.00**. The printf() function displays the result using the %.2f format specifier to ensure that the amount is shown to two decimal places. 
```c
/*
 * Registration Number: ENB211-0028/2025
 * Variant ID: V05
 * Scenario: Event ticket revenue
 */
```

## 9. Testing and Troubleshooting

TODO: Describe how you compiled and tested your programs and any errors you fixed. 
The programs were compiled and tested using Code::Blocks which comes with a builtin C compiler. First, each program was written in the code editor inside the appropriate files which are saved with a .c file extension because they are written in the C programming language. I clicked the Build in the upper menu in Code::Blocks so as to check the code for syntax errors before execution. After successfully compiling the programs, I executed the program by clicking the Run icon to display the output which allowed me to verify whether they produced the expected output. 
When running the programs, I came across some errors such as missing semicolons, incorrect format specifiers, spelling mistakes in variable names and missing braces. I corrected these errors and then executed the programs again to confirm that they worked correctly and displayed the expected results.

## 10. GitHub Workflow

TODO: Describe your fork, branch, commits and pull request (include screenshots/links). 
The GitHub workflow involved creating a fork of the original repository to establish a personal copy where changes could be made independently. A separate branch was then created to organize the practical work without directly modifying the main branch. The completed programming files and related documentation were added to the branch and saved through commits, which recorded the changes made at different stages. After reviewing the committed work, a pull request was created to propose merging the changes from the personal branch into the original repository. This process helped maintain an organized record of the work and facilitated the submission and review of the practical assignment. 
Fork Screenshot: [`report\screenshots\Fork_Screenshot.png`](report\screenshots\Fork_Screenshot.png)
Branch Screenshot: [`report\screenshots\Branch_Screenshot.png`](report\screenshots\Branch_Screenshot.png) 
Commit 1 Screenshot: [`report\screenshots\Commit_1_Complete_Hello_Kioto_Exercise.png`](report\screenshots\Commit_1_Complete_Hello_Kioto_Exercise.png) 
Commit 2 Screenshot: [`report\screenshots\Commit_2_Implement_variables_and_data_types.png`](report\screenshots\Commit_2_Implement_variables_and_data_types.png) 
Commit 3 Screenshot: [`report\screenshots\Commit_3_Complete_personalised_calculation.png`](report\screenshots\Commit_3_Complete_personalised_calculation.png) 
Commit 4 Screenshot: [`report\screenshots\Commit_4_Screenshots.png`](report\screenshots\Commit_4_Screenshots.png)  
Pull Request Screenshot: [`report\screenshots\Pull_Request_Screenshot.png`](report\screenshots\Pull_Request_Screenshot.png) 
Pull Request Link: https://github.com/Kiotolabs/kioto-ics2175-c-lab01/pull/22 


## 11. Screenshots

TODO: Embed screenshots with captions. 
- Code::Blocks installation / about dialog. 
Code::Blocks: [`report\screenshots\Code_Blocks_Screenshot.png`](report\screenshots\Code_Blocks_Screenshot.png)

- Your project in Code::Blocks. 
Project: [`report\screenshots\Project_Screenshot.png`](report\screenshots\Project_Screenshot.png)

- Successful compilation (build log). 
Hello Kioto: [`report\screenshots\Hello_Kioto_Build_Log_Screenshot.png`](report\screenshots\Hello_Kioto_Build_Log_Screenshot.png) 
Variables: [`report\screenshots\Variables_Build_Log_Screenshot.png`](report\screenshots\Variables_Build_Log_Screenshot.png) 
Personalised Calculation: [`report\screenshots\Personalised_Calculation_Build_Log.png`](report\screenshots\Personalised_Calculation_Build_Log.png) 

- Program execution in the console. 
Hello Kioto: [`report\screenshots\Hello_Kioto_Output.png`](report\screenshots\Hello_Kioto_Output.png)
Variables: [`report\screenshots\Variables_Output.png`](report\screenshots\Variables_Output.png) 
Personalised Calculation: [`report\screenshots\Personalised_Calculation_Output.png`](report\screenshots\Personalised_Calculation_Output.png) 

- Your GitHub fork, branch, commits and pull request. 
Fork Screenshot: [`report\screenshots\Fork_Screenshot.png`](report\screenshots\Fork_Screenshot.png)
Branch Screenshot: [`report\screenshots\Branch_Screenshot.png`](report\screenshots\Branch_Screenshot.png) 
Commit 1 Screenshot: [`report\screenshots\Commit_1_Complete_Hello_Kioto_Exercise.png`](report\screenshots\Commit_1_Complete_Hello_Kioto_Exercise.png) 
Commit 2 Screenshot: [`report\screenshots\Commit_2_Implement_variables_and_data_types.png`](report\screenshots\Commit_2_Implement_variables_and_data_types.png) 
Commit 3 Screenshot: [`report\screenshots\Commit_3_Complete_personalised_calculation.png`](report\screenshots\Commit_3_Complete_personalised_calculation.png) 
Commit 4 Screenshot: [`report\screenshots\Commit_4_Screenshots.png`](report\screenshots\Commit_4_Screenshots.png) 
Pull Request Screenshot: [`report\screenshots\Pull_Request_Screenshot.png`](report\screenshots\Pull_Request_Screenshot.png)

## 12. Individual Reflection

TODO: What did you learn? What was difficult? What will you do differently next time? 
The laboratory session provided practical knowledge of C programming and the use of development tools. I learned how to write, compile and execute C programmes, declare variables, use different data types and display formatted output. I also gained experience in installing and configuring Code::Blocks, using the GCC compiler and managing programming projects through Git and GitHub. One of the main challenges encountered was understanding compiler errors and correcting syntax mistakes during programme development. Another difficulty involved configuring the programming environment and understanding the GitHub workflow. In future practical sessions, I will pay closer attention to programming syntax, practise writing code regularly, test programmes more frequently and improve my understanding of version control tools. 

## 13. Conclusion

TODO: Summarise the laboratory. 
The laboratory provided a foundation in C programming and introduced the essential stages of program development. I gained practical skills in writing source code, declaring variables, performing arithmetic operations, compiling and executing programmes using Code::Blocks and GCC. The laboratory also introduced Git and GitHub as important tools for managing, tracking and submitting programming projects. Overall, the objectives of the laboratory were achieved, and I gained a better understanding of basic programming concepts and software development practices.