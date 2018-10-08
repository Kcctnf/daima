#define _CRT_SECURE_NO_WARNINGS 
#include<stdlib.h>
#include<stdio.h>
int main(){
	int a = 1;
	int b = 2;
	int c;
	c = a;
	a = b;
	b = c;
	printf("%d %d\n", a, b);
	system("pause");
	return 0;
}
#include<stdlib.h>
#include<stdio.h>
int main(){
	int a = 2;
	int b = 5;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d %d\n", a, b);
	system("pause");
	return 0;
}
#include<stdlib.h>
#include<stdio.h>
int main(){
	printf("输入十个整数:\n");
	int i, MAX, n;
	scanf("%d", &n);//输入第一个数       //可以将第一次的N放入循环之中，对输入次数进行判定也可以达到目的。
	MAX = n;//假设第一个数是最大的整数
	for (i = 2; i <= 10; i++){
		scanf("%d", &n);
		if (n > MAX){
			MAX = n;//下一个数大于第一个数	
		}
	}
	printf("%d\n", MAX);//输出较大的数
	system("pause");
	return 0;
}
#include<stdlib.h>
#include<stdio.h>
int main(){
	printf("输入三个数字:\n");
	int a, b, c, d;
	scanf("%d %d %d", &a, &b, &c);
	if (b > a){//先将三个数两两比较，然后按小大排列，之后输出换回去即可。
		d = a;
		a = b;
		b = d;
	}if (c > a){
		d = a;
		a = c;
		c = d;
	}if (b > c){
		d = c;
		c = b;
		b = d;
	}printf("%d %d %d\n", a, c, b);
	system("pause");
	return 0;
}

#include<stdlib.h>
#include<stdio.h>
int main(){
	int a, b, temp;
	//辗转相除法实现 
	    printf("请输入两个数(a,b)：\n");
		scanf("%d,%d", &a, &b);
		if (a < b){
			temp = a;
			a = b;
			b = temp;
		}
		while (a%b != 0){
			temp = a%b;
			a = b;
			b = temp;
		}
		printf("最大公约数为：%d\n", b);
		system("pause");
		return 0;	
}
#include<stdlib.h>//辗转相除法
#include<stdio.h>
int main(){
	int a, b, temp;//将余数定义为变量
	printf("输入两个数:\n");
	scanf("%d %d", &a, &b);//取地址
	if (a > b){
        while (a%b != 0){//交换法
			temp = a%b;
			a = b;
			b = temp;
		}	printf("%d\n", b);
	}
	if(a < b){
		while (b%a != 0){
			temp = b%a;
			b = a;
			a = temp;
		}	printf("%d\n", a);
	}
	    system("pause");
	    return 0;
}

//
//
//










