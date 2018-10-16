#define _CRT_SECURE_NO_WARNINGS 
//写代码可以在整型有序数组中查找想要的数字，
//找到了返回下标，找不到返回 - 1.（折半查找）

//#include<stdio.h>
//#include<stdlib.h>
//
////折一个半查找，先有一个左右值，然后要定义一个中间值，接着将要寻找的数字与中间值对比
////然后来看看在那边，接着继续执行，直到要找的数字与中间值相同结束。
//int main(){
//	/*int i = 0;*/
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int to_find = 5;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]);
//	while (left <= right){
//		int mid = (left + right) / 2;
//		if (to_find < arr[mid]){
//			right = mid - 1;
//		}
//		else if (to_find>arr[mid]){
//			left = mid + 1;
//		}
//		else{
//			printf("找到了，下标为%d\n", mid);
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}
	/*for (; i < sizeof(arr) / sizeof(arr[0]); ++i){
		if (to_find == arr[i]){
			break;
		}
	}
	if (i == 5){
		printf("没找到\n");
	}
	if (i < 5){
		printf("找到了，下标为%d\n", i);
	}
	system("pause");
	return 0;
}*/
//编写一个程序，可以一直接收键盘字符， 
//如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，
//如果是数字不输出。
//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//#include<stdlib.h>
//#include<ctype.h>
//int main(){
//	int ch = 0;
//	printf("请输入一个字符:\n");
//	while ((ch=getchar())!=EOF){//EOF表示文件末尾，不等于EOF便表示文件继续执行
//		if (ch >= 'a'&&ch <= 'z'){
//		printf("%c\n", toupper(ch));
//		}
//		else if (ch >= 'A'&&ch <= 'Z'){
//			printf("%c\n", toupper(ch));//toupper表示打印与之对应的大小写字母，包含在ctype.h文件中
//		}
//		else if (ch >= '0'&&ch <= '9'){
//			continue;
//		}
//	}
//	system("pause");
//	return 0;
//}



//写代码可以在整型有序数组中查找想要的数字，
//找到了返回下标，找不到返回 - 1.（折半查找）

//#include<stdio.h>
//#include<stdlib.h>
////调用函数来实现查找数字。
//int Chazhao(int arr[],int left,int right,int to_find){
//	while (left <= right){
//		int mid = (left + right) / 2;
//		if (to_find < arr[mid]){
//			right = mid - 1;
//		}
//		else if (to_find>arr[mid]){
//			left = mid + 1;
//		}
//		else{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]);
//	int n = 5;//n=to_find
//	int result = 0;
//	result = Chazhao(arr, 0, right, n);
//	if (result == -1){
//		printf("没找到\n");
//	}
//	else{
//		printf("找到了，下标为%d\n", result);
//	}
//	system("pause");
//	return 0;
//}
//冒泡法实现对数字的大小排序。
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int a[10];
//	int j, i, t;
//	printf("请输入十个数字:\n");
//	for (i = 0; i < 10; ++i){
//		scanf("%d", &a[i]);
//	}
//	for (j = 0; j < 9; ++j){
//		for (i = 0; i < 9 - j; ++i){
//			if (a[i]>a[i + 1]){
//				t = a[i + 1];
//				a[i + 1] = a[i];
//				a[i] = t;
//			}
//			printf("每一次排序打印出来:\n");
//		}/*for (i = 0; i < 10; ++i){
//		printf("%d ", a[i]);*///放在这里打印，相当于要循环一次打印一次。
//		}
//		for (i = 0; i < 10; ++i){
//			printf("%d ", a[i]);//这块只能打印最终的结果。
//	}
//	system("pause");
//	return 0;
//}

//用递归和非递归实现第n个斐波那契数。
//递归 法；
//#include<stdio.h>
//#include<stdlib.h>
//int Dizeng(int n){
//	if (n == 1 || n == 2){
//		return 1;
//	}if (n > 2){
//		return Dizeng(n - 1) + Dizeng(n - 2);
//	}
//}
//int main(){
//	printf("%d\n", Dizeng(1));
//	system("pause");
//	return 0;
//}
//非递归法:
//#include<stdio.h>
//#include<stdlib.h>
//int Feibo(int n){
//	if (n == 1 || n == 2){
//		return 1;
//	}
//	int num1 = 1;
//	int num2 = 1;
//	int i = 1;
//	int sum = 0;
//	for (i = 3; i <= n; ++i){
//		sum = num1 + num2;
//		num1 = num2;//将num1表示第二项，num2表示第三项
//		num2 = sum;
//	}
//	return sum;
//}
//int main(){
//	printf("%d\n", Feibo(7));
//	system("pause");
//	return 0;
//}
//编写一个函数，实现n^k，使用递归实现。
//#include<stdio.h>
//#include<stdlib.h>
//int Function(int n ,int k){
//	if (n > 0 && k == 0){
//		return 1;
//	}
//	if (n > 0 && k == 1){
//		return n;
//	}
//	if (n > 0 && k > 1){
//		return n*Function(n, k-1);//调用原函数，实现
//	}
//}
//int main(){
//	int a, b;
//	printf("请输入两个大于0的数:\n");
//	scanf("%d %d", &a, &b);
//	printf("%d\n", Function(a, b));
//	system("pause");
//	return 0;
//}

//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和， 
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//#include<stdio.h>
//#include<stdlib.h>
//int DigitSum(int n){
//	int i;
//	if (n >= 0 && n < 10){
//		return n;
//	}if (n>9){
//		i = n % 10;//求出第一次的个位数
//		n = n / 10;//将多位数除以10变成一个比原来少一位的数。
//	}
//	return i + DigitSum(n);//递归实现对每一位数字进行求和。
//}
//int main(){
//	int n;
//	printf("请输入一个大于0的数字:\n");
//	scanf("%d", &n);
//	printf("%d\n", DigitSum(n));
//	system("pause");
//	return 0;
//}
//使用递归方式打印数字的每一位。
//#include<stdio.h>
//#include<stdlib.h>
//int Hanshu(int x){
//	
//	if (x > 9){
//		Hanshu(x / 10);
//	}
//	printf("%d ", x % 10);
//}
//int main(){
//	int a;
//	scanf("%d", &a);
//	Hanshu(a);
//	system("pause");
//	return 0;
//}
//递归和非递归实现求n的阶乘。
//非递归法
//#include<stdio.h>
//#include<stdlib.h>
//int Factor(int n){
//	int result = 1;
//	for (int i = 1; i <= n; i++){
//		result *= i;
//	}
//	return result;
//}
//int main(){
//	Factor(5);
//	printf("%d\n", Factor(5));
//	system("pause");
//	return 0;
//}
//递归法
//#include<stdio.h>
//#include<stdlib.h>
//int Factor(int n){
//	if (n == 1){
//		return 1;
//	}if (n > 1){
//		return n*Factor(n - 1);
//	}
//}
//int main(){
//	Factor(5);
//	printf("%d\n", Factor(5));
//	system("pause");
//	return 0;
//}
//递归和非递归分别实现strlen
//#include<stdio.h>
//#include<stdlib.h>
//int Strlen(const char* str){
//	if (*str == '\0'){
//		return 0;
//	}
//	else{
//		return 1 + Strlen(str + 1);
//	}
//}
//int main(){
//	/*char *p = "andjash";
//	int len = Strlen(p);*/
//	printf("%d\n", Strlen("hehhe"));
//	system("pause");
//	return 0;
//}
//非递归法
//#include<stdio.h>
//#include<stdlib.h>
//int Strlen(const char* str){
//	int count = 0;//计数法实现strlen函数
//	while (*str != '\0'){
//		++count;
//		++str;
//	}
//	return count;
//}
//int main(){
//	printf("%d\n",Strlen("hehe"));
//	system("pause");
//	return 0;
//}
//编写一个函数 reverse_string(char * string)（递归实现） 
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
//int reverse_string(char* string){
//	if (*string == '\0'){
//		printf("%c", *string);
//	}
//	else{
//		reverse_string(++string);//输出下一个字符
//		printf("%c\n", *(--string));
//	}
//}
//int main(){
//	reverse_string("abcdefg");
//	system("pause");
//	return 0;
//}

































