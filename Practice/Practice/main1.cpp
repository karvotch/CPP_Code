////
////  main.cpp
////  Practice
////
////  Created by Ronald  Ginoti on 8/21/19.
////
//
//#include <iostream>
//#include <ctime>
//#include <cmath>
//using namespace std;
//
//#define MAX_SIDE_LENGTH 1000
//int SIDE_LENGTH = 0;
//int LONGEST_COIN_DIST = 0;
//int GRID_AREA = 0;
//int COIN_COUNT = 0;
//const int PLAYER_COUNT = 6;
//
//
//
//class Point {
//	int x, y;
//	
//public:
//	
//	int* getPoints() {
//		static int i[2];
//		i[0] = x;
//		i[1] = y;
//		return i;
//	}
//	
//	void setPoints(int *i) {
//		x = *i;
//		y = *(i + 1);
//	}
//};
//
//
//int * findClosestCoin(Point *myPoint, Point *coinPoint) {
//	
//	int *myPointPointer = myPoint->getPoints();
//	int myPointArray[2] = {*(myPointPointer), *(myPointPointer + 1)};
//	
//	int closestCoinDistance = SIDE_LENGTH * 2;
//	int closestCoinPointArray[2] = {(SIDE_LENGTH - 1), (SIDE_LENGTH - 1)};
//	
//	for(int i = 0; i < COIN_COUNT; i++) {
//		int *coinPointPointer = coinPoint->getPoints();
//		int coinPointArray[2] = {*(coinPointPointer), *(coinPointPointer + 1)};
//		int distanceToCoin = ((abs(myPointArray[0] - coinPointArray[0])) + (abs(myPointArray[1] - coinPointArray[1])));
//		if(distanceToCoin < closestCoinDistance) {
//			closestCoinDistance = distanceToCoin;
//			closestCoinPointArray[0] = coinPointArray[0];
//			closestCoinPointArray[1] = coinPointArray[1];
//		}
//	}
//	
//	static int results[3] = {closestCoinDistance, closestCoinPointArray[0], closestCoinPointArray[1]};
//	
//	return results;
//}
//
//
//void findNextClosestCoin(int *playerPoint, int *coinArray) {
//	playerPoint[2] = GRID_AREA;
//	int coinBlocked = playerPoint[3];
//	int *coinClosestDistance = nullptr;
//	int playerToCoinDist = 0;
//	for(int l = 0; l < COIN_COUNT; l++) {
////		cout << *(coinArray + (l*4)) << endl;
////		if(playerPoint[3] == (l + 4)) {
//		if(coinBlocked == (l)) {
//			continue;
//		}
//		else {
//			if(playerPoint[l+4] < playerPoint[2] && playerPoint[l+4] < *(coinArray + ((l*4) + 3))) {
//				playerPoint[2] = playerPoint[l+4];
////				playerPoint[3] = (l+4);
//				playerPoint[3] = (l);
////				int *coinClosestDistance = (coinArray + ((l*4) + 3));
////				*coinClosestDistance = playerPoint[l+4];
//				coinClosestDistance = (coinArray + ((l*4) + 3));
//				playerToCoinDist = playerPoint[l+4];
//			}
//		}
//	}
//	*coinClosestDistance = playerToCoinDist;
//	
//}
//
//
//int * findClosestCoinWithOpponents(Point *coinPoints, Point *playerPoints) {
//	
//	int playerArray[6][10];
//	int coinArray[6][4];
//	
//	for(int i = 0; i < PLAYER_COUNT; i++) {
//		int *playerPointPointer = playerPoints[i].getPoints();
//		playerArray[i][0] = *(playerPointPointer);
//		playerArray[i][1] = *(playerPointPointer + 1);
//	}
//	
//	for(int i = 0; i < COIN_COUNT; i++) {
//		int *coinPointPointer = coinPoints[i].getPoints();
//		coinArray[i][0] = *(coinPointPointer);
//		coinArray[i][1] = *(coinPointPointer + 1);
//		coinArray[i][2] = 0;
//		coinArray[i][3] = GRID_AREA;
//	}
//	
//	for(int i = 0; i < PLAYER_COUNT; i++) {
//		int shortestDistToCoin = GRID_AREA;
//		int shortestDistCoinIndex = 0;
//		for(int j = 0; j < COIN_COUNT; j++) {
//			int distToCoin = (abs((playerArray[i][0] - coinArray[j][0])) + abs((playerArray[i][1] - coinArray[j][1])));
//			playerArray[i][j+4] = distToCoin;
//			if(distToCoin < shortestDistToCoin) {
//				shortestDistToCoin = distToCoin;
//				shortestDistCoinIndex = j;
//			}
//		}
//		
//		if(shortestDistToCoin < coinArray[shortestDistCoinIndex][3]) {
//			coinArray[shortestDistCoinIndex][3] = shortestDistToCoin;
//		}
//		
//		playerArray[i][2] = shortestDistToCoin;
//		playerArray[i][3] = shortestDistCoinIndex;
//	}
//	
//	for(int i = 0; i < PLAYER_COUNT; i++) {
//		for(int j = 0; j < PLAYER_COUNT; j++) {
//			if(i == j) {}
//			else {
//				if((playerArray[i][3] == playerArray[j][3]) && (playerArray[i][2] < playerArray[j][2])) {
//					findNextClosestCoin(playerArray[j], *coinArray);
//	//				playerArray[j][2] = GRID_AREA;
//	//				for(int l = 0; l < COIN_COUNT; l++) {
//	//					if(playerArray[j][3] == (l + 4)) {
//	//						continue;
//	//					}
//	//					else {
//	//						if(playerArray[j][l+4] < playerArray[j][2]) {
//	//							playerArray[j][2] = playerArray[j][l+4];
//	//							playerArray[j][3] = (l+4);
//	//						}
//	//					}
//	//				}
//				}
//				else if((playerArray[i][3] == playerArray[j][3]) && (playerArray[i][2] > playerArray[j][2])) {
//					findNextClosestCoin(playerArray[i], *coinArray);
//	//				playerArray[i][2] = GRID_AREA;
//	//				for(int l = 0; l < COIN_COUNT; l++) {
//	//					if(playerArray[i][3] == (l + 4)) {
//	//						continue;
//	//					}
//	//					else {
//	//						if(playerArray[i][l+4] < playerArray[j][2]) {
//	//							playerArray[i][2] = playerArray[j][l+4];
//	//							playerArray[i][3] = (l+4);
//	//						}
//	//					}
//	//				}
//				}
//				else if((playerArray[i][3] == playerArray[j][3]) && (playerArray[i][2] == playerArray[j][2])) {
//					if(i < j) {
//						findNextClosestCoin(playerArray[j], *coinArray);
//					}
//					else if(i > j) {
//						findNextClosestCoin(playerArray[i], *coinArray);
//					}
//				}
//			}
//		}
//	}
//	
//	static int results[2] = {playerArray[0][2], playerArray[0][3]};
////	static int results = playerArray[0][2];
//	return results;
////	return 0;
//}
//
//
//int main () {
//	
//	srand((unsigned)time(NULL));
//	for(int i = 0; i < 100; i++) {
//		cout << rand() << endl;
//	}
////	SIDE_LENGTH = (rand() % MAX_SIDE_LENGTH);
//	SIDE_LENGTH = 100;
//	LONGEST_COIN_DIST = SIDE_LENGTH * 2;
//	GRID_AREA = SIDE_LENGTH * SIDE_LENGTH;
//	srand((unsigned)time(0));
////	COIN_COUNT = ((rand() % ((SIDE_LENGTH * SIDE_LENGTH) - 1)) + 1);
//	COIN_COUNT = 6;
//	
//	
////	int myPointArray[2] = {30, 17};
////	
////	Point myPoint;
////	myPoint.setPoints(myPointArray);
//////	cout << *(myPoint.getPoints()) << *(myPoint.getPoints() + 1) << endl; 
//	
//	Point coinPoints[COIN_COUNT];
//	for(int i = 0; i < COIN_COUNT; i++) {
//		int coinPointArray[2] = {(rand() % SIDE_LENGTH), (rand() % SIDE_LENGTH)};
////		int coinPointArray[2];
////		coinPointArray[0] = (rand() % 1000);
////		coinPointArray[1] = (rand() % 1000);
//		coinPoints[i].setPoints(coinPointArray);
//	}
//	
//	for(int i = 0; i < COIN_COUNT; i++) {
//		int *m = coinPoints[i].getPoints();
////		cout << i << ": " << *(m) << "\n" << i << ": " << *(m + 1) << endl;
//	}
//	
//	
//	Point playerPoints[PLAYER_COUNT];
//	for(int i = 0; i < PLAYER_COUNT; i++) {
//		int playerPointArray[2] = {(rand() % SIDE_LENGTH), (rand() % SIDE_LENGTH)};
//			//		int coinPointArray[2];
//			//		coinPointArray[0] = (rand() % 1000);
//			//		coinPointArray[1] = (rand() % 1000);
//		playerPoints[i].setPoints(playerPointArray);
//	}
//	
//	for(int i = 0; i < COIN_COUNT; i++) {
//		int *m = playerPoints[i].getPoints();
////					cout << i << ": " << *(m) << "\n" << i << ": " << *(m + 1) << endl;
//	}
//	
//	
////	int *result = findClosestCoin(&myPoint, coinPoints);
//	
////	cout << *(result) << " " << *(result + 1) << " " << *(result + 2) << endl;
//	
//	
//	int *result2 = findClosestCoinWithOpponents(coinPoints, playerPoints);
//	
//	cout << *(result2) << " " << *(result2 + 1) << endl;
//	
////	cout << SIDE_LENGTH << "\n" << GRID_AREA << "\n" << COIN_COUNT << endl;
//	
//	return 0;
//}
//
//
//// 1 / COIN_COUNT or (1 / GRID_AREA) * COIN_COUNT 
//// 1 / COIN_COUNT or 1 / EMPTY_SPACE_ON_GRID
//	// For example 900,000 coins on 1,000,000 GRID_AREA
//	// 1 / 900,000 or 1 / 100,000
//	// The greater decimal is the path the dynamic algorithm goes.
//	// If 1 / COIN_COUNT > 1 / EMPTY_SPACE_ON_GRID then search through coin array.
//	// If vice versa then search closest tiles expanding until a coin is foundcc
//
//
//// c^2 < n
