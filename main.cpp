#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/**
 * @brief Finds and prints the most common character from the input string.
 * 
 * This function counts the frequency of each character (ASCII range 0-127) in the input string,
 * identifies the character with the highest frequency, and prints it along with its occurrence count.
 * 
 * @param input The string input provided by the user. The function treats the string in a case-insensitive
 * manner by converting characters to uppercase during counting.
 * 
 * @return void This function doesn't return any value. It directly prints the most common character
 * and its frequency to the standard output.
 * 
 * @throws None This function does not explicitly throw any exceptions.
 */
void findMostCommonCharacter(const std::string& input) {
    // Array to count the occurrences of each character (ASCII range 0-127)
    int indexes[128] = {0}; // Initialize the array with zeros.

    // Iterate over each character in the input string
    for (char character : input) {
        // Convert character to uppercase to make the counting case-insensitive
        char upperChar = toupper(character);  
        // Increment the corresponding index for the character
        indexes[(int)character]++; 
    }

    // Variables to track the character with the highest count
    int max_index = 0;
    int max_counter = 0; // Counts the frequency of the most common character

    // Iterate over the array to find the character with the highest frequency
    for (int i = 0; i < 128; i++) {
        if (indexes[i] > max_counter) {
            max_counter = indexes[i]; // Update the highest count
            max_index = i; // Update the index of the most frequent character
        }
    }

    // Cast the max_index back to char to get the most common character
    char most_common = (char)max_index;

    // Print the result: most common character and its frequency
    std::cout << "The most common character is " << most_common 
              << " which appears " << max_counter << " times." << std::endl;
}

/**
 * @brief The main function that drives the program.
 * 
 * It prompts the user to enter a string, and then calls the `findMostCommonCharacter`
 * function to analyze the string and print the most common character.
 * 
 * @return int Returns 0 upon successful execution.
 * 
 * @throws None The program does not explicitly throw any exceptions.
 */
int main() {
    // Declare a string variable to store user input
    std::string var;
    
    // Prompt the user to input a string
    std::cout << "Enter a string: ";
    std::getline(std::cin, var); // Read the entire line of input, including spaces

    // Call the function to find the most common character in the user's input
    findMostCommonCharacter(var);

    // Return 0 to indicate successful execution
    return 0;
}
