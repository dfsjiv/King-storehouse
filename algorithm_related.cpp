#include<iostream>
#include<vector>
#include<map>
#include<string>
#include"algorithm_related.h"
using namespace std;
void algorithm_related::Cmn(vector<long long>& nums,int k)
{
	if (k == 1)
	{
		int re = 0;
		int n = nums.size();
		for (int i = 0; i < n; i++)
		{
			long long p = 0;
			map<long long, long long>ans;
			for (int j = i; j < n; j++)
			{
				ans[nums[j]]++;
				if (ans[nums[j]] == 2)
				{
					re = 0;
					break;
				}
				re = max(re, j - i + 1);
			}
		}
		cout << "这是使用暴力的方法做的" << " " << re << endl;
		cout << "喵喵" << endl;
	}
	if (k == 2)
	{

	}
}