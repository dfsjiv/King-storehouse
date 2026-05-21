#pragma once
#include<vector>
#include<iostream>
using namespace std;

class Queue_related
{
private:
	vector<int>nums;
public:
	void Queue_push(int n);//入队列
	int Queue_Pop();//出队列，并删除出的元素
	bool Queue_empty();//检查队列是否为空


};