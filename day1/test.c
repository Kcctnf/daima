#define _CRT_SECURE_NO_WARNINGS 
//��дһ�����򣬴���һ������26��Ԫ�ص����飬�������д���26��Сд��ĸ�����øĳ�����ʾ�����������
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
ʹ��Ƕ��ѭ������ӡ�������Ρ�
#include<stdio.h>
#include<stdlib.h>
int main(){
	//�����δӵ�һ�пɿ�ʼ�𽥵�����������������࣬Ϊ5
	int hang, lie;

	for (hang = 5; hang > 0; hang--){//�������Ϊ5������ÿһ�еģ����������
		for (lie = hang; lie <= 5; lie++){
			printf("$");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
��ӡ����һ�������ǣ���������Ҫ��ÿһ��
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

��дһ�����򣬰�һ�����ʶ���һ���ַ����飬Ȼ�����ӡ������ʣ���ʾ:strlen
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
int main(){
	char a[20];
	int i;
	printf("������һ������:\n");
	scanf("%s",a);
	for (i = strlen(a) - 1; i >= 0; i--)
	printf("%c", a[i]);
	system("pause");
	return 0;
}

��дһ������Ҫ������������������Ȼ���ӡ���ö��ߵĲ�ֵ���Զ��ߵĳ˻����õĽ����
���û���������ֵ�����֮ǰ������ѭ������ÿ������ֵ��
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
int main(){
	float a, b, c;
	printf("����������������:\n");
	while (scanf("%f %f", &a, &b) == 2){//��ѭ������������֣����ܹ�ѭ��ִ�м���
		c = (a - b) / (a*b);
		printf("c=%f\n", c);
		printf("����������������:\n");
	}
	system("pause");
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int memu(){
	//��ӡ�˵�
	printf("**************************************\n");
	printf("   1  ��ʼ��Ϸ   0  ������Ϸ\n");
	printf("**************************************\n");
	printf("���������ѡ��:\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
//void��ʾ�˺���û�з���ֵ
void game(){
	printf("��Ϸ�����С�����\n");
	//�õ����������һ������1-100�����������û�ȥ�¡�
	int result = rand() % 100 + 1;
	while (1){
		//��ʾ�û�����һ������
		printf("��������²������:\n");
		int num = 0;
		scanf("%d", &num);
		if (num < result){
			printf("����\n");
		}
		else if (num > result){
			printf("����\n");
		}
		else{
			printf("�¶���\n");
			break;
		}
		//�����û�������������֣���������ֱȽϣ����Ǹ��˻��ǵ���
		//����´��ˣ���Ҫ��������²�����
	}
}
int main(){
	//1.����һ��ѭ��
	while (1){
		//2.���û�����ѡ���Ƿ�ʼ��Ϸ
		int choice = memu();
		if (choice == 1){
			//�û�ѡ����ǿ�ʼ��Ϸ���ͽ�����Ϸ���ڡ�
			game();
		}
		else if (choice == 0){
			break;
			//�û�ѡ���˳���Ϸ�������ѭ����
		}
		else{
			printf("�������������������������:\n");
		}

	}
	system("pause");
	return 0;
}















