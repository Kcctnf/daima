
#include<stdio.h>
#include<stdlib.h>
int main(){
	int arr[10] = { 10, 11, 43, 54, 65, 23, 21, 34, 45, 64 };
	int max = arr[0];//先定义一个最大的，接着开始和其他的比较
	int i = 1;
	while (i < 10){
		if (max < arr[i]){
			max = arr[i];
		}
		i += 1;
	}printf("max=%d\n", max);
	system("pause");
	return 0;
}
交换量个数组，数组的长度一样
得先有两个数组，然后开始交换数组的内容，
#include<stdio.h>
#include<stdlib.h>
int main(){
	int arr1[] = { 1, 2, 3, 4, 5, 6 };
	int arr2[] = { 6, 7, 8, 9, 10, 11 };
	int i = 0;
	for (i = 0; i < sizeof(arr1)/sizeof(arr1[0]); i++){
		int temp;
		temp = arr1[i];//利用数字的交换，提供第三变量。
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}//进行换行，及循环
	for (i = 0; i < sizeof(arr1)/sizeof(arr1[0]); i++){
		printf("%d ", arr1[i]);//打印第一行
	}
	printf("\n");
	for (i = 0; i < sizeof(arr2)/sizeof(arr2[0]); i++){
		printf("%d ", arr2[i]);//打印第二行
	}
	system("pause");
	return 0;
}








