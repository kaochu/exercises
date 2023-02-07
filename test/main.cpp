#include<iostream>
#include"tree.h"


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
			for(int j=1;j<9-i;j++)
			 {
				if (tree[j] < tree[j - 1])
				{
				 int temp;
				 temp = tree[j];
				 tree[j ] = tree[j-1];
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
		for (int j = 1; j <=i; j++)
		{
			cout << i <<"*" <<j <<"="<<(j*i) << " ";
		}
		cout << endl;
	}
}

void shuixianhua()
{
	int i = 100;
	while (i < 10000)
	{
		int a=0;
		int b=0;
		int c=0;

		a = i % 10;
		b = i / 10 % 10;
		c = i / 100;

		if (a* a* a + b * b * b + c * c * c == i)
			cout << i << endl;
			i++;

		


	}
}

void hanoi()
{

}

int main()
{
	//sushu();//素数
	
	//shuzu();//冒泡排序

	//koujuebiao();//乘法口诀表

	shuixianhua();//水仙花数

	system("pause");
	return 0;

}
