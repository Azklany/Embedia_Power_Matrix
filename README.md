# Embedia_Power_Matrix

You are required to write a C program to work with Embedia Power Matrix, which is a matrix with at least 3 rows by 3 columns. In this matrix, each element (except for elements of the first and last rows) should equal the number below it raised to the power of the number above it. The numbers in the matrix are represented as characters enclosed in single quotation marks.

Your program should include the following functionalities:

1. A function to calculate the power given a base and an exponent.
2. A function to convert a character representing a digit to its corresponding numerical value.
3. A function to determine if a given matrix is an Embedia Power Matrix.
4. Test cases to verify the correctness of your functions.

Please ensure that you do not use any built-in functions for these tasks.

Instructions:

1. Implement each function as described below.
2. Write a main function to test your functions.
3. Provide examples of test cases to demonstrate the correctness of your program.

Test Cases:

- Test Case 1:
  Matrix:
  ```
  "3" "2" '2"
  "8" "9" '25"
  "2" "3" "5"
  ```
  Expected Output: Embedia Power Matrix

- Test Case 2:
  Matrix:
  ```
  "1" "3" "5"
  "3" "7" "11"
  "5" "11" "17"
  ```
  Expected Output: Not an Embedia Power Matrix

- Test Case 3:
  Matrix:
  ```
  "3" "4" "2"
  "512" "256" "49"
  "8" "4" "7"
  ```
  Expected Output: Embedia Power Matrix
