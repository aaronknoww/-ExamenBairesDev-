#pragma once
#include <string>
#include <set>

struct Point
{
	int x, y;
};



bool brackets(std::string& sequence);
int findCombinations(std::string& a, std::string& b); //how many string equal to 'a' can be constructed with 'b'
double euclidianDistance(const Point& point1, const Point& point2);

