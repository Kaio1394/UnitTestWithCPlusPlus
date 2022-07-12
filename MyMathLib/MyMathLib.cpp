// MyMathLib.cpp : Define as funções da biblioteca estática.
//

#include "pch.h"
#include "framework.h"
#include <math.h>
#include <stdexcept>

double mySqrt(double x) {
	if (x < 0) {
		throw std::runtime_error("Negative argument");
	}
	return sqrt(x);
}