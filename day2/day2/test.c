#define _CRT_SECURE_NO_WARNINGS 
//д����������������������в�����Ҫ�����֣�
//�ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�

//#include<stdio.h>
//#include<stdlib.h>
//
////��һ������ң�����һ������ֵ��Ȼ��Ҫ����һ���м�ֵ�����Ž�ҪѰ�ҵ��������м�ֵ�Ա�
////Ȼ�����������Ǳߣ����ż���ִ�У�ֱ��Ҫ�ҵ��������м�ֵ��ͬ������
//int main(){
//	/*int i = 0;*/
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int to_find = 5;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]);
//	while (left <= right){
//		int mid = (left + right) / 2;
//		if (to_find < arr[mid]){
//			right = mid - 1;
//		}
//		else if (to_find>arr[mid]){
//			left = mid + 1;
//		}
//		else{
//			printf("�ҵ��ˣ��±�Ϊ%d\n", mid);
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}
	/*for (; i < sizeof(arr) / sizeof(arr[0]); ++i){
		if (to_find == arr[i]){
			break;
		}
	}
	if (i == 5){
		printf("û�ҵ�\n");
	}
	if (i < 5){
		printf("�ҵ��ˣ��±�Ϊ%d\n", i);
	}
	system("pause");
	return 0;
}*/
//��дһ�����򣬿���һֱ���ռ����ַ��� 
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
//��������ֲ������
//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//#include<stdlib.h>
//#include<ctype.h>
//int main(){
//	int ch = 0;
//	printf("������һ���ַ�:\n");
//	while ((ch=getchar())!=EOF){//EOF��ʾ�ļ�ĩβ��������EOF���ʾ�ļ�����ִ��
//		if (ch >= 'a'&&ch <= 'z'){
//		printf("%c\n", toupper(ch));
//		}
//		else if (ch >= 'A'&&ch <= 'Z'){
//			printf("%c\n", toupper(ch));//toupper��ʾ��ӡ��֮��Ӧ�Ĵ�Сд��ĸ��������ctype.h�ļ���
//		}
//		else if (ch >= '0'&&ch <= '9'){
//			continue;
//		}
//	}
//	system("pause");
//	return 0;
//}



//д����������������������в�����Ҫ�����֣�
//�ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�

//#include<stdio.h>
//#include<stdlib.h>
////���ú�����ʵ�ֲ������֡�
//int Chazhao(int arr[],int left,int right,int to_find){
//	while (left <= right){
//		int mid = (left + right) / 2;
//		if (to_find < arr[mid]){
//			right = mid - 1;
//		}
//		else if (to_find>arr[mid]){
//			left = mid + 1;
//		}
//		else{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]);
//	int n = 5;//n=to_find
//	int result = 0;
//	result = Chazhao(arr, 0, right, n);
//	if (result == -1){
//		printf("û�ҵ�\n");
//	}
//	else{
//		printf("�ҵ��ˣ��±�Ϊ%d\n", result);
//	}
//	system("pause");
//	return 0;
//}
//ð�ݷ�ʵ�ֶ����ֵĴ�С����
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
//			printf("ÿһ�������ӡ����:\n");
//		}/*for (i = 0; i < 10; ++i){
//		printf("%d ", a[i]);*///���������ӡ���൱��Ҫѭ��һ�δ�ӡһ�Ρ�
//		}
//		for (i = 0; i < 10; ++i){
//			printf("%d ", a[i]);//���ֻ�ܴ�ӡ���յĽ����
//	}
//	system("pause");
//	return 0;
//}

//�õݹ�ͷǵݹ�ʵ�ֵ�n��쳲���������
//�ݹ� ����
//#include<stdio.h>
//#include<stdlib.h>
//int Dizeng(int n){
//	if (n == 1 || n == 2){
//		return 1;
//	}if (n > 2){
//		return Dizeng(n - 1) + Dizeng(n - 2);
//	}
//}
//int main(){
//	printf("%d\n", Dizeng(1));
//	system("pause");
//	return 0;
//}
//�ǵݹ鷨:
//#include<stdio.h>
//#include<stdlib.h>
//int Feibo(int n){
//	if (n == 1 || n == 2){
//		return 1;
//	}
//	int num1 = 1;
//	int num2 = 1;
//	int i = 1;
//	int sum = 0;
//	for (i = 3; i <= n; ++i){
//		sum = num1 + num2;
//		num1 = num2;//��num1��ʾ�ڶ��num2��ʾ������
//		num2 = sum;
//	}
//	return sum;
//}
//int main(){
//	printf("%d\n", Feibo(7));
//	system("pause");
//	return 0;
//}
//��дһ��������ʵ��n^k��ʹ�õݹ�ʵ�֡�
//#include<stdio.h>
//#include<stdlib.h>
//int Function(int n ,int k){
//	if (n > 0 && k == 0){
//		return 1;
//	}
//	if (n > 0 && k == 1){
//		return n;
//	}
//	if (n > 0 && k > 1){
//		return n*Function(n, k-1);//����ԭ������ʵ��
//	}
//}
//int main(){
//	int a, b;
//	printf("��������������0����:\n");
//	scanf("%d %d", &a, &b);
//	printf("%d\n", Function(a, b));
//	system("pause");
//	return 0;
//}

//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ� 
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//#include<stdio.h>
//#include<stdlib.h>
//int DigitSum(int n){
//	int i;
//	if (n >= 0 && n < 10){
//		return n;
//	}if (n>9){
//		i = n % 10;//�����һ�εĸ�λ��
//		n = n / 10;//����λ������10���һ����ԭ����һλ������
//	}
//	return i + DigitSum(n);//�ݹ�ʵ�ֶ�ÿһλ���ֽ�����͡�
//}
//int main(){
//	int n;
//	printf("������һ������0������:\n");
//	scanf("%d", &n);
//	printf("%d\n", DigitSum(n));
//	system("pause");
//	return 0;
//}
//ʹ�õݹ鷽ʽ��ӡ���ֵ�ÿһλ��
//#include<stdio.h>
//#include<stdlib.h>
//int Hanshu(int x){
//	
//	if (x > 9){
//		Hanshu(x / 10);
//	}
//	printf("%d ", x % 10);
//}
//int main(){
//	int a;
//	scanf("%d", &a);
//	Hanshu(a);
//	system("pause");
//	return 0;
//}
//�ݹ�ͷǵݹ�ʵ����n�Ľ׳ˡ�
//�ǵݹ鷨
//#include<stdio.h>
//#include<stdlib.h>
//int Factor(int n){
//	int result = 1;
//	for (int i = 1; i <= n; i++){
//		result *= i;
//	}
//	return result;
//}
//int main(){
//	Factor(5);
//	printf("%d\n", Factor(5));
//	system("pause");
//	return 0;
//}
//�ݹ鷨
//#include<stdio.h>
//#include<stdlib.h>
//int Factor(int n){
//	if (n == 1){
//		return 1;
//	}if (n > 1){
//		return n*Factor(n - 1);
//	}
//}
//int main(){
//	Factor(5);
//	printf("%d\n", Factor(5));
//	system("pause");
//	return 0;
//}
//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//#include<stdio.h>
//#include<stdlib.h>
//int Strlen(const char* str){
//	if (*str == '\0'){
//		return 0;
//	}
//	else{
//		return 1 + Strlen(str + 1);
//	}
//}
//int main(){
//	/*char *p = "andjash";
//	int len = Strlen(p);*/
//	printf("%d\n", Strlen("hehhe"));
//	system("pause");
//	return 0;
//}
//�ǵݹ鷨
//#include<stdio.h>
//#include<stdlib.h>
//int Strlen(const char* str){
//	int count = 0;//������ʵ��strlen����
//	while (*str != '\0'){
//		++count;
//		++str;
//	}
//	return count;
//}
//int main(){
//	printf("%d\n",Strlen("hehe"));
//	system("pause");
//	return 0;
//}
//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣� 
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//int reverse_string(char* string){
//	if (*string == '\0'){
//		printf("%c", *string);
//	}
//	else{
//		reverse_string(++string);//�����һ���ַ�
//		printf("%c\n", *(--string));
//	}
//}
//int main(){
//	reverse_string("abcdefg");
//	system("pause");
//	return 0;
//}

































