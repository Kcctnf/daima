/*#define _CRT_SECURE_NO_WARNINGS*/ 
//#include<stdlib.h>
//#include<stdio.h>
//int main(){
//	int a = 0;
//	int i = 0;
//	printf("����һ������:\n");
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
//	printf("����һ�����ִ�������:\n");
//	scanf("%d", &n);
//	while (n > 0){
//			a = n / 7;
//			b = n % 7;
//			printf("days are %d weeks,%d days\n", a, b);
//			/*n += 1;*/
//			printf("����0���߸����˳�:");
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
//		//	return 1;//�����ѭ����߷���ֵ������Ķ�ֻ�ǳ����Ľ����Ҳ����˵���ȫ������
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
////#include<string.h>//����strlen()����ԭ��
////#define tizhong 62.4//�궨�壬����������ַ�����62.4�滻���൱���ı��滻
////#include<inttypes.h>//֧�ֿ���ֲ������
//int main(){
//	int weight = 0;
//	printf("������������أ�\n");
//	scanf("%d", &weight);
//	weight = weight / tizhong;
//	printf("%d\n", weight);


	/*printf("���������ߣ�\n");
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
//	printf("������������:\n");
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
//scanf("%d",&line);//�������к�����һ������i���ͻ�õ���2*i-1����ͼ��	
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

//ģ��ʵ�ֵ�¼����������������������������Ƴ�����
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main(){
//	int i = 0;
//	for (i = 0; i < 3; i++){
//		char password[1024] = { 0 };
//		printf("����������:");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0){
//			printf("��½�ɹ�\n");
//			break;
//		}
//	}
//	if (i == 3){
//		//����ѭ�������˳���ѭ����
//		printf("���γ��Զ�ʧ�ܣ��˳�\n");
//	}
//	else{
//		//��½�ɹ���break�˳���ѭ����
//		printf("��½�ɹ�");
//	}
//	system("pause");
//	return 0;
//}
//ʵ��N�Ľ׳�
//#include<stdio.h>
//#include<stdlib.h>
//int Factor(int n){
//	int result = 1;
//	for (int i = 1; i <= n; i++){
//		result *= i;
//	}
//	return result;
//}
////��׳˵ĺ�
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
//���һ����������Ϸ��С��Ϸ
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int memu(){
//	//��ӡ�˵�
//	printf("**************************************\n");
//	printf("   1  ��ʼ��Ϸ   0  ������Ϸ\n");
//	printf("**************************************\n");
//	printf("���������ѡ��:\n");
//	int choice = 0;
//	scanf("%d", &choice);
//	return choice;
//}
////void��ʾ�˺���û�з���ֵ
//void game(){
//	printf("��Ϸ�����С�����\n");
//	//�õ����������һ������1-100�����������û�ȥ�¡�
//	int result = rand() % 100 + 1;
//	while (1){
//		//��ʾ�û�����һ������
//		printf("��������²������:\n");
//		int num = 0;
//		scanf("%d", &num);
//		if (num < result){
//			printf("����\n");
//		}
//		else if (num>result){
//			printf("����\n");
//		}
//		else{
//			printf("�¶���\n");
//			break;
//		}
//		//�����û�������������֣���������ֱȽϣ����Ǹ��˻��ǵ���
//		//����´��ˣ���Ҫ��������²�����
//	}
//}
//int main(){
//	//1.����һ��ѭ��
//	srand(time(NULL));
//	while (1){
//        //2.���û�����ѡ���Ƿ�ʼ��Ϸ
//		int choice = memu();
//		if (choice == 1){
//			//�û�ѡ����ǿ�ʼ��Ϸ���ͽ�����Ϸ���ڡ�
//			game();
//		}else if (choice == 0){
//			break;
//			//�û�ѡ���˳���Ϸ�������ѭ����
//		}
//		else{
//			printf("�������������������������:\n");
//		}	
//	}
//	system("pause");
//	return 0;
//}
//

//�����������һ���������˵����䡣�ڶ�����������ڵ�һ���˼Ӷ���һ������
//#include<stdio.h>
//#include<stdlib.h>
//
////�õݹ�ķ�����n�Ľ׳�
//int Jiecheng(int n){
//	if (n == 1){
//		return 1;
//	}
//	return Jiecheng(n - 1)*n;
//}
//
//
////�����������һ���������˵����䡣�ڶ�����������ڵ�һ���˼Ӷ���һ������
//int age(int n){//������ĵݹ麯��
//	int c;
//	if (n == 1){
//		c = 10;//C������ű�����ֵ
//	}else//�����鲻����else����ô�ͻᵼ�º�ߵĴ�ӡ����޷���ʱ�����ʾ������
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
//		printf("�������������:\n");
//		char zi_fu[] = { 0 };
//		scanf("%s", zi_fu);
//		if (strcmp(zi_fu, "123456") == 0){
//			//strcmp��һ���⺯���������Ƚ��ַ�����ͬ
//			//�Ƚ��ַ�����ͬ��������Ҫ���αȽ�ÿһ��Ԫ�ض���ͬ������ȷ��
//			printf("��¼�ɹ�\n");
//			break;
//		}
//	}
//	if (i == 3){
//		//���γ��Զ�ʧ�ܣ��˳�
//		printf("������������˳�\n");
//	}
//	else{//break�˳�ѭ��
//		printf("��½�ɹ�");
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


//ð�ݷ�ʵ�ֶ�ʮ�����ֽ��д�С����
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int a[10];
//	int j, i, t;
//	printf("������ʮ������:\n");
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
char g_arr[ROW][COL];//����һ������
//��ӡһ���˵��������Ƿ�����Ϸ��
//int menu(){
//	printf("*************************\n");
//	printf("     1  ��ʼ��Ϸ         \n");
//	printf("     0  ������Ϸ         \n");
//	printf("*************************\n");
//	printf("����������ѡ��:\n");
//	int choic = 0;
//	scanf("%d", &choic);
//	return choic;
//}
//�����̽��г�ʼ��
void Init(){
	for (int row = 0; row < ROW; ++row){
		for (int col = 0; col < COL; ++col){
			g_arr[ROW][COL] = ' ';
		}
	}
}
//��ӡһ�����̺���chessboard�����ö�ά���������档
void Print(){
	for (int row = 0; row < ROW; ++row){
		printf("| %c | %c | %c |\n", g_arr[row][0], g_arr[row][1], g_arr[row][2]);
		if (row != ROW - 1){
			printf("|___|___|___|\n");
		}
	}
}
void playermove(){
	//ʹ��x��ʾ��ң�ʹ��o��ʾ����
	//������ӣ�˳����һ�¿�����Ϸ�Ƿ������
	while (1){
		printf("���������(��������(row,col):\n");
		int row = -1;
		int col = -1;
		scanf("%d,%d", &row, &col);
		//������������У�飨��Զ��Ҫ�����û��Ĳ�����
		if (row < 0 || row >= ROW || col < 0 || col >= COL){
			printf("����������������������:\n");
			continue;
		}
		if (g_arr[row][col] != ' '){
			printf("��ǰλ���Ѿ����ӣ�����������:\n");
			continue;
		}
		g_arr[row][col] = 'x ';//����������Ϸ����˳�ѭ����
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
		if (g_arr[row][0] == g_arr[row][1] && g_arr[row][0] == g_arr[row][2] && g_arr[row][0 != ' ']){
			return g_arr[row][0];
		}
	}
	for (int col = 0; col < COL; ++col){
		if (g_arr[0][col] == g_arr[1][col] && g_arr[0][col] == g_arr[2][col] && g_arr[0][col] != ' '){
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
int main(){
	char winner = ' ';
	Init();//�����̳�ʼ��
	while (1){
		Print();//��ӡһ������
		playermove();//������ӣ��п����䵽���ӵĵط�
		winner = CheckWinner();//�����Ϸ�Ƿ������
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
		printf("��һ�ʤ!\n");
	}
	if (winner == 'o'){
		printf("���Ի�ʤ!\n");
	}
	if (winner == 'q'){
		printf("����!\n");
	}
	system("pause");
	return 0;
}

























































