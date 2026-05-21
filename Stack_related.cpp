#include<iostream>
#include<vector>
#include"Stack_related.h"
#include<cmath>
using namespace std;
void Stack_related:: Push_Stack(int value)
{
	elements.push_back(value);
	cout << "已经成功入栈" << endl;
}
int Stack_related::Pop_Stack()
{
	if (elements.empty())
	{
		cout << "栈为空" << endl;
		return -1;
	}
	int topElements = elements.back();
	elements.pop_back();
	return topElements;
}
bool Stack_related::EmptyStack()
{
	if (elements.empty())
	{
		cout << "该栈为空" << endl;
		return -1;//返回-1无效
	}
	return 1;//栈不为空
}
int Stack_related::Base_conversion_two(string t)
{
	int l = t.size();
	int k = 0;
	for (int i = 0; i < l; i++)
	{
		Push_Stack(t[i] - '0');
	}
	int re = 0;
	for (int i = 0; i < l; i++)
	{
		re += Pop_Stack() * pow(2, k);
		k++;
	}
	return re;
}
auto Stack_related::calculator_Stack(string s)
{
	//要队列，现在先不写

}
void Stack_related::dfs(int u)
{
	if (u == n)
	{
		for (int i = 0; i < n; i++)
		{
			cout << nums[i];
		}
		cout << " ";
		return;
	}
	for (int i = 1; i <= n; i++)
	{
		if (!nums[i])
		{
			ans[i] = true;
			nums[u] = i;
			dfs(u + 1);
			ans[i] = false;
		}
	}
}
void Stack_related::DfsFpp(int k)
{
	n = k;
	nums.resize(n);
	ans.resize(n + 1);
	dfs(0);
}