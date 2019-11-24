// 7.13.6.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//《C++ Primer Plus》p251

#include "pch.h"
#include <iostream>
#include <array>
#include <algorithm>
const unsigned int MAXN = 10;

using namespace std;

int Fill_array(array<double, MAXN> &arr);
void Show_array(const array<double, MAXN> &arr, int n);
void Reverse_array(array<double, MAXN> &arr, int n);

int main()
{
	array<double, MAXN> nums;

	int n = Fill_array(nums);
	Reverse_array(nums, n);
	Show_array(nums, n);

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

int Fill_array(array<double, MAXN>& arr)
{
	cout << "Enter numbers." << endl;

	int i;
	for (i = 0; i < MAXN && cin >> arr[i]; i++)
	{
		continue;
	}

	return i;
}

void Show_array(const array<double, MAXN>& arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
}

void Reverse_array(array<double, MAXN>& arr, int n)
{
	reverse(arr.begin(), arr.begin() + n);
}
