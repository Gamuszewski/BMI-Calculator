BMI Index Calculator - User Guide

Table of Contents
1. Introduction
2. Installation
3. Usage
4. History
5. Quitting the Program

1. Introduction:
The BMI Index Calculator is a simple command-line program that allows you to calculate and keep track of your Body Mass Index (BMI) and related information.
This readme provides instructions on how to use the program effectively.

3. Installation:
No installation is required for this program. You need a C++ compiler to compile and run the program. You can use tools like g++ to compile the source code and create an executable.

4. Usage:
To use the BMI Index Calculator, follow these steps:

- Run the compiled executable in your terminal or command prompt.

- Upon launching the program, you will be greeted with a welcome message and a menu:
    ```
    Welcome to BMI Index calculator
    Choose what would you like to do:
    1. New
    2. History
    0. Quit
    ```
- To proceed, enter the number corresponding to the action you want to take.

- If you choose '1. New', you will be prompted to enter your personal information:
    - Your name
    - Your surname
    - Your height (in centimeters)
    - Your weight (in kilograms)

  Note: The program will handle invalid inputs for height and weight (non-numeric values) and prompt you for valid inputs.

- After entering your information, the program will calculate your BMI index and provide feedback on whether your BMI is optimal, underweight, or overweight.

- Your information, along with the calculated BMI index, will be saved to a file named "BMI.txt".

4. History:
If you choose '2. History' from the menu, the program will display the historical records stored in the "BMI.txt" file. Each record includes the following details:
- Name
- Surname
- Height
- Weight
- BMI Index

5. Quitting the Program:
To exit the program, choose '0. Quit' from the menu. You will see the message: "Be more confident with your body, see you later!"

Note: Make sure the "BMI.txt" file is in the same directory as the executable for the program to work properly.

Remember that BMI is a simple measurement and may not provide a complete assessment of your health. Consult a medical professional for a more comprehensive evaluation.

For further assistance, contact: [Your Contact Information]

Enjoy using the BMI Index Calculator!
