////
////  main4.cpp
////  Practice
////
////  Created by Ronald  Ginoti on 8/31/19.
////
//
//#include <iostream>
//#include <ctime>
//#include <cmath>
//#include <chrono> // for std::chrono functions
//using namespace std;
//
//
//class Timer
//{
//private:
//		// Type aliases to make accessing nested type easier
//	using clock_t = std::chrono::high_resolution_clock;
//	using second_t = std::chrono::duration<double, std::ratio<1> >;
//	
//	std::chrono::time_point<clock_t> m_beg;
//	
//public:
//	Timer() : m_beg(clock_t::now())
//	{
//	}
//	
//	void reset()
//	{
//		m_beg = clock_t::now();
//	}
//	
//	double elapsed() const
//	{
//		return std::chrono::duration_cast<second_t>(clock_t::now() - m_beg).count();
//	}
//};
//
//
//int getRandomNumber(int min, int max) {
//	static constexpr double fraction {1.0 / (RAND_MAX + 1.0)};
//	
//	return min + static_cast<int>((max - min + 1)) * (rand() * fraction);
//}
//
//
//class Point {
//public:
//	int x, y;
//	
//	Point() {
//		x = getRandomNumber(1, 100);
//		y = getRandomNumber(1, 100);
//	}
//};
//
//
//int getDistance(Point point1, Point point2) {
//	return (abs(point1.x - point2.x) + abs(point1.y - point2.y));
//}
//
//
//int * getClosestPoints(Point *pointsArray, int arrayLength, Point vertex, int numberOfPointsToReturn) {
//	int distanceToPointsArray[arrayLength];
//	int *closestDistanceIndex = new int[numberOfPointsToReturn];
//	
//	for(int i = 0; i < arrayLength; i++) {
//		distanceToPointsArray[i] = getDistance(vertex, pointsArray[i]);
//		cout << i << ": " << distanceToPointsArray[i] << "\n" << endl;
//	}
//	
//	for(int i = 0; i < numberOfPointsToReturn; i++) {
//		int closestDistance = 200;
//		for(int j = 0; j < arrayLength; j++) {
//			if(distanceToPointsArray[j] < closestDistance) {
//				closestDistance = distanceToPointsArray[j];
//				closestDistanceIndex[i] = j;
//				distanceToPointsArray[j] = 201;
//			}
//		}
//	}
//	
//	return closestDistanceIndex;
//}
//
//
//
//
//int main() {
//	Timer t;
//	srand((unsigned)time(NULL));
//	
//	for(int i = 0; i < 100; i++) {
//		rand();
//	}
//	
//	Point pointsArray[100];
//	int arrayLength = sizeof(pointsArray) / (sizeof(int) * 2);
//	Point vertex;
//	int numberOfPointsToReturn = 2;
//	
//	int *result = getClosestPoints(pointsArray, arrayLength, vertex, numberOfPointsToReturn);
////	for(int i = 0; i < 100; i++) {
////		cout << pointsArray[i].x  << " " << pointsArray[i].y << "\n" << endl;
////	}
//	cout << vertex.x << " " << vertex.y << "\n" << endl;
//	cout << result[0] << " " << result[1] << endl;
//	
//	delete result;
//	
//	cout << fixed;
//	cout << "Time elapsed: " << t.elapsed() << " seconds\n";
//	cout << scientific;
//	
//	return 0;
//}
