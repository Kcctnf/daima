#include<stdio.h>
#include<stdlib.h>//输的数字必须是个位数字才行
int main(){
	int num;
	printf("请输入一个0-9的数字:");
	scanf("%d", &num);
	//将这个数字分别变成一个各位，十位，百味直到万，在求和。例如十位就是10*数字加上数字
	num = 5 * num + 10 * num * 4 + 100 * num * 3 + 1000 * num * 2 + 10000 * num;
	printf("%d\n", num);
	system("pause");
	return 0;
}
求0-999之间的所有水仙花数，水仙花数是一个三位数并有规律的，例如:153 = 1^3 + 5^3 + 3^3。 
#include<stdio.h>
#include<stdlib.h>
int main(){
	int a, b, c, n;
	printf("水仙花数:\n");
	for (n = 100; n < 1000; n++){
		a = n / 100;//百位求法
		b = (n - a * 100) / 10;//十位
		c = n % 10;//个位
		if (n == a*a*a + b*b*b + c*c*c){
			printf("%d\n", n);
		}
	}
		system("pause");
		return 0;
}
//打印*号组成的菱形
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
int main(){
	int i, j, k ;
	for (i = 0; i <= 7; i++){
		k = abs(i - 7 / 2);//左边界限，即空格数
		printf("\n");
		for (j = 0; j < k; j++){
			printf(" ");
		}
		for (j = 0; j < (7 - 2 * k); j++){//7-2K即*号的数目
			printf("*");
		}
	}
	system("pause");
	return 0;
}












