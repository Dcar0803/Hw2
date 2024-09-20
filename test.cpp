#include <iostream>
#include <cassert>
#include <string>
#include <sstream>
using namespace std;

// Duplicate function definition for testing purposes
void findMostCommonCharacter(const std::string& input){

    int indexes[128] = {0}; 

    // Iterate over each character in the input string
    for (char character : input){
        char upperChar = toupper(character);  // Convert to uppercase
        indexes[(int)upperChar] ++; 
    }

    // Find the character with the highest count
    int max_index = 0; 
    int max_counter = 0; 
    
    
    for (int i = 0; i < 128; i++){
        if (indexes[i] > max_counter){
            max_counter = indexes[i];
            max_index = i;
        }
    }

    // Print the most common character
    char most_common = (char)max_index;
    std::cout << "The most common character is '" << most_common << "' which appears " << max_counter << " times." << std::endl;
}

// Test cases for the function
void testMostCommonCharacter() {
    // Test case 1:  lowercase string
    string input1 = "hello world";
    stringstream buffer1;
    streambuf* old1 = cout.rdbuf(buffer1.rdbuf());
    findMostCommonCharacter(input1);
    string output1 = buffer1.str();
    assert(output1 == "The most common character is 'L' which appears 3 times.\n");

    // Test case 2: String with spaces and uppercase
    string input2 = "This is a test";
    stringstream buffer2;
    streambuf* old2 = cout.rdbuf(buffer2.rdbuf());
    findMostCommonCharacter(input2);
    string output2 = buffer2.str();
    assert(output2 == "The most common character is ' ' which appears 3 times.\n");

    // Test case 3: All same characters
    string input3 = "aaaaaa";
    stringstream buffer3;
    streambuf* old3 = cout.rdbuf(buffer3.rdbuf());
    findMostCommonCharacter(input3);
    string output3 = buffer3.str();
    assert(output3 == "The most common character is 'A' which appears 6 times.\n");

    // Test case 4: Mixed characters and numbers
    string input4 = "abc123abc";
    stringstream buffer4;
    streambuf* old4 = cout.rdbuf(buffer4.rdbuf());
    findMostCommonCharacter(input4);
    string output4 = buffer4.str();
    assert(output4 == "The most common character is 'A' which appears 2 times.\n");

    
    string input5 = "1";
    stringstream buffer5;
    streambuf* old5 = cout.rdbuf(buffer5.rdbuf());
    findMostCommonCharacter(input5);
    string output5 = buffer5.str();
    assert(output5 == "The most common character is '1' which appears 1 times.\n");

    // Restore cout
    cout.rdbuf(old1);
    cout.rdbuf(old2);
    cout.rdbuf(old3);
    cout.rdbuf(old4);
    cout.rdbuf(old5);
    
    // Print success message for tests
    cout << "All test cases passed!" << endl;
}

int main() {
    // Run the test cases
    testMostCommonCharacter();
    return 0;
}
