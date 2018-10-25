 
//设计一个三子棋游戏。
//打印一个菜单，进行是否玩游戏。
//打印一个棋盘函数chessboard，运用二维数组来代替。
//棋盘打印好了之后，就开始进行游戏正常操作。
//先是玩家下棋，也是利用输入坐标的方式来识别玩家落子的位置。
//顺便看看游戏是否结束。
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//system(cls)头文件
//清零之后可以在一个棋盘上玩。
#include<math.h>
#define ROW 3
#define COL 3
char g_arr[ROW][COL];//定义一个棋盘
//打印一个菜单，进行是否玩游戏。
int menu(){
	printf("*************************\n");
	printf("     1  开始游戏         \n");
	printf("     0  结束游戏         \n");
	printf("*************************\n");
	printf("请输入您的选择:\n");
	int choic = 0;
	scanf("%d", &choic);
	return choic;
}
//对棋盘进行初始化
void Init(){
	for (int row = 0; row < ROW; ++row){
		for (int col = 0; col < COL; ++col){
			g_arr[row][col] = ' ';//注意括号里边为row和col,不能是ROW和COL
		}
	}
}
//打印一个棋盘函数chessboard，运用二维数组来代替。
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
	//使用x表示玩家，使用o表示电脑
	//玩家落子，顺便检查一下看看游戏是否结束。
	while (1){
		printf("请玩家落子(输入坐标(row,col):\n");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		//对玩家输入进行校验（永远不要相信用户的操作）
		if (row < 0 || row >= ROW || col < 0 || col >= COL){
			printf("您的输入有误，请重新输入:\n");
			continue;
		}
		if (g_arr[row][col] != ' '){
			printf("当前位置已经有子，请重新输入:\n");
			continue;
		}
		g_arr[row][col] = 'x';//如果玩家输入合法，退出循环。
		break;
	}
}
void Computermove(){
	//电脑要随机落子，但是电脑也有可能会落到有子的地方，我就让电脑重新再来一次。
	//电脑只能随机产生一个行和列来进行落子。
	printf("请电脑落子:\n");
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
//检测游戏是否结束
char CheckWinner(){
	//先看看三个行有没有连到一起，再看看三个列有没有连到一起，再看看两条对角线有没有连到一起
	for (int row = 0; row < ROW; ++row){//检查行
		if (g_arr[row][0] == g_arr[row][1]&&g_arr[row][0]==g_arr[row][2]&&g_arr[row][0]!=' '){
			return g_arr[row][0];
		}
	}
	for (int col = 0; col < COL; ++col){
		if (g_arr[0][col] == g_arr[1][col] && g_arr[0][col] == g_arr[2][col]&&g_arr[0][col]!=' '){
			return g_arr[0][col];
		}
	}if (g_arr[0][0] == g_arr[1][1] && g_arr[0][0] == g_arr[3][3] && g_arr[0][0] != ' '){
		//对角线
		return g_arr[0][0];
	}if (g_arr[0][2] == g_arr[1][1] && g_arr[0][2] == g_arr[2][0] && g_arr[0][2] != ' '){
		//对角线
		return g_arr[0][2];
	}
	//判断是否和棋
	if (Isfull()){
		return 'q';
	}return ' ';
}
void Game(){
	char winner = ' ';
	Init();//对棋盘初始化
	while (1){
		Print();//打印一下棋盘
		playermove();//玩家落子，有可能落到有子的地方
		//winner=CheckWinner();//检测游戏是否结束。
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
		printf("玩家获胜!\n");
	}
	if (winner == 'o'){
		printf("电脑获胜!\n");
	}
	if (winner == 'q'){
		printf("和棋!\n");
	}
}
int main(){
	while (1){
		int choic = menu();
		if (choic == 0){
			break;
		}
		else if (choic == 1){
			printf("游戏进行中:\n");
			Game();
		}
		else{
			printf("您的输入有误，请重新输入:\n");
		}
	}
	system("pause");
	return 0;
}