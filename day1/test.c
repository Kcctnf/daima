#define _CRT_SECURE_NO_WARNINGS 
//编写一个程序，创建一个具有26个元素的数组，并在其中储存26个小写字母，并让改程序显示此数组的内容
#include<stdio.h>
#include<stdlib.h>
#define size 26
int main(){
	char zimu[size];
	int i;
	for (i = 0; i < size; i++){
		zimu[i] = 'a' + i;
		printf("%c\n", zimu[i]);	
	}
	system("pause");
	return 0;
}
使用嵌套循环，打印出三角形。
#include<stdio.h>
#include<stdlib.h>
int main(){
	//三角形从第一行可开始逐渐递增，第五行数量最多，为5
	int hang, lie;

	for (hang = 5; hang > 0; hang--){//行数最多为5，由于每一列的￥和行数相等
		for (lie = hang; lie <= 5; lie++){
			printf("$");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
打印的是一个倒三角，此问题主要是每一列
#include<stdio.h>
#include<stdlib.h>
int main(){
	int hang, lie;
	for (hang = 0; hang < 5; hang++){
		for (lie = hang + 1; lie <= 5; lie++){
			printf("$");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}

编写一个程序，把一个单词读入一个字符数组，然后反向打印出这个词，提示:strlen
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
int main(){
	char a[20];
	int i;
	printf("请输入一个单词:\n");
	scanf("%s",a);
	for (i = strlen(a) - 1; i >= 0; i--)
	printf("%c", a[i]);
	system("pause");
	return 0;
}

编写一个程序，要求输入两个浮点数，然后打印出用二者的差值除以二者的乘积所得的结果。
在用户键入非数字的输入之前，程序循环处理每对输入值。
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
int main(){
	float a, b, c;
	printf("请输入两个浮点数:\n");
	while (scanf("%f %f", &a, &b) == 2){//在循环里边输入数字，就能够循环执行计算
		c = (a - b) / (a*b);
		printf("c=%f\n", c);
		printf("请输入两个浮点数:\n");
	}
	system("pause");
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int memu(){
	//打印菜单
	printf("**************************************\n");
	printf("   1  开始游戏   0  结束游戏\n");
	printf("**************************************\n");
	printf("请输入你的选择:\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
//void表示此函数没有返回值
void game(){
	printf("游戏进行中。。。\n");
	//让电脑随机产生一个数字1-100的整数，让用户去猜。
	int result = rand() % 100 + 1;
	while (1){
		//提示用户输入一个数字
		printf("请输入你猜测的数字:\n");
		int num = 0;
		scanf("%d", &num);
		if (num < result){
			printf("低了\n");
		}
		else if (num > result){
			printf("高了\n");
		}
		else{
			printf("猜对了\n");
			break;
		}
		//根据用户输入输入的数字，与随机数字比较，看是高了还是低了
		//如果猜错了，则要继续输入猜测数字
	}
}
int main(){
	//1.创建一个循环
	while (1){
		//2.让用户进行选择是否开始游戏
		int choice = memu();
		if (choice == 1){
			//用户选择的是开始游戏，就进入游戏环节。
			game();
		}
		else if (choice == 0){
			break;
			//用户选择退出游戏，则结束循环。
		}
		else{
			printf("您输入的数字有误，请重新输入:\n");
		}

	}
	system("pause");
	return 0;
}















