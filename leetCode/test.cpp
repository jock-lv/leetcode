#include<string>
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<stack>
#include"Soulation.h"
using namespace std;

//offer38
//使用标准库algorithm函数 next_permutation
vector<string> permutation(string s) {
	sort(s.begin(), s.end());
	vector<string> ans;
	do ans.push_back(s);
	while (next_permutation(s.begin(), s.end()));
	return ans;
}

vector<string> result;
void perm(unsigned start, string str) {
	if (start == str.size() - 1) {
		result.push_back(str);
		return;
	}
	set<int> st;
	for (unsigned i = start; i < str.size(); ++i) {
		if (st.find(str[i]) != st.end()) continue; //查找到的第一个对应字符不是集合中的最后一个也就是本层次之前已经有了该字符，则需要剪枝
		st.insert(str[i]);
		swap(str[start], str[i]);
		perm(start + 1, str);
		swap(str[start], str[i]);//恢复原状态
	}
}

//剑指 Offer 09. 用两个栈实现队列
class CQueue {
public:
	stack<int> staIn, staOut;
	CQueue() {

	}

	void appendTail(int value) {
		staIn.push(value);
	}

	int deleteHead() {
		int rst;
		if (staOut.empty()) {
			if (staIn.empty()) {
				return -1;
			}
			else {
				while (!staIn.empty()) {
					staOut.push(staIn.top());
					staIn.pop();
				}
			}
		}
		rst = staOut.top();
		staOut.pop();
		return rst;
	}
};

vector<int> buildArray(vector<int>& nums) {
	int len = nums.size();
	vector<int> result(len);
	for (rsize_t i = 0; i < len; ++i) {
		result[i] = nums[nums[i]];
	}
	return result;
}
//50. Pow(x, n) 快速幂算法
double quick(double x, long long n) {
	double ret = 1.0;
	double base = x;
	while (n > 0) {
		if (n & 1) {
			ret *= base;
		}
		base *= base;
		n >>= 1;
	}
	return ret;
}
//1922. 统计好数字的数目 快速幂
static const int mod = 1000000007;
int countGoodNumbers(long long n) {
	long long ret;
	if (n % 2) {
		long long N = (n - 1) / 2;
		ret = (long long)quick(20, N) * 5;
	}
	else {
		long long N = n / 2;
		ret = quick(20, N);
	}
	return ret % mod;
}
int quick(int x, long long n) {
	long long ret = 1, base = x;
	while (n > 0) {
		if (n & 1) {
			ret *= base;
			ret %= mod;
		}
		base *= base;
		base %= mod;
		n >>= 1;
	}
	return ret % mod;
}

int main() {
	int n = 10;
	double x = 2.0;
	cout <<quick(x, n)<< endl;
	return 0;
}