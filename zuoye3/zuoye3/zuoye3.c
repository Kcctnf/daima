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
	printf("����ʮ������:\n");
	int i, MAX, n;
	scanf("%d", &n);//�����һ����       //���Խ���һ�ε�N����ѭ��֮�У���������������ж�Ҳ���ԴﵽĿ�ġ�
	MAX = n;//�����һ��������������
	for (i = 2; i <= 10; i++){
		scanf("%d", &n);
		if (n > MAX){
			MAX = n;//��һ�������ڵ�һ����	
		}
	}
	printf("%d\n", MAX);//����ϴ����
	system("pause");
	return 0;
}
#include<stdlib.h>
#include<stdio.h>
int main(){
	printf("������������:\n");
	int a, b, c, d;
	scanf("%d %d %d", &a, &b, &c);
	if (b > a){//�Ƚ������������Ƚϣ�Ȼ��С�����У�֮���������ȥ���ɡ�
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
	//շת�����ʵ�� 
	    printf("������������(a,b)��\n");
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
		printf("���Լ��Ϊ��%d\n", b);
		system("pause");
		return 0;	
}
#include<stdlib.h>//շת�����
#include<stdio.h>
int main(){
	int a, b, temp;//����������Ϊ����
	printf("����������:\n");
	scanf("%d %d", &a, &b);//ȡ��ַ
	if (a > b){
        while (a%b != 0){//������
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










