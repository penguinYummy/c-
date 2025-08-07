//#include <stdio.h>
//int main()
//{
//	int k;
//	printf("원하는 숫자를 입력 : ");
//	scanf("%d", &k); //vs: scanf_s
//	printf("입력한 숫자는 : %d\n", k);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int y, x;
//	printf("더하고 싶은 값 2개 입력 : ");
//	scanf("%d %d", &y, &x); //scanf_s
//	printf("두 값의 합은 %d입니다.\n", y + x);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char a, b, c;
//	printf("문자 두 개 입력 : ");
//	scanf("%c%c%c", &a, &b, &c);
//	printf("문자 출력 : %c%c%c\n", a, b, c);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int r;
//	double pi = 3.14;
//	printf("반지름의 길이를 입력 : ");
//	scanf("%d", &r); //vs: scanf_s
//	double Area = pi * r * r;
//	double round = 2 * pi * r;
//	printf("원의 넓이는 : %.2f\n 원의 둘레는 : %.2f\n", Area, round);
//}
//#include <stdio.h>
//int main()
//{
//	int w1;
//	int w2;
//	double H;
//	printf("밑변의 길이 입력 : ");
//	scanf("%d", &w1);
//	printf("윗변의 길이 입력 : ");
//	scanf("%d", &w2);
//	printf("높이 입력 : ");
//	scanf("%lf", &H);
//	double Area = H * (w1 + w2)/2;
//	printf("사다리꼴의 넓이는 %.1f\n", Area);
//}
//#include <stdio.h>
//int main()
//{
//	int a = 15;
//	int b = 3;
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("%d - %d = %d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a * b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	printf("%d %% %d = %d\n", a, b, a % b);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int number = 1;
//	number = number + 3; printf("%2d\n", number);
//	number -= 2; printf("%2d\n", number);
//	number--; printf("%2d\n", number);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d\n", a++);
//	printf("%d\n", a);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d\n", ++a);
//	printf("%d\n", a);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a;
//	int b;
//	printf("변수 2개 입력 : ");
//	scanf("%d%d", &a, &b);
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("%d - %d = %d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a * b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	printf("%d %% %d = %d\n", a, b, a % b);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int first = 1 % 4;
//	printf("%d = 1%%4\n", first);
//	int second = 5 % 3;
//	printf("%d = 5%%3\n", second);
//	int thrid = 4 % 2;
//	printf("%d = 4%%2\n", thrid);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int number1, number2;
//	scanf("%d %d", &number1, &number2);
//	printf("%d = number1%%4\n", number1 % 4);
//	printf("%d = number2%%3\n", number2 % 3);
//	return 0;
//}
//#include <stdio.h>;
//int main()
//{
//	int frist = 1 % 3;
//	printf("%d = 1%%3\n", frist);
//	int second = 2 % 3;
//	printf("%d = 2%%3\n", second);
//	int third  = 3 % 3;
//	printf("%d = 3%%3\n", third);
//	int fourth = 4 % 3;
//	printf("%d = 4%%3\n", fourth);
//	int fifth = 5 % 3;
//	printf("%d = 5%%3\n", fifth);
//	int sixth = 6 % 3;
//	printf("%d = 6%%3\n", sixth);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a;
//	printf("숫자 입력 : ");
//	scanf("%d", &a);
//	printf("%d = %d %% 50", a % 50, a);
//	return 0;
//}
//#include  <stdio.h>
//int main()
//{
//	while (0)
//	{
//		printf("조건이 참일 경우 반복 출력\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	while (1)
//	{
//		printf("조건이 참일 경우 반복출력\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int count = 0;
//	while (count < 3)
//	{
//		printf("현재 count : %d\n", count);
//		printf("count가 3보다 작은 동안 반복\n");
//		count++;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int count = 3;
//	while (count > 0)
//	{
//		printf("현재 count : %d\n", count);
//		printf("count가 0보다 큰 동안 반복\n");
//		count--;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int count = 6;
//	while (count > 0)
//	{
//		printf("c");
//		count--;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int count = -10;
//	while (count <= 0)
//	{
//		printf("%d\n", count);
//		count++;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int count = 0;
//	while (count <= 100)
//	{
//		while (count % 5 == 0)
//		{
//			printf("%d\n", count);
//			break;
//		}
//		count++;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char alphabet;
//	while (1)
//	{
//		printf("알파벳을 입력해주세요(다른 것 입력시 다시입력) :");
//		scanf("%c", &alphabet);
//		if (alphabet >= 'a' && alphabet <= 'z')
//		{
//			printf("소문자를 입력하셨습니다.\n");
//		}
//		else if (alphabet >= 'A' && alphabet <= 'Z')
//		{
//			printf("대문자를 입력하셨습니다.\n");
//		}
//		else
//		{
//			continue;
//		}
//		printf("입력한 값 : %c\n", alphabet);
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int number, total = 0;
//	while (1)
//	{
//		printf("양수를 입력해주세요(0입력시 종료) :");
//		scanf("%d", &number);
//		if(number ==0)
//		{
//			break;
//		}
//		else if (number < 0)
//		{
//			continue;
//		}
//		total = total + number;
//		printf("%d\n", total);
//		
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int number = 1, multi = 1;
//	while (1)
//	{
//		multi = multi * number;
//		if (multi >= 50000) {
//			break;
//		}
//		number++;
//		printf("지금까지 multi 값 : %d\n", multi);
//	}
//	printf("numer : %d", number);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char alphabet = 'a';
//	while (alphabet <= 'z')
//	{
//		if (alphabet == 'f')
//		{
//			alphabet++;
//		}
//		printf("%c\n", alphabet);
//		alphabet++;
//	}
//	return 0;
//}
#include <stdio.h>
int main()
{
	int input, player;
	printf("1에서 3사이의 수만 입력하세요\n");
	while (1)
	{
		printf("A :");
		scanf("%d", &input);
		player2 = player2 + player1;
		printf("B :");
		scanf("%d", &player2);
		player1 = player1 + player2;
		if (player1 || player2 >= 31)
		{
			break;
		}
	}
	if (player1 >= 31)
	{
		printf("B가 이겼습니다!");
	}
	if (player2 >= 31)
	{
		printf("A가 이겼습니다!");
	}
}