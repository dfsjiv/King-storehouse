#pragma once
#include<iostream>
#include<algorithm>
#include<string>
#include<map>
#include<list>
#include<vector>
using namespace std;
using ll = long long;
class algorithm_related
{
public:
	//这个函数是处理在数组中的最大的连续子数组Continuous maximum non-repeating subarray缩写为Cmn;
	//传入的数组为vector。
	// 这里存在两种方法，一种是暴力O（n^2）,一种用的是滑动窗口k==1的是暴力，k==2的时候为双指针的滑动窗口
	void Cmn(vector<long long>& nums,int k);




};