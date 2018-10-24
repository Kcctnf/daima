//ɨ��С��Ϸ
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#define ROW 9
#define COL 9
#define MINE_COUNT 9
//�㿪�ķ��飬ʹ��'0'��ʾ���ǵ��ף�ʹ��'1'��ʾ�ǵ��ס�
char mine_map[ROW + 2][COL + 2];
//ʹ��*��ʾû�е㿪�ķ��飬���ڴ򿪵ķ�����þ�������ֱ�ʾ��
char show_map[ROW + 2][COL + 2];
int Menu(){
	printf("***********************\n");
	printf("     1 ��ʼ��Ϸ        \n");
	printf("     0 ������Ϸ        \n");
	printf("***********************\n");
	printf("�������ѡ��:\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
//����������г�ʼ��,��������
void Init(char mine_map[ROW + 2][COL + 2], char show_map[ROW + 2][COL + 2]){
	//����mine_map�Ƚ���ߵ�Ԫ����Ϊ'0'.
	memset(mine_map, '0', (ROW + 2)*(COL + 2));
	//����show_map�ֽ���ߵ�Ԫ����Ϊ'*'
	memset(show_map, '*', (ROW + 2)*(COL + 2));
	//���õ���
	srand(time(0));//��ѭ�������á�
	int mine_count = MINE_COUNT;
	while (mine_count > 0){
		//�����ѭ��������õ��ף�ÿ�������һ����mine_count--
		int row = rand() % 9 + 1;
		int col = rand() % 9 + 1;
		if (mine_map[row][col] == '0'){
			mine_map[row][col] = '1';
			--mine_count;
		}
	}
}
void DisplayMap(char map[ROW + 2][COL + 2]){
	//��ӡ��һ�е����ݣ�����ո�+ÿһ�е����ꡣ
	printf("     ");
	for (int col = 1; col <= COL; ++col){
		printf("%d ", col);
	}
	printf("\n");
	//��ӡ�ڶ��У���ͼ���ϱ߿�
	for (int col = 1; col <= COL; ++col){
		printf("---");
	}
	printf("\n");
	//���д�ӡ��ͼ�еľ������ݡ�
	for (int row = 1; row <= ROW; ++row){
		printf("%02d|  ", row);
		for (int col = 1; col <= COL; ++col){
			printf("%c ", map[row][col]);
		}
		printf("\n");
	}
}
//ͳ�Ƶ�ǰ������Χ�����ף��������ݸ��µ�show_map��.
UpdateShowMap(char show_map[ROW + 2][COL + 2],char mine_map[ROW + 2][COL + 2],int row,int col){
	int mine_count = 0;
	mine_count = (mine_map[row - 1][col - 1] - '0') + (mine_map[row - 1][col] - '0')
		+ (mine_map[row - 1][col + 1] - '0') + (mine_map[row][col - 1] - '0')
		+ (mine_map[row + 1][col - 1] - '0') + (mine_map[row][col + 1] - '0')
		+ (mine_map[row + 1][col] - '0') + (mine_map[row + 1][col + 1] - '0');
	show_map[row][col] = '0' + mine_count;//�����ַ�'0',���������ַ�1.
	row - 1, col - 1;
	row - 1, col;
	row - 1, col + 1;
	row, col - 1;
	row, col;//��ǰλ��
	row, col + 1;
	row + 1, col - 1;
	row + 1, col;
	row + 1, col + 1;
}

void Game(){
	Init(mine_map,show_map);
	//��ӡһ��show_map��ͼ
	DisplayMap(show_map);
	int not_mine_count = 0;
	while (1){
		//��ʾ�û���������[1,ROW][1,COL]
		//�����û�����ĺϷ��Խ����ж��������������ʾ�û��������롣
		//�ж�����Ƿ���ף�������ף���Ϸ���������Ҵ�ӡ����
		//���û���ף��ж�һ������Ƿ�ʤ����ʤ��������(�Ѿ������ķ������ﵽ�˵�ͼ��������ȥ���׵ĸ���)��
		//�����Ϸû��ʤ��������Ҫͳ�Ƶ�ǰλ���м����ף���ӡshow_map���ص��ϱ�ѭ����
		int row = 0;
		int col = 0;
		printf("������Ҫ�����ķ��������,row,col:\n");
		scanf("%d %d", &row, &col);
		//�����û�����ĺϷ��Խ����ж��������������ʾ�û��������롣
		if (row<0 || row>ROW || col<0 || col>COL){
			printf("���������������������룬row,col:\n");
			continue;
		}
		//�ж�����Ƿ���ף�������ף���Ϸ���������Ҵ�ӡ����
		if (mine_map[row][col] == '1'){
			printf("��Ϸ������\n");
			DisplayMap(mine_map);
			break;
		}
		//���û���ף��ж�һ������Ƿ�ʤ����ʤ��������(�Ѿ������ķ������ﵽ�˵�ͼ��������ȥ���׵ĸ���)��
		++not_mine_count;
		if (not_mine_count == ROW*COL - MINE_COUNT){
			printf("ɨ�׳ɹ���\n");
			DisplayMap(mine_map);
			break;
		}
		//�����Ϸû��ʤ��������Ҫͳ�Ƶ�ǰλ���м����ף���ӡshow_map���ص��ϱ�ѭ����
		
		UpdateShowMap(show_map,mine_map,row,col);
		system("cls");
		DisplayMap(show_map);
	}
}
int main(){
	while (1){
		int choice = Menu();
		if (choice == 1){
			Game();
		}
		else if (choice == 0){
			break;
		}
		else{
			printf("����������������������:\n");
		}
		system("pause");
		return 0;
		}
	}