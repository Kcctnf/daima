#include<stdio.h>
#include<stdlib.h>//������ֱ����Ǹ�λ���ֲ���
int main(){
	int num;
	printf("������һ��0-9������:");
	scanf("%d", &num);
	//��������ֱַ���һ����λ��ʮλ����ζֱ��������͡�����ʮλ����10*���ּ�������
	num = 5 * num + 10 * num * 4 + 100 * num * 3 + 1000 * num * 2 + 10000 * num;
	printf("%d\n", num);
	system("pause");
	return 0;
}
��0-999֮�������ˮ�ɻ�����ˮ�ɻ�����һ����λ�����й��ɵģ�����:153 = 1^3 + 5^3 + 3^3�� 
#include<stdio.h>
#include<stdlib.h>
int main(){
	int a, b, c, n;
	printf("ˮ�ɻ���:\n");
	for (n = 100; n < 1000; n++){
		a = n / 100;//��λ��
		b = (n - a * 100) / 10;//ʮλ
		c = n % 10;//��λ
		if (n == a*a*a + b*b*b + c*c*c){
			printf("%d\n", n);
		}
	}
		system("pause");
		return 0;
}
//��ӡ*����ɵ�����
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
int main(){
	int i, j, k ;
	for (i = 0; i <= 7; i++){
		k = abs(i - 7 / 2);//��߽��ޣ����ո���
		printf("\n");
		for (j = 0; j < k; j++){
			printf(" ");
		}
		for (j = 0; j < (7 - 2 * k); j++){//7-2K��*�ŵ���Ŀ
			printf("*");
		}
	}
	system("pause");
	return 0;
}












