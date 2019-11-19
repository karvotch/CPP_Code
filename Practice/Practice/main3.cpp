////
////  main3.cpp
////  Practice
////
////  Created by Ronald  Ginoti on 8/29/19.
////
//
//#include <iostream>
//#include <ctime>
//#include <cmath>
//#include <cstdlib>
//#include <string.h>
//using namespace std;
//
//
//int * findSumToTarget(int *array, int arrayLength, int target) {
//	if(arrayLength <= 1) {
//		return 0;
//	}
//	int differenceToTarget[arrayLength];
////	static int result[2];
//	for(int i = 0; i < arrayLength; i++) {
//		differenceToTarget[i] = target - array[i];
//	}
//	
//	for(int i = 0; i < arrayLength; i++) {
//		for(int j = 0; j < arrayLength; j++) {
//			if(i == j) {
//				continue;
//			}
//			else if(differenceToTarget[i] == array[j]) {
//				static int result[2] = {i, j};
////				result[1] = j;
//				return result;
//			}
//		}
//	}
//	
//	return 0;
//}
//
//
//
//
//int main() {
//	
//	int array[6] = {1, 5, 7, 3, 8, 12};
//	int arrayLength = sizeof(array) / sizeof(*array);
//	int target = 10;
//	int *result = findSumToTarget(array, arrayLength, target);
//	cout << *(result) << " " << *(result + 1) << endl;
//}
