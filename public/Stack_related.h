#pragma once
#include<vector>
#include<string>
//using namespace std;
class Stack_related
{
private:
	std::vector<int>elements;//栈的元素
	//这两个是使用递归来求的算法用的，比如Fpp（Full permutation problem） 全排列问题
	int n;
	std::vector<int>nums;
	std::vector<bool>ans;
	//一个用于记录，一个用于判断
public:
	void Push_Stack(int value);//入栈操作
	int Pop_Stack();//移除并返回移除值
	bool EmptyStack();//检查栈是否为空
	int Base_conversion_two(std::string t);//2转十输出十进制
	//你波兰表达式
	auto calculator_Stack(std::string s);//用栈的计算器中序表达式转后缀表达式的计算（看提升计算效率）
	void dfs(int u);
	void DfsFpp(int n);
};