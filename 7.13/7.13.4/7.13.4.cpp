// 7.13.4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//《C++ Primer Plus》p250

#include "pch.h"
#include <iostream>

long double probability(unsigned numbers, unsigned tops, unsigned picks);

int main()
{
	using namespace std;
	double base, top, choices;
	cout << "Enter the total number of choices on the game card and\n"
		"the number of picks allowed:" << endl;
	while ((cin >> base >> top >> choices) && choices <= base + top)
	{
		cout << "You have one chance in "
			<< probability(base, top, choices)
			<< " of winning.\n"
			<< "Next two numbers (q to quit): ";
	}
	cout << "Bye!" << endl;

	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件

long double probability(unsigned numbers, unsigned tops, unsigned picks)
{
	long double result = 1.0;
	long double n;
	unsigned p;

	for (n = numbers, p = picks - 1; p > 0; n--, p--)
	{
		result *= n / p;
	}

	return result / tops;
}
