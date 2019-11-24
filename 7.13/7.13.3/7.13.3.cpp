// 7.13.3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//《C++ Primer Plus》p250

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

struct box
{
	string maker;
	double height;
	double width;
	double length;
	double volume;
};

void output(const box n);
void setting(box *n);

int main()
{
	box candy{ "Mike", 1.0, 2.0, 3.0 };

	setting(&candy);
	output(candy);

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

void output(const box n)
{
	cout << "This box:" << endl
		<< "Maker : " << n.maker << endl
		<< "Height : " << n.height << endl
		<< "Width : " << n.width << endl
		<< "Length : " << n.length << endl
		<< "Volume : " << n.volume << endl;
}

void setting(box * n)
{
	n->volume = n->height * n->length * n->width;
}
