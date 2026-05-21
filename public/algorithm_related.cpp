#include<iostream>
#include<vector>
#include<map>
#include<string>
#include"algorithm_related.h"
//using namespace std;
void algorithm_related::Cmn(std::vector<long long>& nums,int k)
{
	if (k == 1)
	{
		int re = 0;
		int n = nums.size();
		for (int i = 0; i < n; i++)
		{
			long long p = 0;
			std::map<long long, long long>ans;
			for (int j = i; j < n; j++)
			{
				ans[nums[j]]++;
				if (ans[nums[j]] == 2)
				{
					re = 0;
					break;
				}
				re = std::max(re, j - i + 1);
			}
		}
		std::cout << "这是暴力做法" << std::endl;
		std::cout << "喵喵" << std::endl;
		std::cout << re << std::endl;
	}
	if (k == 2)
	{

	}
}