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
	cout << "����������a,b,c" << endl;
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

		a = i % 10;//��λ
		b = i / 10 % 10;//ʮλ
		c = i / 100;//��λ

		if (a * a * a + b * b * b + c * c * c == i)//�ܺ���ԭ���Ƚ�
			cout << i << endl;
		i++;




	}
}

void hanoi(int n, char a, char b, char c)//hanoi tower
{
	if (n == 1)
	{
		cout << "Ҫ��" << n << "��Բ�̴�" << a << "���ӷֵ�" << b << "����" << endl;

	}
	else
	{
		hanoi(n - 1, a, c, b);
		cout << "�ѵ�" << n << "�����Ӵ�" << a << "�ƶ���" << c << endl;
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
	while (x > 0) {			//������ת
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

	// �޸������ڵ�����������ֵ������������⿽����Ķ���
	for (auto& it : num) {
		//cout << ++it << endl;
		++it;
	}
	// it ���ڲ���vector�����ֵ
	for (auto it : num) {
		cout << it << endl;
	}

	map<int, int> num_map;//map����
	num_map[2] = 4;
	num_map[4] = 5;
	num_map[6] = 1;
	for (auto it : num_map) {

		cout << it.first << endl
			<< ",second: " << it.second << endl;

	}
	
}


