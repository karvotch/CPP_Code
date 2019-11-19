//
//  main.cpp
//  My First Game
//
//  Created by Ronald  Ginoti on 1/12/18.
//  Copyright © 2018 Ronald  Ginoti. All rights reserved.
//

#include <iostream>
	// Include std::strin
#include <string>
	// For std::setprecision
#include <iomanip>
	// For typeid()
#include <typeinfo>
	// Used for srand() and rand()
#include <cstdlib>
	// Used to get the time as a random generator seed.
#include <time.h>
	// A better time seed.
#include <ctime>
	// Has a ton of random number generation algorithms.
#include <random>
	// For std::sin() and std::cos()
#include <cmath>
	// For std::ifstream and std::ofstream.
#include <fstream>



int mixLetters()
{
		// Ask the user to enter a word to be scrambled
	std::cout << "Enter a word to be scrambled: ";
	std::string wordInput1;
	std::cin >> wordInput1;
	std::cout << wordInput1 << '\n';
	const std::string wordInput = wordInput1;
	
	
	
		// Use a variable to hold the length of the word.
	int wordLength = static_cast<int>(wordInput1.length());
	std::cout << wordLength << '\n';
	
	
	
		// Print out the second letter in the word.
	std::cout << wordInput1[1] << '\n';
	
	
	
		// Bases the random number on time.
	srand (static_cast<int>(time(NULL)));
		// Initialize randomNumber1 with a random value between 0 and wordlength (the length of the inputted word).
	int randomNumber1 = rand() % wordLength;
	char placeHolder1 = wordInput1[randomNumber1];
	std::cout << placeHolder1 << " " << randomNumber1 << '\n';
		// Make a second variable with a random number.
	int randomNumber2 = rand() % wordLength;
	std::cout << placeHolder1 << " " << randomNumber1 << " " << randomNumber2 << '\n';
		
	
	
		// Check if randomNumber2 is equal to randomNumber1. 
		// I don't want them to be equal because I am using them to swap two letters. Can't swap the same letter lol.
	while(randomNumber2 == randomNumber1)
	{
		randomNumber2 = rand() % wordLength;
		std::cout << placeHolder1 << " " << randomNumber1 << " " << randomNumber2 << '\n';
	}
	char placeHolder2 = wordInput1[randomNumber2];
	std::cout << placeHolder1 << " " << randomNumber1 << " " << placeHolder2 << " " << randomNumber2 << '\n';
	
	
	
		// Swapping the letter in randomNumber1's spot with the letter in randomNumber2's spot.
	wordInput1[randomNumber1] = placeHolder2;
		//std::cout << wordInput1 << '\n';
	
		// Swapping the letter in randomNumber2's spot with the previous letter in randomNumber1's spot.
	wordInput1[randomNumber2] = placeHolder1;
	std::cout << wordInput1 << '\n';
	
	
	
		// Allow the user to swap two letters to rearrange the word to be spelled correctly.
	std::cout << "Enter what letters you would like to swap to correct the word: ";
	int userInput1, userInput2;
	std::cin >> userInput1 >> userInput2;
	userInput1 -= 1;
	userInput2 -= 1;
	std::cout << "Swapping letters..." << '\n';
	char placeHolder3 = wordInput1[userInput1];
	wordInput1[userInput1] = wordInput1[userInput2];
	wordInput1[userInput2] = placeHolder3;
	
	
	
	if(wordInput == wordInput1)
	{
		std::cout << wordInput1 << "\nYou are correct!" << '\n';
	}
	else
	{
		std::cout << wordInput1 << "\nYou are wrong!" << '\n';
	}
	
	
	
	
	return 0;
}









int main() 
{
    
    

//	mixLetters();
	
	
	
	std::ofstream myfile("hello.txt");
//	myfile.open ("example.txt");
	myfile << "Writing this to a file.\n";
	myfile.close();
    
    
    

    return 0;
}
