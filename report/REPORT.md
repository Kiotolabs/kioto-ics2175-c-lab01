# **NAME: Reye Alfred Kegode** 

# **REGISTRATION NUMBER: ENB 211-0030/2025** 

# **COURSE: Agricultural & Biosystems Engineering** 

**GITHUB USERNAME: MOLLEYYY** 

# **ASSIGNED SCENARIO: WATER TANK BASE AREA** 

# **VARIANT ID:** 

**UNIT: ICS 2175** 

# **LAB NUMBER: 1** 

**DATE: November 18**<sup>**th**</sup> **, 2026** 

# **<u>OBJECTIVES</u>** 

- a. To create and run a console project in Code::Blocks. 

- b. To use variables and data types. 

- c. To implement a personalised calculation. 

- d. To submit the work through a GitHub commit and pull request. 

# **<u>Environment and Setup</u>** 

- Windows 11, Code::Blocks 25.03!,compiler - MinGW GCC version 5.1.6 

- Steps: File > New > Project > Console application > [C/C++] > project name [name] > folder [path] > compiler GNU GCC. 

# **_Exercise 1 — Hello Kioto_** 

## **Source Code** 



<!-- Start of picture text -->
ST =<br>Biome cvor —<br><!-- End of picture text -->

## **Output: Hello, Kioto!** 



<!-- Start of picture text -->
BS “CAUsers\AcministratonDoc. +e - o x<br><!-- End of picture text -->

# **Key statements:** 

- **#include <stdio.h>** pulls in the standard I/O declarations so printf is known **.** 

- **int main(void)** is the entry point where execution starts. 

- **printf("Hello Kioto\n");** prints the text, and \n moves to a new line. 

- **return 0;** tells the operating system the program finished successfully. 

# **_Exercise 2 — Variables_** 

|Variable<br>i|Type|example|Why<br>i|
|---|---|---|---|
|[quantity]|Int|12|whole count,no fractions<br>l|
|[price]<br>i|Double|149.50|decimal,with moreprecision than float|
|[initial]|char|A|single character|



**_Exercise 3 — Personalised calculation_** 

**Assigned programming scenario:** A water tank team estimates the volume of a rectangular tank. 

Variable A **tank length (m) = 12** Variable B **tank width (m) = 2** Required calculation **length × width** Output label **Base area** 

# **Source code:** 



<!-- Start of picture text -->
LT En<br>Management * ns ~* mis het an Optom Hep Faoe<br><!-- End of picture text -->

## **Output: Tank length: 12** 

**Tank width: 2 Base area: 24** 



**_<u>Testng and troubleshooti</u> ing_** 

## **i. Removing a semicolon after printf(...).** 



<!-- Start of picture text -->
s a<br>SOG LTMBAIARIG> 600 rm, se ue cecualer, . "<br>» oO @iam@miooo aaisc 5 ; —<br>OwePlu cusor “ifiectose,<br><!-- End of picture text -->

GCC typically reports an error **“expected ‘;’ before ‘return’”.** The reported line is often the _next_ line, because the compiler only realises the statement hasn’t ended when it reaches the following token. Restore it and rebuild. 

## **ii. Removing \n:** 

the program still compiles, but the output isn’t followed by a newline, so the terminal prompt text runs on right after it. 

# **_<u>GitHub workflow</u>_** 

- **Repository URL: [https://github.com/Molleyyy/kioto-ics2175-c-lab01]** 

- **Branch: [student/ENB-211-0030/2025/lab01]** 

- **Pull request URL: [https://github.com/Molleyyy/kioto-ics2175-c-lab01/pulls ]** 

# **<u>DISCUSSION</u>** 

Programming depends on precision. Removing the semicolon after printf caused a build error that pointed to the line _after_ the mistake, so I learned to check the line above an error too. Removing \n still compiled but ran the output into the “Process returned 0” text, which affects presentation rather than correctness. 

Choosing data types was a real design decision: I used int for [whole values] .I verified my Exercise 3 result by hand calculation instead of trusting the program alone. I also learned that a commit saves a snapshot of my work, while a pull request lets others review it before merging. 

# **<u>CONCLUSION</u>** 

The lab met its objectives. I created and configured a console project in Code::Blocks using GCC , wrote and ran the Hello Kioto program, declared variables with appropriate data types, and implemented my personalised calculation for base area, getting a result of 24 that I independently verified. I also deliberately introduced errors, observed how the compiler reported them, and corrected them. Finally, I submitted my work through a GitHub commit and pull request. 

