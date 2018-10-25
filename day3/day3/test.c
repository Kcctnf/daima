 
//���һ����������Ϸ��
//��ӡһ���˵��������Ƿ�����Ϸ��
//��ӡһ�����̺���chessboard�����ö�ά���������档
//���̴�ӡ����֮�󣬾Ϳ�ʼ������Ϸ����������
//����������壬Ҳ��������������ķ�ʽ��ʶ��������ӵ�λ�á�
//˳�㿴����Ϸ�Ƿ������
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//system(cls)ͷ�ļ�
//����֮�������һ���������档
#include<math.h>
#define ROW 3
#define COL 3
char g_arr[ROW][COL];//����һ������
//��ӡһ���˵��������Ƿ�����Ϸ��
int menu(){
	printf("*************************\n");
	printf("     1  ��ʼ��Ϸ         \n");
	printf("     0  ������Ϸ         \n");
	printf("*************************\n");
	printf("����������ѡ��:\n");
	int choic = 0;
	scanf("%d", &choic);
	return choic;
}
//�����̽��г�ʼ��
void Init(){
	for (int row = 0; row < ROW; ++row){
		for (int col = 0; col < COL; ++col){
			g_arr[row][col] = ' ';//ע���������Ϊrow��col,������ROW��COL
		}
	}
}
//��ӡһ�����̺���chessboard�����ö�ά���������档
//void Print(){
//	for (int row = 0; row < ROW; row++){
//		for (int col = 0; col < COL; ++col){
//			printf("[%c]", g_arr[row][col]);
//			/*if (row != ROW - 1){
//				printf("");
//			}*/
//	}
//		printf("\n");
//	}
//}
void Print(){
	for (int row = 0; row < ROW; ++row){
		printf("| %c | %c | %c |\n",g_arr[row][0],g_arr[row][1],g_arr[row][2]);
		if (row != ROW-1 ){
			printf("|---|---|---|\n");
		}
	}
}
void playermove(){
	//ʹ��x��ʾ��ң�ʹ��o��ʾ����
	//������ӣ�˳����һ�¿�����Ϸ�Ƿ������
	while (1){
		printf("���������(��������(row,col):\n");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		//������������У�飨��Զ��Ҫ�����û��Ĳ�����
		if (row < 0 || row >= ROW || col < 0 || col >= COL){
			printf("����������������������:\n");
			continue;
		}
		if (g_arr[row][col] != ' '){
			printf("��ǰλ���Ѿ����ӣ�����������:\n");
			continue;
		}
		g_arr[row][col] = 'x';//����������Ϸ����˳�ѭ����
		break;
	}
}
void Computermove(){
	//����Ҫ������ӣ����ǵ���Ҳ�п��ܻ��䵽���ӵĵط����Ҿ��õ�����������һ�Ρ�
	//����ֻ���������һ���к������������ӡ�
	printf("���������:\n");
	int row = 0;
	int col = 0;
	while (1){
		row = rand() % ROW; //[0,3)
		col = rand() % COL;//[0,2)
		if (g_arr[row][col] == ' '){
			g_arr[row][col] = 'o';
			break;
		}
	}
}
int Isfull(){
	for (int row = 0; row < ROW; ++row){
		for (int col = 0; col < COL; ++col){
			if (g_arr[row][col] == ' '){
				return 0;
			}
		}
	}
	return 1;
}
//�����Ϸ�Ƿ����
char CheckWinner(){
	//�ȿ�����������û������һ���ٿ�����������û������һ���ٿ��������Խ�����û������һ��
	for (int row = 0; row < ROW; ++row){//�����
		if (g_arr[row][0] == g_arr[row][1]&&g_arr[row][0]==g_arr[row][2]&&g_arr[row][0]!=' '){
			return g_arr[row][0];
		}
	}
	for (int col = 0; col < COL; ++col){
		if (g_arr[0][col] == g_arr[1][col] && g_arr[0][col] == g_arr[2][col]&&g_arr[0][col]!=' '){
			return g_arr[0][col];
		}
	}if (g_arr[0][0] == g_arr[1][1] && g_arr[0][0] == g_arr[3][3] && g_arr[0][0] != ' '){
		//�Խ���
		return g_arr[0][0];
	}if (g_arr[0][2] == g_arr[1][1] && g_arr[0][2] == g_arr[2][0] && g_arr[0][2] != ' '){
		//�Խ���
		return g_arr[0][2];
	}
	//�ж��Ƿ����
	if (Isfull()){
		return 'q';
	}return ' ';
}
void Game(){
	char winner = ' ';
	Init();//�����̳�ʼ��
	while (1){
		Print();//��ӡһ������
		playermove();//������ӣ��п����䵽���ӵĵط�
		//winner=CheckWinner();//�����Ϸ�Ƿ������
		//if (winner != ' '){
		//	break;
		//}
		Computermove();
		winner = CheckWinner();
		if (winner != ' '){
			break;
		}
		system("cls");
	}
	Print();
	if (winner == 'x'){
		printf("��һ�ʤ!\n");
	}
	if (winner == 'o'){
		printf("���Ի�ʤ!\n");
	}
	if (winner == 'q'){
		printf("����!\n");
	}
}
int main(){
	while (1){
		int choic = menu();
		if (choic == 0){
			break;
		}
		else if (choic == 1){
			printf("��Ϸ������:\n");
			Game();
		}
		else{
			printf("����������������������:\n");
		}
	}
	system("pause");
	return 0;
}