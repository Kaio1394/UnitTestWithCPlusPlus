// MyMathLib.cpp : Define as funções da biblioteca estática.
//

#include "pch.h"
#include "framework.h"
#include <math.h>
#include <stdexcept>
#include <vector>

double mySqrt(double x) {
	if (x < 0) {
		throw std::runtime_error("Negative argument");
	}
	return sqrt(x);
}
bool isPositive(double x) {
	if (x > 0.0) {
		return true;
	}
	else {
		return false;
	}	
}
int sum(int x, int y) {
	return x + y;
}

int minus(int x, int y) {
	if (x >= y) {
		return x - y;
	}
	else {
		return 0;
	}
}
std::vector<int> positiveInVector(std::vector<int>* vector) {
	std::vector<int> positiveVector;
	
	for (auto element : *vector) {
		if (element > 0) {
			positiveVector.push_back(element);
		}
	}
	return positiveVector; 
}