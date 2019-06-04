//Bibliotecas:
#include <iostream>
#include <string>
extern "C" {
#include "BCGfunc.h"
}




int main(int argc, char const *argv[]){

	PrintIntro();
	
	// Get a guess from the player
	std::cout << "Enter your guess: ";
	std::string Guess = "";
	std::getline(std::cin, Guess);
	// repeat the guess back to them
	std::cout << "Your guess was: " << Guess << std::endl;

	// get a guess from the player
	std::cout << "Enter your guess: ";
	std::getline(std::cin, Guess);
	// repeat the guess back to them
	std::cout << "Your guess was: " << Guess << std::endl;
    std::cout << std::endl;
    return 0;
}