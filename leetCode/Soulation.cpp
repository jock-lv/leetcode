#include"Soulation.h"
using std::string;
using std::vector;
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
