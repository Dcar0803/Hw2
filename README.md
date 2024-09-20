# Most Common Character Finder

This C++ program finds the most common character in a string provided by the user.

## How to Run the Program

### Requirements
- A C++ compiler (e.g., g++, clang++)
- Standard C++ library support (like `<string>`, `<iostream>`, `<cctype>`)

### Steps to Compile and Run

1. **Compile the code:**

   Open the terminal and navigate to the folder containing the source code file (e.g., `main.cpp`), then run the following command:
 
   ```bash
   g++ -o most_common_char main.cpp
   
2.Run the compiled program:

After compilation, run the program with:
./most_common_char

3. Enter a string:

You will be prompted to enter a string in the console, and the program will output the most common character along with how many times it appears.

----------------------------------------------------------------------------------------------

### Test Cases
1. The C++ libraries that I tried Catch2 and GoogleTest were not working properly on my device. I use assert. It tests a given condition and, if that condition evaluates to false, it triggers an error.

Test.cpp using Assert: 
         1. If the condition is true, the program continues executing as normal.
         2. If the condition is false, the program terminates immediately, and an error message is printed to the standard error output. This message typically includes the failed expression, the name of the file, and the line number where the assertion failed.

### Test Case 1: Simple Lowercase String

1. Input: "hello world"
2. Expected Output: The most common character is 'L' which appears 3 times.

### Test Case 2: String with Spaces and Uppercase

1. Input: "This is a test"
2. Expected Output: The most common character is ' ' which appears 3 times.

### Test Case 3: All Same Characters

1. Input: "aaaaaa"
2. Expected Output: The most common character is 'A' which appears 6 times.

### Test Case 4: Mixed Characters and Numbers

1. Input: "abc123abc"
2. Expected Output: The most common character is 'A' which appears 2 times.

-------------------------------------------------------------------------------------------------------------------------------

### Running the Tests
1. Compile tests.cpp:  g++ -o test tests.cpp

2. After compilation, run the program with:
./test
