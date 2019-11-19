////
////  main2.cpp
////  Practice
////
////  Created by Ronald  Ginoti on 8/26/19.
////
//
//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//#include <cmath>
//	// Used for memset to set a value to a memory address (Good for setting a value to an array)
//#include <string.h>
//using namespace std;
//
//
//
//
//int getRandomNumber(int min, int max) {
//	static constexpr double fraction {1.0 / (RAND_MAX + 1.0)};
//	
//	return min + static_cast<int>((max - min + 1)) * (rand() * fraction);
//}
//
//
//class Cash {
//	double cash;
//
//public:
//	Cash() {
//		int randomNumber = getRandomNumber(1, 1000);
//		cout << randomNumber << endl;
//		cash = (randomNumber / 100.00);
//	}
//	
//	double getCash() {
//		return cash;
//	}
//};
//
//
//int main() {
////	srand(static_cast<unsigned int>(time(nullptr)));
//	srand((unsigned)time(NULL));
//	for(int i = 0; i < 100; i++) {
//		cout << rand() << endl;
//	}
//	Cash cash;
//	double cashReceived = cash.getCash();
////	double cashReceived = 3.31;
////	double cashReceived = 3.91;
//	int dollarsReceived = cashReceived / 1;
//	double coinsReceived = cashReceived - dollarsReceived;
//	coinsReceived = (coinsReceived * 100);
////	coinsReceived = (int)(coinsReceived * 100);
//	double remainderOfCoin = coinsReceived - (int)coinsReceived;
//	if(remainderOfCoin > .8) {
//		coinsReceived = (int)coinsReceived + 1;
//	}
//	else {
//		coinsReceived = (int)coinsReceived;
//	}
////	double coinsReceived = .85 * 100;
//	cout << dollarsReceived << " " << coinsReceived / 100 << " " << cashReceived << endl;
//	
//		// Improved Version.
////	int coins[4] = {25, 10, 5, 1};
//	int coins[3] = {25, 10, 1};
////	int changeInCoins[4] = {0};
////	int changeInCoins[3] = {0};
//	int changeInCoins[2][3] = {0};
////	int totalCoinsNeeded = 0;
//	int totalCoinsNeeded[2] = {0};
////	string coinName[4] = {"Quarter", "Dime", "Nickel", "Penny"};
//	string coinName[3] = {"Quarter", "Dime", "Penny"};
//	cout << sizeof(coins) / sizeof(int) << endl;
//	
////	for(int i = 0; i < (sizeof(coins) / sizeof(int)); i++) {
////		if(coinsReceived < 1) {
////			break;
////		}
////		changeInCoins[i] += coinsReceived / coins[i];
////		coinsReceived = (int)coinsReceived % coins[i];
////		totalCoinsNeeded += changeInCoins[i];
//////		cout << coinName[i] << ": " << changeInCoins[i] << endl;
////		if(coinsReceived == 0) {
////			break;
////		}
////	}
//	
////	for(int i = 0; i < (sizeof(coins) / sizeof(int)); i++) {
////		if(coinsReceived < 1) {
////			break;
////		}
////		changeInCoins[i] += coinsReceived / coins[i];
////		coinsReceived = (int)coinsReceived % coins[i];
////		if(i == 0 && coinsReceived >= 5 && coinsReceived < 10) {
////			changeInCoins[i]--;
////			coinsReceived += coins[i];
////		}
////		totalCoinsNeeded += changeInCoins[i];
////			//		cout << coinName[i] << ": " << changeInCoins[i] << endl;
////		if(coinsReceived == 0) {
////			break;
////		}
////	}
//	
//	for(int j = 0; j < 2; j++) {
//		double coinsReceivedArray[2] = {coinsReceived, coinsReceived};
////		memset(changeInCoins, 0, sizeof(changeInCoins));
//		if(j == 1) {
//			if(changeInCoins[j - 1][0] >= 1) {
//				changeInCoins[j][0] = changeInCoins[j - 1][0] - 1;
//				totalCoinsNeeded[j] += changeInCoins[j][0];
//				coinsReceivedArray[j] = (int)coinsReceivedArray[j] - (coins[0] * changeInCoins[j][0]);
//			}
//		}
//		
//		for(int i = 0 + j;i < (sizeof(coins) / sizeof(int)); i++) {
//			if(coinsReceived < 1) {
//				break;
//			}
//			changeInCoins[j][i] += coinsReceivedArray[j] / coins[i];
//			coinsReceivedArray[j] = (int)coinsReceivedArray[j] % coins[i];
//			totalCoinsNeeded[j] += changeInCoins[j][i];
////			cout << coinName[i] << ": " << changeInCoins[i] << endl;
//			if(coinsReceived == 0) {
//				break;
//			}
//		}
//	}
//	
//	for(int j = 0; j < 2; j++) {
//		cout << endl;
//		for(int i = 0; i < (sizeof(coins) / sizeof(int)); i++) {
//			cout << coinName[i] << ": " << changeInCoins[j][i] << endl;
//		}
//	}				 
////	cout << totalCoinsNeeded << endl;
//	cout << totalCoinsNeeded[0] << " " << totalCoinsNeeded[1] << endl;
//	
////	int changeInQuarters = coinsReceived / 25;
////	coinsReceived = coinsReceived - ((double)changeInQuarters * 25);
//////	cout << coinsReceived << endl;
////	int changeInDimes = coinsReceived / 10;
////	coinsReceived = coinsReceived - ((double)changeInDimes * 10);
//////	cout << coinsReceived/.1 << endl;
////	int changeInNickels = coinsReceived / 5;
////	coinsReceived = coinsReceived - ((double)changeInNickels * 5);
////	int changeInPennies = coinsReceived / 1;
////	coinsReceived = coinsReceived - ((double)changeInPennies * 1);
//	
////	cout << changeInQuarters << " " << changeInDimes << " " << changeInNickels << " " << changeInPennies << " " << coinsReceived << endl;
//}
