/*
* 作者:deanqwq233
* 发布时间:2022/06/16
* 程序名称:Cmdgros
* 程序简介:用C++写出来一个仿Phigros？
*/
#include<iostream>
#include<windows.h>
#include<stdio.h>
using namespace std;
char introduction[50][50] = { "|               |               |","|               |               |","|               |               |","|               |               |","|               |               |","|               |               |","|               |               |","|       欢迎来到|Cmdgros，      |","|       现在开始|玩法练习       |","|               |               |","|               |               |","|               |               |","|               |               |","|最上面是判定线 | 音符从下往上走|","|左下角显示距离 | 右下角显示分数|","|               |               |","|遇到音符按回车 |       #####   |","|   #####       |               |","|   #####       |               |","|   #####       |               |","|   #####       |               |","|               |               |","|               |       #####   |","|               |               |","|   #####       |               |","|               |               |" ,"|               |       #####   |","|               |               |","|   #####       |               |","|               |               |" ,"|               |       #####   |","|               |               |","|   #####       |               |","|               |       #####   |"};
//introduction:谱子"introduction";
char enter;//enter:输入的字符;
int main()
{
	int i,j,k,n;//i,j,k循环;n*100速度;
	bool jing = 0;//jing:音符;
//	system("color F9");
	cout << "Cmdgros" << endl;
	cout << "Type \"ENTER\" to start" << endl;
	getchar();
	system("cls");
//初始启动界面
	cout << "调整速度，输入的整数越小越快：";
	cin >> n;
	system("cls");
//调速度
	for (i = 0; i <= 34; i++)//页循环
	{
		cout << "_________________________________" << endl;//判定线
		for (j = 0; j <= 6; j++)//一页中六行的循环
		{
			printf("%s", introduction[i+j]);
			for (k = 0; k <= 50; k++)//判断一行是否有音符
			{
				if (introduction[i + j][k] == '#') jing = 1;
			}
			if (jing == 1)//如果这行有音符
			{
				enter = getchar();
//有问题**
				if (enter == '/n')
				{
					if (jing == 1)
					{
						cout << "perfect" << endl;
						continue;
					}
					else
					{
						cout << "bad" << endl;
						continue;
					}
				}
			}
//**有问题
			jing = 0;//是否有音符:重置
			cout << endl;
		}
		cout << "|_______________________________|" << endl;//底部外框
		Sleep(n*100);
		system("cls");
	 }
	system("pause");
	return 0;
}