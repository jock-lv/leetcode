//#pragma once
#ifndef SOULATION_H
#define SOULATION_H
#include<string>
#include<iostream>
#include<vector>
#include<algorithm>


class Soulation {
public:
	std::string convertToTitle(int columnNumber);
	//剑指 Offer 10- I. 斐波那契数列
	int fib(int n);
	//剑指offer 04类似树型结构，从右上角开始
	bool findNumberIn2DArray(std::vector<std::vector<int>>& matrix, int target);
	//53.最大子序和，动态规划
	int maxSubArray(std::vector<int>& nums);
	//121. 买卖股票的最佳时机
	//动态规划
	int maxProfit(std::vector<int>& prices);
	//73.矩阵置零
	//使用 O(m + n) 的额外空间
	//仅使用常量空间
	void setZeroes(vector<vector<int>>& matrix);
};

#endif 


