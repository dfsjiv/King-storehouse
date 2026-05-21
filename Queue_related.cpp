#include"Queue_related.h"
#include<iostream>
#include<algorithm>
using namespace std;
void Queue_related::Queue_push(int n)
{
	nums.push_back(n);
}
int Queue_related::Queue_Pop()
{
	if (nums.empty())
	{
		cout << "队列是空的，错误" << endl;
		return -1;
	}
	int target = nums[0];
	reverse(nums.begin(), nums.end());
	nums.pop_back();
	reverse(nums.begin(), nums.end());
	return target;
}//如果要快，就要用循环数组或者链表来就快
//如果有时间的话，在写，这就先这么写
bool Queue_related::Queue_empty()
{
	return nums.empty();
}