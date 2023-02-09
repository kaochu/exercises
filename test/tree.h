#pragma once
#include<stdio.h>
#include<iostream>
#include<vector>
#include<map>

using namespace std;
int tree_head=0;

void sushu()
{
	double a;
	float b;
	int c;
	cout << "请依次输入a,b,c" << endl;
	cin >> a;
	cin >> b;
	cin >> c;

	double mix;
	mix = a + b + c;
	cout << mix << endl;

}

void shuzu()
{
	int tree[] = { 11,2,34,6,23,66,14,77,55,35 };


	for (int i = 0; i < 9; i++)
	{
		for (int j = 1; j < 9 - i; j++)
		{
			if (tree[j] < tree[j - 1])
			{
				int temp;
				temp = tree[j];
				tree[j] = tree[j - 1];
				tree[j - 1] = temp;
			}
		}
	}
	for (int i = 0; i < 9; i++)
	{
		cout << tree[i] << endl;
	}
}

void koujuebiao()
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i << "*" << j << "=" << (j * i) << " ";
		}
		cout << endl;
	}
}

void shuixianhua()
{
	int i = 100;
	while (i < 10000)
	{
		int a = 0;
		int b = 0;
		int c = 0;

		a = i % 10;//个位
		b = i / 10 % 10;//十位
		c = i / 100;//百位

		if (a * a * a + b * b * b + c * c * c == i)//总和与原数比较
			cout << i << endl;
		i++;




	}
}

void hanoi(int n, char a, char b, char c)//hanoi tower
{
	if (n == 1)
	{
		cout << "要将" << n << "个圆盘从" << a << "柱子分到" << b << "柱子" << endl;

	}
	else
	{
		hanoi(n - 1, a, c, b);
		cout << "把第" << n << "个盘子从" << a << "移动到" << c << endl;
		hanoi(n - 1, b, a, c);

	}

}
bool isPalindrome(int x) {
	if (x < 0) {
		return false;
	}
	long i = 0;
	long n = 0;
	long b = x;
	while (x > 0) {			//整数倒转
		i = x % 10;
		n = n * 10 + i;
		x = x / 10;
	}
	if (n == b) {
		return true;
	}
	else {
		return false;
	}
}

void qianzhuihe()
{
	vector<int> num{ 3, 7, 1, 7, 9 ,91,44,2};

	// 修改你正在迭代的容器的值，或者你想避免拷贝大的对象
	for (auto& it : num) {
		//cout << ++it << endl;
		++it;
	}
	// it 用于捕获vector里面的值
	for (auto it : num) {
		cout << it << endl;
	}

	map<int, int> num_map;//map遍历
	num_map[2] = 4;
	num_map[4] = 5;
	num_map[6] = 1;
	for (auto it : num_map) {

		cout << it.first << endl
			<< ",second: " << it.second << endl;

	}
	
}


