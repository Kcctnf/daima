//#define _CRT_SECURE_NO_WARNINGS 
//写一个函数返回参数二进制中 1 的个数
//比如： 15 0000 1111 4 个 1
//程序原型：
//#include<stdio.h>
//#include<stdlib.h>
//int count_one_bits(int x){
//	int count = 0;
//	for (int i = 0; i < 32; ++i){
//		if (x & (1 << i)){
//			count++;
//		}
//	}
//	return count;
//}
//int main(){
//	int a;
//	printf("请输入一个数:\n");
//	scanf("%d", &a);
//	int ret = count_one_bits(a);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//获取一个数二进制序列中所有的偶数位和奇数位，
//分别输出二进制序列。
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
int main(){
	int num = 0;
	int i = 0;
	int count = 0;
	int arr[32] = { 0 };
	printf("请输入一个数:\n");
	scanf("%d", &num);
	while (num){
		//先将这个数转化为二进制数，然后这个二进制数保存为数组。
		arr[i]=num % 2;
		num /= 2;
		//count是对这个数总的1和0的数量的表示。
		count++;
		i++;
	}
	//奇数位：
	printf("奇数位\n");
	for (i = count; i >= 0; i -= 2){
		printf("%d ", arr[i]);
	}
	printf("\n");
	//偶数位：
	printf("偶数位\n");
	for (i = count - 1; i >= 0; i -= 2){
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}



//方法一：
//int count_one_bits(int value){
//	int count = 0;
//	while (value){
//		if (value % 2 == 1){
//			count++;
//		}
//		value = value / 2;
//	}
//	return count;
//}
//int count_one_bits(int num){
//	int count = 0;
//	for (int i = 0; i < 32; ++i){
//		//使用移位操作和按位操作
//		if (num & (1 << i)){//1左移一位，是在对1进行移位。
//			count++;
//		}
//	}
//	return count;
//}
//int main(){
//	printf("shuru:");
//	int value;
//	scanf("%d", &value);
//	printf("%d\n", count_one_bits(10));
//	system("pause");
//	return 0;
//}

//获取一个数二进制序列中所有的偶数位和奇数位，
//分别输出二进制序列。

	/*printf("输入一个数:\n");
	int num;
	int count = 0;
	int i = 0;
	int arr[32] = { 0 };
	scanf("%d", &num);
	while (num){
		arr[i++] = num % 2;
		num /= 2;
		count++;
	}
	printf("奇数序列:\n");
	for (i = count; i >= 0; i -= 2){
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("偶数序列:\n");
	for (i = count - 1; i >= 0; i -= 2){
		printf("%d ", arr[i]);
	}
	printf("\n");*/
	/*system("pause");
	return 0;
}*/



//输出一个整数的每一位。

//int Fun(int n){
//	if (n >= 10){
//		Fun(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main(){
//	Fun(1234);
//	system("pause");
//	return 0;
//}
//int Fun(int x){
//	if (x < 10 && x >= 0){
//		return x;
//	}
//	else{
//		int i = x % 10;
//		x = x / 10;
//		return i + Fun(x);
//	}
//}
//int main(){
//	Fun(1234);
//	printf("%d ", Fun(1234));
//	system("pause");
//	return 0;
//}
//编程实现：
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7
//#include<stdio.h>
//#include<stdlib.h>
//int Compare(int m, int n){
//	int count = 0;
//	for (int i = 0; i < 32; ++i){
//		if ((m & (1 << i)) != (n & (1 << i))){
//			count++;
//		}
//	}
//	return count;
//}
//int main(){
//	int a, b;
//	printf("请输入两个数:\n");
//	scanf("%d %d", &a, &b);
//	printf("%d\n", Compare(a, b));
//	system("pause");
//	return 0;
//}





