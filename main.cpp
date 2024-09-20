#include <iostream>
#include <string>
#include <cctype>
using namespace std;

//A function that finds the most common character from the user input string
void findMostCommonCharacter(const std::string& input){

    int indexes[128] = {0}; //Zero in range 128 

    //Iterate over each character 

    //Creating for iterating over character in the string variable var
    for (char character : input){ //for each character 'character' in string variable 'var'
        char upperChar = toupper(character);  // Convert to uppercase
        indexes[(int)character] ++; // ++ is a shorcut for +=1
    }//end of for loop

    //Find character with highest counter
    int max_index = 0;
    int max_counter = 0; //this counts the amount the character is seen 
    
    //Using a for loop to look for the highest counter in the range of 128 of indexes
    for (int i = 0; i < 128; i++){
        if (indexes[i]> max_counter){
            max_counter = indexes[i];
            max_index = i;

        }//end of if statement

    }//end of for loop 

    //Print character 

    //Creating a variable most_common that tells the 
    char most_common = (char)max_index;

    std::cout << "The most common character is " << most_common << " which appears " << max_counter << " times." << std::endl;


}//end of findMostCommonCharacter function

int main(){

    //Ask user for string 
    std::string var;
    std::cout << "Enter a string: ";
    std::getline(std::cin, var);

    //Debugging to see if the entire string was collected
    //std::cout << var; 
    
    //Calling the findMostCommonCharacter function
    findMostCommonCharacter(var);
    return 0;

}//end of main 

