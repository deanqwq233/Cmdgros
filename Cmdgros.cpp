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
char intro[50][50] = { "|               |               |","|               |               |","|               |               |","|               |               |","|               |               |","|               |               |","|               |               |","|       欢迎来到|Cmdgros，      |","|       现在开始|玩法练习       |","|               |               |","|               |               |","|               |               |","|               |               |","|最上面是判定线 | 音符从下往上走|","|左下角显示距离 | 右下角显示分数|","|               |               |","|遇到音符按回车 |       #####   |","|   #####       |               |","|   #####       |               |","|   #####       |               |","|   #####       |               |","|               |               |","|               |       #####   |","|               |               |","|   #####       |               |","|               |               |" ,"|               |       #####   |","|               |               |","|   #####       |               |","|               |               |" ,"|               |       #####   |","|               |               |","|   #####       |               |","|               |       #####   |"};
char enter;
int main()
{
	int i,j,n;
//	system("color F9");
	cout << "Cmdgros" << endl;
	cout << "Type \"ENTER\" to start" << endl;
	getchar();
	system("cls");
	cout << "调整速度，输入的整数越小越快：";
	cin >> n;
	system("cls");
	for (i = 0; i <= 34; i++)
	{
		cout << "|_______________________________|" << endl;
		for (j = 0; j <= 6; j++)
		{
			printf("%s", intro[i+j]);
			cout << endl;
		}
		cout << "|_______________________________|" << endl;
		Sleep(n*100);
		system("cls");
	 }
	system("pause");
	return 0;
}