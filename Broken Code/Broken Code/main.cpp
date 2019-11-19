//
//  main.cpp
//  Chp. 6 Excercises
//
//  Created by Ronald  Ginoti on 1/22/18.
//  Copyright © 2018 Ronald  Ginoti. All rights reserved.
//

#include <iostream>
// Has std::swap()
#include <utility>



enum StudentsNames
{
	STAN,
	DAN,
	MYMAN,
	JAN,
	CAN,
};



namespace animals
{
	enum Animals
	{
		CHICKEN,
		DOG,
		CAT,
		ELEPHANT,
		DUCK,
		SNAKE,
		MAX_ANIMALS,
	};
}


enum MonsterType
{
	ORC,
	OGRE,
	DRAGON,
	UNDEAD,
	DEMON,
};



struct Monster
{
	std::string nameOfMonster;
	MonsterType monsterType;
	double health;
	double speed;
	double size;	
};









int main() 
{
	
	
	
	// Even though this works this is not a valid way to assign a value to an array element.
	// You also cannot pass a user input into the size of a fixed array.
	int temp = 5;
	const int length = temp; // the value of length isn't known until runtime, so this is a runtime constant, not a compile-time constant!
	int array[length];
	array[0] = 5;
	std::cout << array[0] << '\n';
	
	
	
	// Using an enumeration as an element in an array.
	int testScores1[5] = {STAN, DAN, MYMAN, JAN, CAN};
	std::cout << testScores1[STAN] << testScores1[DAN] << '\n';
	
	
	
	double highTemperature[365] = {0.0};
	std::cout << highTemperature[0] << highTemperature[1] << highTemperature[2] << '\n';
	
	
	
	int numberOfLegs[animals::MAX_ANIMALS] = {2, 4, 4, 4, 2, 0};
	std::cout << "An elephant has " << numberOfLegs[animals::ELEPHANT] << " legs." << '\n';
	
	
	
	int choice1;
	int www = 1;
	
	while(www == 1)
	{
		std::cout << "Please enter a number between 1-9: ";
		std::cin >> choice1;
		std::cin.ignore(32767, '\n');
		
		if(std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
		}
		
		if(choice1 < 9 && choice1 > 1)
		{
			www = 0;
		}
		
	}
	int array1[] = { 4, 6, 7, 3, 8, 2, 1, 9, 5 };
	int numberOfElements = sizeof(array1) / sizeof(array1[0]);
	for(int num = 0; num < numberOfElements; ++num)
	{
		std::cout << array1[num] << " " << '\n';
		
	}
	
	
	
	for(int num = 0; num < numberOfElements; ++num)
	{
		if(array1[num] == choice1)
		{
			std::cout << "The number you chose (" << choice1 << ") is in index #" << num << '\n';
			break;
		}
		
	}
	
	
	
	int scores[] = { 84, 92, 76, 81, 56 };
	const int numStudents = sizeof(scores) / sizeof(scores[0]);
	
	int maxScore = 0; // keep track of our largest score
	int maxScoreIndex = 0;
	
	// now look for a larger score
	for (int student = 0; student < numStudents; ++student)
		if (scores[student] > maxScore)
		{
			maxScore = scores[student];
			maxScoreIndex = student;
		}
	
	std::cout << "The best score was in index #" << maxScoreIndex << '\n';
	
	
	
	// You can use an array to make multiple structs.
	Monster eachMonster[5];
	eachMonster[0] = {"Bob", UNDEAD, 200, 12, 5};
	eachMonster[1] = {"Joe", ORC, 500, 5, 15};
	eachMonster[2] = {"Mark", OGRE, 275, 15, 4};
	eachMonster[3] = {"Max", DRAGON, 1000, 20, 30};
	eachMonster[4] = {"Krel", DEMON, 350, 10, 6};
	std::cout << eachMonster[3].health << '\n';
	eachMonster[3].health = 2000;
	std::cout << eachMonster[3].health << '\n';
	
	
	
	int array2[20] = {25, 83, 10, 23, 100, 90, 45, 101, 39, 81, 50, 12, 5, 68, 97, 29, 39, 59, 86, 72};
	int array2Length = sizeof(array2) / sizeof(array2[0]);
	
	// Takes 12 scans to sort the array correctly.
	for(int jjj = 0; jjj < array2Length; ++jjj)
	{
		for(int iii = 0; iii < array2Length - 1; ++iii)
		{
			if(array2[iii] > array2[iii + 1])
			{
				int temp = array2[iii + 1];
				array2[iii + 1] = array2[iii];
				array2[iii] = temp;
			}
		}
	}
	for(int mmm = 0; mmm < array2Length; ++mmm)
	{
		std::cout << array2[mmm] << " ";
	}
	std::cout << '\n';
	
	
	
	int array3[20] = {25, 83, 10, 23, 100, 90, 45, 101, 39, 81, 50, 12, 5, 68, 97, 29, 39, 59, 86, 72};
	int array3Length = sizeof(array3) / sizeof(array3[0]);
	
	// Takes 12 scans to sort the array correctly.
	for(int idontknow = 0; idontknow < array3Length; ++idontknow)
	{
		for(int why = 0; why < array3Length -1; ++why)
		{
			if(array3[why] > array3[why + 1])
			{
				int whycantitbetemp = array3[why + 1];
				array3[why + 1] = array3[why];
				array3[why] = whycantitbetemp;
			}
		}
	}
	for(int noiwillnot = 0; noiwillnot < array3Length; ++noiwillnot)
	{
		std::cout << array3[noiwillnot] << " ";
	}
	std::cout << '\n';
	
	
	
    return 0;
}
