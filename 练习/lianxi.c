/*#define _CRT_SECURE_NO_WARNINGS*/ 
//#include<stdlib.h>
//#include<stdio.h>
//int main(){
//	int a = 0;
//	int i = 0;
//	printf("输入一个整数:\n");
//	scanf("%d", &a);
//	for (i = 1; i <= 10; i++){
//		a = a + 1;
//		printf("%d ", a);
//	}
//	system("pause");
//	return 0;
//}
//#include<stdlib.h>
//#include<stdio.h>
//int main(){
//	int n = 0;//daibiantianshu
//	int a = 0;//daibiaozhoushu
//	int b = 0;
//	
//	printf("输入一个数字代表天数:\n");
//	scanf("%d", &n);
//	while (n > 0){
//			a = n / 7;
//			b = n % 7;
//			printf("days are %d weeks,%d days\n", a, b);
//			/*n += 1;*/
//			printf("输入0或者负数退出:");
//			scanf("%d", &n);
//	}
//	system("pause");
//	return 0;
//}
//#include<stdlib.h>
//#include<stdio.h>
//void br();
//void ic();
//int main(){
//	void bar();
//	void ic();
//	/*int derr;
//	printf("derr\n");*/
//	system("pause");
//	return 0;
//}
//void bar(){
//	printf("dog\n");
//}
//void ic(){
//	printf("boy\n");
//}

//#include<stdio.h>
//#include<stdlib.h>
//int Sushu(int x){
//	int num = 2;
//	while (num < x){
//		if (x%num == 0){
//			return 0;
//		}
//		//else{
//		//	return 1;//如果在循环里边返回值，输出的都只是除二的结果，也就是说输出全是奇数
//		//}
//			num = num + 1;
//		
//	}return 1;
//}
//
//int main(){
//	int x = 100;
//	while (x <= 200){
//		if (Sushu(x)==1){
//			printf("%d\n", x);
//		}x = x + 1;
//	}
//	system("pause");
//	return 0;
//}


//int Isleapyear(int year){
//	if (year % 100 == 0){
//		if (year % 400 == 0){
//			return 1;
//		}
//		else{
//			return 0;
//		}
//	}
//	if (year % 4 == 0){
//		return 1;
//	}
//	else{
//		return 0;
//	}
//}
//
//int main(){
//	int year = 1000;
//	while (year <= 2000){
//		if (Isleapyear(year) == 1){
//			printf("%d\n", year);
//		}
//		year = year + 1;
//	}
//	system("pause");
//	return 0;
//}
//#include<stdio.h>;
//#include<stdlib.h>;
//void jolly(void){
//	printf("hehe\n");
//	printf("haha\n");
//}
//void deny(void){
//	printf("hello\n");
//}
////void jolly(void);
////void deny(void);
//int main(){
//	jolly();
//	
//	deny();
////void butler(void);
////int main(){
////	printf("I will love you\n");
////	butler();
////	printf("hehe\n");
//	system("pause");
//	return 0;
//}
//void jolly(void){
//	printf("hehe\n");
//	printf("haha\n");
//}
//void deny(void){
//	printf("hello\n");
//}
//void butler(void){
//	printf("yes\n")#
//#include<stdio.h>
//int main(){
//	int a = 100;
//	printf("%#o\n", a);
//	printf("%#x\n", a);
//	getchar();
//}
//#include<stdio.h>
////#include<stdlib,h>
//char main(){
//	char A;
//	scanf("%c", &A);
//	printf("%d\n", A);
//	system("pause");
//	return 0;
//}

//#include<stdlib.h>
//#include<stdio.h>
////#include<string.h>//调用strlen()函数原型
////#define tizhong 62.4//宏定义，将体重这个字符串用62.4替换。相当于文本替换
////#include<inttypes.h>//支持可移植类型名
//int main(){
//	int weight = 0;
//	printf("请输入你的体重：\n");
//	scanf("%d", &weight);
//	weight = weight / tizhong;
//	printf("%d\n", weight);


	/*printf("输入你的身高；\n");
	int height = 0;
	scanf("%d", &height);
	height = 100 * height;
//	printf("%d\n", height);*/
//	/*int32_t me32 = 12345;
//	printf("%d\n", me32);*/
//	system("pause");
//	return 0;
//}
//#include<stdlib.h>
//#include<stdio.h>
//int main(){
//	int a = 1, b = 1;
//	int x, y;
//	x = a++;
//	y = ++b;
//	printf("%d %d\n", x, y);
//	printf("%d %d", a, b);
	/*int a = 0, b = 0;
	while (a < 5){
		a++;
		++b;
		printf("%d %d\n", a, b);
	}*/
	/*system("pause");
	return 0;
}*/
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int n = 0;
//	while (n++ < 1);
//	printf("%d\n", n);
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int Max(int x, int y){
//	int i = 1;
//	int max = 1;
//	while (i <= x&&i <= y){
//		if (x%i == 0 && y%i == 0){
//			max = i;
//		}
//		i += 1;
//	}
//	return max;
//}
//int main(){
//	int x=Max(100,120);
//	printf("%d\n", x);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int maxe(int x, int y){
//	int i = 1;
//	int max = 1;
//	for (i = 1; i <= x&&i <= y; i++){
//		if (x%i == 0 && y%i == 0){
//			max = i;
//		}
//	}return max;
//}
//int main(){
//	int sum = maxe(100, 50);
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int x, y;
//	int i = 1;
//	int max = 1;
//	printf("请输入两个数:\n");
//	scanf("%d %d", &x, &y);
//	for (i = 1; i <= x&&i <= y; i++){
//		if (x%i == 0 && y%i == 0){
//			max = i;
//		}
//	}printf("%d\n", max);
//	system("pause");
//		return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#define rows 6
//#define chars 10
//int main(){
//	int row;
//	int ch;
//	for (row = 0; row < rows; row++){
//		for (ch = 'a'; ch <= ('a') + chars; ch++){
//			printf("%c", ch);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	const int rows = 6;
//	const int chars = 6;
//	int row;
//	int ch;
//	for (row = 0; row <rows ; row++){
//		for (ch = ('a' + row); ch <= ('a' + chars); ch++){
//			printf("%c", ch);
//		}
//		printf("\n");
//	}
//
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#define sizes 13
//#define hangs 13
//int main(){
//	int arr[sizes];
//	int hang;
//	int index;
//	for ( hang= 1; hang < hangs; hang++){
//		for (index=)
//	}
//	system("pause");
//	return 0;
//}

//	
//
//	}getchar();
//int main(){
//	char str1[] = "welcome to bit!";
//	char str2[] = "###############";
//	int left = 0;
//	int right = strlen(str1) - 1;
//	while (left <= right){
//		str2[left] = str1[left];
//		str2[right] = str1[right];
//		printf("%s\n", str2);
//		left++;
//		right--;
		
	/*}*/
	/*system("pause");
	return 0;
}*/
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<windows.h> 
//int main(){	
//int i = 0;	
//int line = 0;	
//scanf("%d",&line);//程序运行后，输入一个数字i，就会得到（2*i-1）行图案	
//for(i = 0; i < line; i++)	{		
//	int j = 0;		
//	for(j = 0; j < line-i-1; j++)		{			
//		printf(" ");		
//	}		for(j = 0; j < 2*i+1; j++)		{			
//		printf("*");		}		
//	printf("\n");	}	
//for(i = 0; i < line; i++)	{		
//	int j = 0;		
//	for(j = 0; j < i+1; j++)		{			
//		printf(" ");		}		
//	for(j = 0; j < 2*(line-i-1)-1; j++)		{			
//		printf("*");		}		
//	printf("\n");	
//}	
//   system("pause");	
//return 0;
//}

//模拟实现登录场景，连续输入三次密码错误，则推出程序。
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main(){
//	int i = 0;
//	for (i = 0; i < 3; i++){
//		char password[1024] = { 0 };
//		printf("请输入密码:");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0){
//			printf("登陆成功\n");
//			break;
//		}
//	}
//	if (i == 3){
//		//由于循环三次退出的循环。
//		printf("三次尝试都失败，退出\n");
//	}
//	else{
//		//登陆成功，break退出的循环。
//		printf("登陆成功");
//	}
//	system("pause");
//	return 0;
//}
//实现N的阶乘
//#include<stdio.h>
//#include<stdlib.h>
//int Factor(int n){
//	int result = 1;
//	for (int i = 1; i <= n; i++){
//		result *= i;
//	}
//	return result;
//}
////求阶乘的和
//int Factorsum(int n){
//	int sum = 0;
//	for (int i = 1; i <= n; i++){
//		sum += Factor(i);
//	}
//	return sum;
//}
//int main(){
//	int result = Factorsum(5);
//	printf("result=%d\n", result);
//	system("pause");
//	return 0;
//}
//设计一个猜数字游戏，小游戏
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int memu(){
//	//打印菜单
//	printf("**************************************\n");
//	printf("   1  开始游戏   0  结束游戏\n");
//	printf("**************************************\n");
//	printf("请输入你的选择:\n");
//	int choice = 0;
//	scanf("%d", &choice);
//	return choice;
//}
////void表示此函数没有返回值
//void game(){
//	printf("游戏进行中。。。\n");
//	//让电脑随机产生一个数字1-100的整数，让用户去猜。
//	int result = rand() % 100 + 1;
//	while (1){
//		//提示用户输入一个数字
//		printf("请输入你猜测的数字:\n");
//		int num = 0;
//		scanf("%d", &num);
//		if (num < result){
//			printf("低了\n");
//		}
//		else if (num>result){
//			printf("高了\n");
//		}
//		else{
//			printf("猜对了\n");
//			break;
//		}
//		//根据用户输入输入的数字，与随机数字比较，看是高了还是低了
//		//如果猜错了，则要继续输入猜测数字
//	}
//}
//int main(){
//	//1.创建一个循环
//	srand(time(NULL));
//	while (1){
//        //2.让用户进行选择是否开始游戏
//		int choice = memu();
//		if (choice == 1){
//			//用户选择的是开始游戏，就进入游戏环节。
//			game();
//		}else if (choice == 0){
//			break;
//			//用户选择退出游戏，则结束循环。
//		}
//		else{
//			printf("您输入的数字有误，请重新输入:\n");
//		}	
//	}
//	system("pause");
//	return 0;
//}
//

//有五个人坐在一起，求第五个人的年龄。第二个人年龄等于第一个人加二，一次类推
//#include<stdio.h>
//#include<stdlib.h>
//
////用递归的方法求n的阶乘
//int Jiecheng(int n){
//	if (n == 1){
//		return 1;
//	}
//	return Jiecheng(n - 1)*n;
//}
//
//
////有五个人坐在一起，求第五个人的年龄。第二个人年龄等于第一个人加二，一次类推
//int age(int n){//求年龄的递归函数
//	int c;
//	if (n == 1){
//		c = 10;//C用来存放变量的值
//	}else//如果这块不加上else，那么就会导致后边的打印结果无法长时间的显示出来。
//	    c = age(n - 1) + 2;
//	    return c;
//}
//int main(){
//	printf("%d\n", age(5));
//	printf("%d\n", Jiecheng(5));
//	system("pause");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main(){
//	int i = 0;
//	for (i = 0; i < 3; ++i){
//		printf("请输入你的密码:\n");
//		char zi_fu[] = { 0 };
//		scanf("%s", zi_fu);
//		if (strcmp(zi_fu, "123456") == 0){
//			//strcmp是一个库函数，用来比较字符的相同
//			//比较字符的相同，依次需要依次比较每一个元素都相同，才能确定
//			printf("登录成功\n");
//			break;
//		}
//	}
//	if (i == 3){
//		//三次尝试都失败，退出
//		printf("密码输入错误！退出\n");
//	}
//	else{//break退出循环
//		printf("登陆成功");
//	}
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int Jiecheng(int n){
//	if (n == 1){
//		return 1;
//	}
//	return Jiecheng(n - 1)*n;
//}
//int main(){
//	printf("%d\n", Jiecheng(5));
//	system("pause");
//	return 0;
//}


//冒泡法实现对十个数字进行大小排序
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int a[10];
//	int j, i, t;
//	printf("请输入十个数字:\n");
//	for (i = 0; i < 10; ++i){
//		scanf("%d", &a[i]);
//	}
//	for (j = 0; j < 9; ++j){
//		for (i = 0; i < 9 - j; ++i){
//			if (a[i]>a[i + 1]){
//				t = a[i + 1];
//				a[i + 1] = a[i];
//				a[i] = t;
//			}
//			
//		}
//		printf("the sorted numbers:\n");
//		for (i = 0; i < 10; ++i){
//			printf("%d ", a[i]);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define ROW 3
#define COL 3
char g_arr[ROW][COL];//定义一个棋盘
//打印一个菜单，进行是否玩游戏。
//int menu(){
//	printf("*************************\n");
//	printf("     1  开始游戏         \n");
//	printf("     0  结束游戏         \n");
//	printf("*************************\n");
//	printf("请输入您的选择:\n");
//	int choic = 0;
//	scanf("%d", &choic);
//	return choic;
//}
//对棋盘进行初始化
void Init(){
	for (int row = 0; row < ROW; ++row){
		for (int col = 0; col < COL; ++col){
			g_arr[ROW][COL] = ' ';
		}
	}
}
//打印一个棋盘函数chessboard，运用二维数组来代替。
void Print(){
	for (int row = 0; row < ROW; ++row){
		printf("| %c | %c | %c |\n", g_arr[row][0], g_arr[row][1], g_arr[row][2]);
		if (row != ROW - 1){
			printf("|___|___|___|\n");
		}
	}
}
void playermove(){
	//使用x表示玩家，使用o表示电脑
	//玩家落子，顺便检查一下看看游戏是否结束。
	while (1){
		printf("请玩家落子(输入坐标(row,col):\n");
		int row = -1;
		int col = -1;
		scanf("%d,%d", &row, &col);
		//对玩家输入进行校验（永远不要相信用户的操作）
		if (row < 0 || row >= ROW || col < 0 || col >= COL){
			printf("您的输入有误，请重新输入:\n");
			continue;
		}
		if (g_arr[row][col] != ' '){
			printf("当前位置已经有子，请重新输入:\n");
			continue;
		}
		g_arr[row][col] = 'x ';//如果玩家输入合法，退出循环。
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
		if (g_arr[row][0] == g_arr[row][1] && g_arr[row][0] == g_arr[row][2] && g_arr[row][0 != ' ']){
			return g_arr[row][0];
		}
	}
	for (int col = 0; col < COL; ++col){
		if (g_arr[0][col] == g_arr[1][col] && g_arr[0][col] == g_arr[2][col] && g_arr[0][col] != ' '){
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
int main(){
	char winner = ' ';
	Init();//对棋盘初始化
	while (1){
		Print();//打印一下棋盘
		playermove();//玩家落子，有可能落到有子的地方
		winner = CheckWinner();//检测游戏是否结束。
		if (winner != ' '){
			break;
		}
		Computermove();
		winner = CheckWinner();
		if (winner != ' '){
			break;
		}
	}
	if (winner == 'x'){
		printf("玩家获胜!\n");
	}
	if (winner == 'o'){
		printf("电脑获胜!\n");
	}
	if (winner == 'q'){
		printf("和棋!\n");
	}
	system("pause");
	return 0;
}

























































