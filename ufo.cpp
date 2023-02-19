#include <iostream>
#include "ufo_functions.hpp"

int main() {

   std::string codeword = "vivalasvegas";
   std::string answer = "____________";
   int misses = 0;

   std::vector<char> incorrect;
   bool guess = false;

   char letter;

   while (answer != "codeword" && misses < 7){
        display_misses(misses);
        display_status(incorrect, answer);
        std::cout << "Please enter your guess: ";
        std::cin >> letter;
        for (int i = 0; i < codeword.length(); i++){
           if(letter == codeword[i]){
                answer[i] = letter;
                guess = false;
           }
           if (guess){
              std::cout << "Correct!\n";
           } else {
             std::cout << "\nIncorrect!\n";
             incorrect.push_back(letter);
             misses++;
           }
        }
        
        
   }

   end_game(answer, codeword);
 
}
