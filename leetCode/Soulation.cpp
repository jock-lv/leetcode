#include"Soulation.h"
using std::string;
using std::vector;
using std::max;
string Soulation::convertToTitle(int columnNumber)
{
	string str = {};
	
	return string();
}
//剑指 Offer 10- I. 斐波那契数列
int Soulation::fib(int n) 
{
	n = size_t(n);
	vector<int> result(n + 1, 0);
	if (n != 0) {
		result[1] = 1;
	}
	if (n > 1)
	{
		for (vector<int>::iterator iter = result.begin() + 2; iter != result.end(); ++iter) {
			*iter = *(iter - 1) + *(iter - 2);
		}
	}
	return result[n] % 1000000007;
}

//剑指offer 04类似树型结构，从右上角开始
bool Soulation::findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
	if (matrix.empty()) {
		return false;
	}
	int n = matrix.size(), m = matrix[0].size();
	for (int i = 0; i < n; ++i) {
		for (int j = m - 1; j >= 0; j--) {
			if (target > matrix[i][j]) {
				break;
			}
			else if (target == matrix[i][j]) {
				return true;
			}
		}
	}
	return false;
}

int Soulation::maxSubArray(vector<int>& nums) {
	int gain = 0, result = nums[0];
	for (auto i : nums) {
		gain = max(gain + i, i);//向前遍历，如果前面的序列和是负增益，则舍弃前面的，从当前开始
		result = max(result, gain);
	}
	return result;
}

int Soulation::maxProfit(std::vector<int>& prices)
{
	int profit = 0;
	int index1 = 0, index2 = 1;
	while (index1 < prices.size() && index2 < prices.size()) {
		if (prices[index2] > prices[index1]) {
			profit = max(prices[index2] - prices[index1], profit);
			++index2;
		}
		else {
			++index1;
			index2 = index1 + 1;
		}
	}
	return profit;
}

void Soulation::setZeroes(vector<vector<int>>& matrix)
{
	/*
	//使用 O(m + n) 的额外空间
	vector<int> rowFlag(matrix.size(), 1), colFlag(matrix[0].size(), 1);
	for (int i = 0; i < matrix.size(); ++i) {
		for (int j = 0; j < matrix[0].size(); ++j) {
			if (matrix[i][j] == 0) {
				rowFlag[i] = 0;
				colFlag[j] = 0;
			}
		}
	}
	for (int i = 0; i < matrix.size(); ++i) {
		for (int j = 0; j < matrix[0].size(); ++j) {
			matrix[i][j] *= rowFlag[i] * colFlag[j];
		}
	}
	*/
	
}
