//#define _CRT_SECURE_NO_WARNINGS 
//дһ���������ز����������� 1 �ĸ���
//���磺 15 0000 1111 4 �� 1
//����ԭ�ͣ�
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
//	printf("������һ����:\n");
//	scanf("%d", &a);
//	int ret = count_one_bits(a);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//��ȡһ�������������������е�ż��λ������λ��
//�ֱ�������������С�
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
int main(){
	int num = 0;
	int i = 0;
	int count = 0;
	int arr[32] = { 0 };
	printf("������һ����:\n");
	scanf("%d", &num);
	while (num){
		//�Ƚ������ת��Ϊ����������Ȼ�����������������Ϊ���顣
		arr[i]=num % 2;
		num /= 2;
		//count�Ƕ�������ܵ�1��0�������ı�ʾ��
		count++;
		i++;
	}
	//����λ��
	printf("����λ\n");
	for (i = count; i >= 0; i -= 2){
		printf("%d ", arr[i]);
	}
	printf("\n");
	//ż��λ��
	printf("ż��λ\n");
	for (i = count - 1; i >= 0; i -= 2){
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}



//����һ��
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
//		//ʹ����λ�����Ͱ�λ����
//		if (num & (1 << i)){//1����һλ�����ڶ�1������λ��
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

//��ȡһ�������������������е�ż��λ������λ��
//�ֱ�������������С�

	/*printf("����һ����:\n");
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
	printf("��������:\n");
	for (i = count; i >= 0; i -= 2){
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("ż������:\n");
	for (i = count - 1; i >= 0; i -= 2){
		printf("%d ", arr[i]);
	}
	printf("\n");*/
	/*system("pause");
	return 0;
}*/



//���һ��������ÿһλ��

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
//���ʵ�֣�
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7
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
//	printf("������������:\n");
//	scanf("%d %d", &a, &b);
//	printf("%d\n", Compare(a, b));
//	system("pause");
//	return 0;
//}





