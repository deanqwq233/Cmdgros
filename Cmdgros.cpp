#include<iostream>
#include<windows.h>
using namespace std;
char intro[50][50] = { "|               |               |","|       欢迎来到|Cmdgros，      |","|       现在开始|玩法练习       |","|               |               |","|遇到音符按回车 |       #####   |","|               |               |","|   #####       |               |","|               |               |","|               |               |","|最上面是判定线 | 音符从下往上走|","|左下角显示距离 | 右下角显示分数|","|               |               |","|               |               |"};
int main()
{
	int i,j;
	for (i = 0; i <= 24; i++)
	{
		cout << "|_______________________________|" << endl;
		for (j = 0; j <= 6; j++)
		{
			printf("%s", intro[i+j]);
			cout << endl;
		}
		cout << "|_______________________________|" << endl;
		Sleep(500);
		system("cls");
	 }
	return 0;
}