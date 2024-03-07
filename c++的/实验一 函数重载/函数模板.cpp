// 函数模板.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
template <typename T>
void sort(T  a, T  b, T  c)
{
	T tmp;
	if (a > b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	if (a > c)
	{
		tmp = a;
		a = c;
		c = tmp;
	}
	if (b > c)
	{
		tmp = b;
		b = c;
		c = tmp;
	}
	cout << a <<' ' << b <<" " << c << endl;
}
void main()
{

    int a, b, c;
    float d, e, f;
    char g, h, i;
    cout << "请输入三个整数：" << endl;
    cin >> a >> b >> c;
    cout << "请输入三个浮点数：" << endl;
    cin >> d >> e >> f;
    cout << "请输入三个字符型数：" << endl;
    cin >> g >> h >> i;
    sort(a, b, c);
    sort(d, e, f);
    sort(g, h, i);
}
