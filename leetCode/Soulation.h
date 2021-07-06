//#pragma once
#ifndef SOULATION_H
#define SOULATION_H
#include<string>
#include<iostream>
#include<vector>

class Soulation {
public:
	std::string convertToTitle(int columnNumber);
	int fib(int n);
	bool findNumberIn2DArray(std::vector<std::vector<int>>& matrix, int target);
};

#endif 


