
#include<stdio.h>
#include<stdlib.h>
int main(){
	int arr[10] = { 10, 11, 43, 54, 65, 23, 21, 34, 45, 64 };
	int max = arr[0];//�ȶ���һ�����ģ����ſ�ʼ�������ıȽ�
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
�����������飬����ĳ���һ��
�������������飬Ȼ��ʼ������������ݣ�
#include<stdio.h>
#include<stdlib.h>
int main(){
	int arr1[] = { 1, 2, 3, 4, 5, 6 };
	int arr2[] = { 6, 7, 8, 9, 10, 11 };
	int i = 0;
	for (i = 0; i < sizeof(arr1)/sizeof(arr1[0]); i++){
		int temp;
		temp = arr1[i];//�������ֵĽ������ṩ����������
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}//���л��У���ѭ��
	for (i = 0; i < sizeof(arr1)/sizeof(arr1[0]); i++){
		printf("%d ", arr1[i]);//��ӡ��һ��
	}
	printf("\n");
	for (i = 0; i < sizeof(arr2)/sizeof(arr2[0]); i++){
		printf("%d ", arr2[i]);//��ӡ�ڶ���
	}
	system("pause");
	return 0;
}








