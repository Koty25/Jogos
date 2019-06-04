//Bibliotecas:
#include <iostream>
#include <string>
extern "C" {
#include "BCGfunc.h"
}



void PrintIntro(){
    
    //Initial massage to the player (Intro)
	constexpr int WORLD_LENGTH = 9;
	std::cout << "Welcome to Bulls and Cows, a fun word game.\n";
	std::cout << "Can you guess the " << WORLD_LENGTH << " letter isogram I'm thinking of?\n";
	std::cout << std::endl;
}