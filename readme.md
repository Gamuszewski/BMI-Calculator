
# BMI Calculator - User Guide

## Table of Contents

1. [Introduction](#introduction)
2. [Usage](#usage)
3. [History](#history)
4. [Quitting the Program](#quitting-the-program)

## Introduction

The BMI Calculator is a command-line program written in C++ that allows you to calculate and keep track of your Body Mass Index (BMI) and related information. This README provides instructions on how to effectively use the program.

## Usage

To use the BMI Calculator, follow these steps:

1. Compile the source code using a C++ compiler, such as g++.

   ```shell
   g++ bmi_calculator.cpp -o bmi_calculator
   ```

2. Run the compiled executable in your terminal or command prompt.

   ```shell
   ./bmi_calculator
   ```

3. Upon launching the program, you will be greeted with a welcome message and a menu:

   ```
   Welcome to BMI Index calculator
   Choose what you would like to do:
   1. New
   2. History
   0. Quit
   ```

4. To proceed, enter the number corresponding to the action you want to take.

   - If you choose '1. New', you will be prompted to enter your personal information:
     - Your name
     - Your surname
     - Your height (in centimeters)
     - Your weight (in kilograms)

     Note: The program handles invalid inputs for height and weight (non-numeric values) and prompts you for valid inputs.

   - After entering your information, the program will calculate your BMI index and provide feedback on whether your BMI is optimal, underweight, or overweight.

   - Your information, along with the calculated BMI index, will be saved to a file named "BMI.txt."

5. **History:** If you choose '2. History' from the menu, the program will display the historical records stored in the "BMI.txt" file. Each record includes the following details:

   - Name
   - Surname
   - Height
   - Weight
   - BMI Index

6. **Quitting the Program:** To exit the program, choose '0. Quit' from the menu. You will see the message: "See you later!"

   Note: Make sure the "BMI.txt" file is in the same directory as the executable for the program to work properly.

   Remember that BMI is a simple measurement and may not provide a complete assessment of your health. Consult a medical professional for a more comprehensive evaluation.
