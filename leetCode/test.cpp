#include<string>
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<stack>
#include<map>
#include"Soulation.h"
using namespace std;

//offer38
//ʹ�ñ�׼��algorithm���� next_permutation
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
		if (st.find(str[i]) != st.end()) continue; //���ҵ��ĵ�һ����Ӧ�ַ����Ǽ����е����һ��Ҳ���Ǳ����֮ǰ�Ѿ����˸��ַ�������Ҫ��֦
		st.insert(str[i]);
		swap(str[start], str[i]);
		perm(start + 1, str);
		swap(str[start], str[i]);//�ָ�ԭ״̬
	}
}

//��ָ Offer 09. ������ջʵ�ֶ���
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
//50. Pow(x, n) �������㷨
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
//1922. ͳ�ƺ����ֵ���Ŀ ������
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
//1. ����֮��
vector<int> twoSum(vector<int>& nums, int target) {
	vector<int> a(2, -1);
	map<int, int> num;
	for (int i = 0; i < nums.size(); i++) {
		if (num.count(target - nums[i]) > 0) {
			a[0] = num[target - nums[i]];
			a[1] = i;
			break;
		}
		num[nums[i]] = i;
	}
	return a;
}

vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
	int r_mat = mat.size(), c_mat = mat[0].size();
	if (r_mat * c_mat == r * c) {
		vector<vector<int>> ret(r, vector<int>(c, 0));
		int num = 0;
		for (int i = 0; i < r_mat; ++i) {
			for (int j = 0; j < c_mat; ++j) {
				ret[int(num / c)][int(num % c)] = mat[i][j];
				++num;
			}
		}
		return ret;
	}
	return mat;
}

int main() {
	char a[2];
	a[0] = 66;
	cout << (a[0] == 'C') << endl;
	return 0; 
}