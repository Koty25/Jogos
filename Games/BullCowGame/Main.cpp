#include <iostream>
#include <string>
#include "Functions.h"


int main(){
	//Initial massage to the player (Intro)
	constexpr int WORLD_LENGTH = 9;
	std::cout << "Welcome to Bulls and Cows, a fun word game.\n";
	std::cout << "Can you guess the " << WORLD_LENGTH << " letter isogram I'm thinking of?\n";
	std::cout << std::endl;

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