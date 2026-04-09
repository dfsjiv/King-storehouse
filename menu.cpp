#include<iostream>
#include<algorithm>
#include<string>
#include"menu.h"
#include<cctype>
#include<Windows.h>
using namespace std;
void menu::menu_show()
{
	cout << "----------------------------------------------" << endl;

	int k = 0;
	while (1)
	{
		
		k++;
		for (int i = 0; i <= k; i++)
		{
			cout << "。 ";
			Sleep(1000);
		}
		cout << "\r";
		Sleep(3000);
		if (k < 10)
		{
			break;
		}
	}
	cout << "---------------------------------" << endl;


}