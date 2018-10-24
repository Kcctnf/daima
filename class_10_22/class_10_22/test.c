//扫雷小游戏
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#define ROW 9
#define COL 9
#define MINE_COUNT 9
//点开的方块，使用'0'表示不是地雷，使用'1'表示是地雷。
char mine_map[ROW + 2][COL + 2];
//使用*表示没有点开的方块，对于打开的方块就用具体的数字表示。
char show_map[ROW + 2][COL + 2];
int Menu(){
	printf("***********************\n");
	printf("     1 开始游戏        \n");
	printf("     0 结束游戏        \n");
	printf("***********************\n");
	printf("输入你的选择:\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
//对于数组进行初始化,布置雷阵
void Init(char mine_map[ROW + 2][COL + 2], char show_map[ROW + 2][COL + 2]){
	//对于mine_map先将里边的元素设为'0'.
	memset(mine_map, '0', (ROW + 2)*(COL + 2));
	//对于show_map现将里边的元素设为'*'
	memset(show_map, '*', (ROW + 2)*(COL + 2));
	//设置地雷
	srand(time(0));//在循环外设置。
	int mine_count = MINE_COUNT;
	while (mine_count > 0){
		//在这个循环里边设置地雷，每设置完成一个，mine_count--
		int row = rand() % 9 + 1;
		int col = rand() % 9 + 1;
		if (mine_map[row][col] == '0'){
			mine_map[row][col] = '1';
			--mine_count;
		}
	}
}
void DisplayMap(char map[ROW + 2][COL + 2]){
	//打印第一行的内容，五个空格+每一列的坐标。
	printf("     ");
	for (int col = 1; col <= COL; ++col){
		printf("%d ", col);
	}
	printf("\n");
	//打印第二行，地图的上边框
	for (int col = 1; col <= COL; ++col){
		printf("---");
	}
	printf("\n");
	//按行打印地图中的具体内容。
	for (int row = 1; row <= ROW; ++row){
		printf("%02d|  ", row);
		for (int col = 1; col <= COL; ++col){
			printf("%c ", map[row][col]);
		}
		printf("\n");
	}
}
//统计当前数字周围几个雷，并将内容更新到show_map中.
UpdateShowMap(char show_map[ROW + 2][COL + 2],char mine_map[ROW + 2][COL + 2],int row,int col){
	int mine_count = 0;
	mine_count = (mine_map[row - 1][col - 1] - '0') + (mine_map[row - 1][col] - '0')
		+ (mine_map[row - 1][col + 1] - '0') + (mine_map[row][col - 1] - '0')
		+ (mine_map[row + 1][col - 1] - '0') + (mine_map[row][col + 1] - '0')
		+ (mine_map[row + 1][col] - '0') + (mine_map[row + 1][col + 1] - '0');
	show_map[row][col] = '0' + mine_count;//加上字符'0',代表这是字符1.
	row - 1, col - 1;
	row - 1, col;
	row - 1, col + 1;
	row, col - 1;
	row, col;//当前位置
	row, col + 1;
	row + 1, col - 1;
	row + 1, col;
	row + 1, col + 1;
}

void Game(){
	Init(mine_map,show_map);
	//打印一下show_map地图
	DisplayMap(show_map);
	int not_mine_count = 0;
	while (1){
		//提示用户输入坐标[1,ROW][1,COL]
		//对于用户输入的合法性进行判定，如果不合理提示用户重新输入。
		//判定玩家是否踩雷，如果踩雷，游戏结束，并且打印雷阵。
		//如果没踩雷，判定一下玩家是否胜利，胜利条件是(已经翻开的方块数达到了地图方块数减去地雷的个数)。
		//如果游戏没有胜利，就需要统计当前位置有几个雷，打印show_map，回到上边循环。
		int row = 0;
		int col = 0;
		printf("输入您要翻开的方块的坐标,row,col:\n");
		scanf("%d %d", &row, &col);
		//对于用户输入的合法性进行判定，如果不合理提示用户重新输入。
		if (row<0 || row>ROW || col<0 || col>COL){
			printf("您的输入有误，请重新输入，row,col:\n");
			continue;
		}
		//判定玩家是否踩雷，如果踩雷，游戏结束，并且打印雷阵。
		if (mine_map[row][col] == '1'){
			printf("游戏结束！\n");
			DisplayMap(mine_map);
			break;
		}
		//如果没踩雷，判定一下玩家是否胜利，胜利条件是(已经翻开的方块数达到了地图方块数减去地雷的个数)。
		++not_mine_count;
		if (not_mine_count == ROW*COL - MINE_COUNT){
			printf("扫雷成功！\n");
			DisplayMap(mine_map);
			break;
		}
		//如果游戏没有胜利，就需要统计当前位置有几个雷，打印show_map，回到上边循环。
		
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
			printf("您的输入有误，请重新输入:\n");
		}
		system("pause");
		return 0;
		}
	}