Homework 2 – Floating-Point Overflow Detection
CS3339 – Spring 2026

Description
This program analyzes floating-point values to detect potential overflow caused by loss of precision in IEEE 754 single-precision representation.

The program takes two floating-point numbers as command-line arguments:

The first number represents a loop bound
The second number represents the increment value

It determines whether adding the increment to the first number results in no change due to floating-point precision limits. If such a condition occurs, the program reports a possible overflow and computes the threshold at which this happens.

Features
-Command-line argument handling
-IEEE 754 bit representation using "bitset"
- Overflow detection using floating-point comparison
- Threshold calculation for overflow
-Proper formatted output as required

How to Build
 Using Visual Studio

1. Open the project in Visual Studio
2. Build the project using:

 "Ctrl + Shift + B"

How to Run

In Visual Studio

1. Right-click the project → **Properties**
2. Navigate to:
   Debugging → Command Arguments
3. Enter two floating-point values (example):
   10 0.5
  
4. Run the program ("Ctrl + F5")

 Example Runs
 Example 1 (No Overflow)


Input:
10 0.5

Output:
First number: 10
Second number: 0.5
Bits (num1): 01000001001000000000000000000000
Bits (num2): 00111111000000000000000000000000
No overflow!

Example 2 (Overflow)

Input:
16777216 1

Output:
First number: 16777216
Second number: 1
Bits (num1): 01001011100000000000000000000000
Bits (num2): 00111111100000000000000000000000
Warning: Possible overflow!
Overflow threshold:
16777216
01001011100000000000000000000000

Known Limitations
-The threshold is computed using an iterative approach, which may not fully comply with the non–brute-force requirement in the assignment.
-The program assumes valid floating-point inputs.
-Only positive values are considered, as specified in the assignment.


Files Included
"main.cpp" – Source code for the program
  "README.md" – Documentation file

Authors
1. Dipesh Kumar Mahato
2. Ritesh Sah

Notes
This program demonstrates how floating-point precision limitations can affect arithmetic operations and lead to unexpected behavior such as overflow conditions.
