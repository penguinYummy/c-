//#include <stdio.h>
//int main()
//{
//	printf("안녕하세요\n");
//	return 0;
//
//#include <stido.h>
//int main()
//{
//	printf("안녕하세요");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("안녕하세요\n안녕하세요\n안녕허세요\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("사과 1개\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int apple = 1;
//	printf("사과 %d\n", apple);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("키보드 3개\n");
//	printf("마우스 2개\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int keyboard = 3;
//	int mouse = 2;
//	printf("키보드: %d개\n", keyboard);
//	printf("마우스: %d개\n", mouse);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int coin1 = 500;
//	int coin2 = 1000;
//	printf("%d + %d = %d\n",
//		coin1, coin2, coin1 + coin2);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char A;
//	A = 'A';
//	printf("A = %c, A = %d\n", A, A);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	double pi;
//	pi = 3.14;
//	float e = 2.718;
//	printf("pi = %.2lf, e = %.3lf.. \n", pi, e);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	double pi;
//	pi = 3.14;
//	int r = 5;
//	double Area = pi * r * r;
//	double round;
//	round = 2 * pi * r;
//	printf("원의 넓이는 %.1f\n", Area);
//	printf("원의 둘레는 %.1f\n", round);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int h = 7;
//	int Area = (a + b) * h / 2;
//	printf("사다리꼴의 넓이는 %d", Area);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int k;
//	printf("원하는 숫자를 입력 : ");
//	scanf("%d", &k); vs:
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int frist = 1 % 3;
//	printf("%d= 1%%3\n", frist);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a;
//	printf("숫자 입력 : ");
//	scanf("%d", &a);
//	int b = a % 50;
//	printf("%d = %d %% 50\n", b, a);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int data1 = 6 / 2;
//	printf("%d = 6/2\n", data1);
//	int data2 = 6 / 3;
//	printf("%d = 6/3\n", data2);
//	int data3 = 6 / 4;
//	printf("%d = 6/4\n", data3);
//	return 0;
//#include <stdio.h>
//int main()
//{
//	int number1, number2;
//	scanf("%d %d", &number1, &number2);
//	printf("%d=", number1/number2);
//	printf("%d/%d\n", number1, number2);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int coin;
//	printf("돈을 입력해주세요.(원)");
//	scanf("%d", &coin);
//	int coin10000 = coin / 10000;
//	coin = coin % 10000;
//	int coin5000 = coin / 5000;
//	coin = coin % 5000;
//	int coin1000 = coin / 1000;
//	printf("만원권 %d개,", coin10000);
//	printf("오천원권 %d개, ", coin5000);
//	printf("천원권 %d개, ", coin1000);
//	printf("나머지는 동전입니다,");
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int jelly;
//	int coin = 1000;
//	printf("젤리의 가격을 입력해주세요.");
//	scanf("%d", &jelly);
//	coin -= jelly;
//	int coin500 = coin / 500;
//	coin %= 500;
//	int coin100 = coin / 100;
//	coin = coin % 100;
//	int coin50 = coin / 50;
//	coin = coin % 50;
//	int coin10 = coin / 10;
//	coin = coin % 10;
//	printf("거스름 돈은 500원짜리 동전 %d개, ", coin500);
//	printf("100원짜리 동전 %d개, ", coin100);
//	printf("50원짜리 동전 %d개, ", coin50);
//	printf("10원짜리 동전 %d개, ", coin10);
//	printf("1원짜리 동전 %d개입니다", coin);
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int randint = rand() % 10;
//	int nextint = rand() % 10;
//	printf("첫숫자 : %d\n", randint);
//	printf("다음숫자 : %d\n", nextint);
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int randint = rand() % 10;
//	int nextint = rand() % 10+50;
//	printf("첫숫자 : %d\n", randint);// 0 9
//	printf("다음숫자 : %d", nextint);// 50 59
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//int main()
//{
//	srand((unsigned int)time(NULL));
//	printf("내 주머니에 있는 돈은");
//	int myMoney = (rand() % 10 + 1) * 1000;
//	printf("%d원이다.\n", myMoney);
//	int coin500 = rand() % 4 * 500;
//	int coin100 = rand() % 5000;
//	coin100 = coin100 / 100 * 100;
//	printf("그리고 과자의 가격은");
//	printf("%d원이다.", coin500 + coin100);
//	printf("\n나는 과자를 살 수 있을까?");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple == 15)//apple이 15이면 실행
//	{
//		printf("apple은 15개 있습니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple != 17)
//	{
//		printf("apple은 17개가 아닙니다");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple > 7)
//	{
//		printf("apple은 7개보다 많습니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple < 20)
//	{
//		printf("apple릉 20개보다 적습니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple)
//	{
//		printf("apple은 0개가 아닙니다.");
//
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (!apple)
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int apple = 0;
//	if (apple == 10)
//	{
//		printf("apple은 10개 있습니다.\n");
//	}
//	else if (apple == 0)
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("키가 150 이상입니다.\n");
//	}
//	else if (height > 160)
//	{
//		printf("키가 160이상입니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int y_age;
//	printf("나이를 입력히세요 :");
//	scanf("%d", &y_age);
//	printf("볼 수 있는 영화는 ");
//	if (y_age >= 0)
//	{
//		printf("전체 연령가");
//		if (y_age >= 12)
//		{
//			printf(", 12세 관람가");
//			if (y_age >= 15)
//			{
//				printf(", 15세 관람가");
//			}
//		}
//
//	}
//	printf("입니다.\n");
//	return 0;
//
//}
//#include <stdio.h>
//int main()
//{
//	char initial
//	printf("문자를 입력하세요 :");
//	scanf("%c", &initial);
//	if (initial >= 'a' && initial <= 'z')
//	{
//		printf("소문자입니다");
//	}
//	else if (initial <= 'Z' && initial >= 'A')
//	{
//		printf("대문자입니다");
//	}
//	else
//	{
//		printf("문자가 아닙니다");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number > answer)
//	{
//		printf("숫자1이 숫자 2보다 큽니다.\n");
//	}
//	else
//	{
//		if (number < answer)
//		{
//			printf("숫자2가 숫자1보다 큼니다.\n");
//		}
//		else
//		{
//			printf("숫자1과 숫자2가 같습니다.\n");
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number > answer)
//	{
//		printf("숫자1이 숫자2보다 큽니다.\n");
//	}
//	else if (number < answer)
//	{
//		printf("숫자2가 숫자1보다 큽니다.\n");
//	}
//	else
//	{
//		printf("숫자1과 숫자2가 같습니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int score = 75;
//	if (score > 90)
//	{
//		printf("성적은 A등급입니다.\n");
//	}
//	else if (score > 80)
//	{
//		printf("성적은 B등급입니다.\n");
//	}
//	else if (score > 70)
//	{
//		printf("성적은 C등급입니다.\n");
//	}
//	else if (score > 60)
//	{
//		printf("성적은 D등급입니다.\n");
//	}
//	else
//	{
//		printf("성적은F등급입니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int number = -11;
//	if (number > 0)
//	{
//		printf("number는 양수입니다.\n");
//	}
//	else if (number < 0)
//	{
//		printf("number는 음수입니다.\n");
//	}
//	else
//	{
//		printf("number는 0입니다.\n");
//	}
//	if (number % 2 == 0)
//	{
//		printf("number는 짝수입니다.\n");
//	}
//	else
//	{
//		printf("number는 홀수입니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char enter;
//	scanf("%c", &enter);
//	if (enter == 'w')
//	{
//		printf("위 방향키를 입력하셨습니다.");
//	}
//	else if (enter == 'a')
//	{
//		printf("좌 방향키를 입력하셨습니다.");
//	}
//	else if (enter == 'd')
//	{
//		printf("우 장형키를 입력하셨습니다.");
//	}
//	else if (enter == 's')
//	{
//		printf("아래 방향키를 입력하셨습니다.");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int gauge;
//	scanf("%d", &gauge);
//	if (gauge >= 45 && gauge <= 55)
//	{
//		printf("Perfect");
//	}
//	else if (gauge >= 35 && gauge <= 65)
//	{
//		printf("Excellent");
//	}
//	else
//	{
//		printf("good");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int input;
//	printf("input을 입력하세요 :");
//	scanf("%d", &input);
//	if (input % 3 == 0)
//	{
//		printf("input은 3의 배수입니다."); 
//		if (input % 6 == 0)
//		{
//			printf("input은 6의 배수입니다.");
//		}
//		if (input % 9 == 0)
//		{
//			printf("input은 9의 배수입니다.");
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char command = 'i';
//	switch (command)
//	{
//	case 'i':
//		printf("아이템창 오픈\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char command = 'i';
//	switch (command)
//	{
//	case 'i':
//		printf("아이템창 오픈\n");
//	case 'm':
//		printf("지도창 오픈\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char command = 'm';
//	switch (command)
//	{
//	case 'i':
//		printf("아이템창 오픈\n");
//	case 'm':
//		printf("지도창 오픈\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char command = 'm';
//	switch (command)
//	{
//	case 'i':
//		printf("아이템창 오픈\n");
//		break;
//	case 'm':
//		printf("지도창 오픈\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char command;
//	printf("커맨드를 입력하세요:");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case 'i':
//		printf("아이템창 오픈\n");
//		break;
//	case 'm':
//		printf("지도창 오픈\n");
//		break;
//	default:printf("지정된 기능이 없습니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char number = 1;
//	switch (number)
//	{
//	case 1: printf("one\n"); break;
//	case 2: printf("two\n"); break;
//	case 3: printf("three\n"); break;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int input1, input2;
//	char oper;
//	printf("두개의 수를 입력 :");
//	scanf("%d %d", &input1, &input2);
//	printf("기호를 입력 :");
//	scanf(" %c", &oper);
//	switch (oper)
//	{
//	case '+': printf("%d + %d = %d", input1, input2, input1 + input2); break;
//	case '-': printf("%d - %d = %d", input1, input2, input1 - input2); break;
//	case '*': printf("%d * %d = %d", input1, input2, input1 * input2); break;
//	case '/': printf("%d / %d = %d", input1, input2, input1 / input2); break;
//	case '%': printf("%d %% %d = %d", input1, input2, input1 % input2); break;
//	case '\n': printf("enter"); break;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int month;
//	printf("month 입력 :");
//	scanf("%d", &month);
//	switch (month)
//	{
//	case 1: 
//		printf("January");
//		break;
//	case 2:
//		printf("February");
//		break;
//	case 3:
//		printf("March");
//		break;
//	case 4:
//		printf("April");
//		break;
//	case 5:
//		printf("May");
//		break;
//	case 6:
//		printf("June");
//		break;
//	case 7:
//		printf("July");
//		break;
//	case 8:
//		printf("August");
//		break;
//	case 9:
//		printf("September");
//		break;
//	case 10:
//		printf("October");
//		break;
//	case 11:
//		printf("November");
//		break;
//	case 12:
//		printf("December");
//		break;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char command;
//	printf("<, a 왼쪽 이동 \n");
//	printf(">, d 오른쪽이동 \n");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case '<':
//	case 'a':
//		printf("왼쪽으로 이동합니다.\n");
//		break;
//	case '>': case 'd':
//		printf("오른쪽으로 이동합니다.\n");
//		break;
//	}
//	return 0;
//}
#include <stdio.h>
int main()
{
	int number;
	int option = 3;
	printf("메뉴를 선택하세요");
	printf("1.새 게임 3.이어하기 3.옵션\n");
	scanf("%d", &input);
	switch (input)
	{
	case 1:
		printf("새 게임 시작.\n");
		break;
	case 2:
		printf("세이브 데이터 로드.\n");
		break;
	case option:
		printf("옵션 세팅.\n");
		break;
	default:
		printf("지정된 기능이 없습니다.\n");
	}
	return 0;
}