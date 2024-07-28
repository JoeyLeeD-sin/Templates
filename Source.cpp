/*
	Name: Joe Davidson
	Date: 7/28/2024
	Prject Name: Templates
	Project Description: Write templated functions to perform math on varying data types
*/

#include <iostream>
#include <cmath>
#include <type_traits>

using namespace std;

// Templated function for floating point values

template <typename T>
typename enable_if<is_floating_point<T>::value, T>::type
half(T value)
{
	return value / 2;
}

// Function to handle the integer values

int half(int value)
{
	return static_cast<int>(round(value / 2.0));
}



int main()
{



}