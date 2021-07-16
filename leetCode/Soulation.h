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
	//��ָ Offer 10- I. 쳲���������
	int fib(int n);
	//��ָoffer 04�������ͽṹ�������Ͻǿ�ʼ
	bool findNumberIn2DArray(std::vector<std::vector<int>>& matrix, int target);
	//53.�������ͣ���̬�滮
	int maxSubArray(std::vector<int>& nums);
	//121. ������Ʊ�����ʱ��
	//��̬�滮
	int maxProfit(std::vector<int>& prices);
	//73.��������
	//ʹ�� O(m + n) �Ķ���ռ�
	//��ʹ�ó����ռ�
	void setZeroes(vector<vector<int>>& matrix);
};

#endif 


