#include<iostream>
#include"Recursion.h"
using namespace std;
int Recursion::Tower_Hanoi_time(int n)//汉罗塔的递归公式，这是算次数
{
	if (n == 1)return 1;
	return 2 * Tower_Hanoi_time(n - 1) + 1;
}
int Recursion::Factorial(int n)//注意不要太大,会溢出
{
	return Factorial(n - 1) * n;
}
int Recursion::Fibonacci(int n)//还是注意不要太大,后续会写大数
{
	return Fibonacci(n - 1) + Fibonacci(n - 1);
}
int Recursion::Eight_Queens_Puzzle(int n)
{

	return 0;
}
