//#include <stdio.h>
//int main()
//{
//	printf("�ȳ��ϼ���\n");
//	return 0;
//
//#include <stido.h>
//int main()
//{
//	printf("�ȳ��ϼ���");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("�ȳ��ϼ���\n�ȳ��ϼ���\n�ȳ��㼼��\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("��� 1��\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int apple = 1;
//	printf("��� %d\n", apple);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("Ű���� 3��\n");
//	printf("���콺 2��\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int keyboard = 3;
//	int mouse = 2;
//	printf("Ű����: %d��\n", keyboard);
//	printf("���콺: %d��\n", mouse);
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
//	printf("���� ���̴� %.1f\n", Area);
//	printf("���� �ѷ��� %.1f\n", round);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int h = 7;
//	int Area = (a + b) * h / 2;
//	printf("��ٸ����� ���̴� %d", Area);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int k;
//	printf("���ϴ� ���ڸ� �Է� : ");
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
//	printf("���� �Է� : ");
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
//	printf("���� �Է����ּ���.(��)");
//	scanf("%d", &coin);
//	int coin10000 = coin / 10000;
//	coin = coin % 10000;
//	int coin5000 = coin / 5000;
//	coin = coin % 5000;
//	int coin1000 = coin / 1000;
//	printf("������ %d��,", coin10000);
//	printf("��õ���� %d��, ", coin5000);
//	printf("õ���� %d��, ", coin1000);
//	printf("�������� �����Դϴ�,");
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int jelly;
//	int coin = 1000;
//	printf("������ ������ �Է����ּ���.");
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
//	printf("�Ž��� ���� 500��¥�� ���� %d��, ", coin500);
//	printf("100��¥�� ���� %d��, ", coin100);
//	printf("50��¥�� ���� %d��, ", coin50);
//	printf("10��¥�� ���� %d��, ", coin10);
//	printf("1��¥�� ���� %d���Դϴ�", coin);
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int randint = rand() % 10;
//	int nextint = rand() % 10;
//	printf("ù���� : %d\n", randint);
//	printf("�������� : %d\n", nextint);
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
//	printf("ù���� : %d\n", randint);// 0 9
//	printf("�������� : %d", nextint);// 50 59
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//int main()
//{
//	srand((unsigned int)time(NULL));
//	printf("�� �ָӴϿ� �ִ� ����");
//	int myMoney = (rand() % 10 + 1) * 1000;
//	printf("%d���̴�.\n", myMoney);
//	int coin500 = rand() % 4 * 500;
//	int coin100 = rand() % 5000;
//	coin100 = coin100 / 100 * 100;
//	printf("�׸��� ������ ������");
//	printf("%d���̴�.", coin500 + coin100);
//	printf("\n���� ���ڸ� �� �� ������?");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple == 15)//apple�� 15�̸� ����
//	{
//		printf("apple�� 15�� �ֽ��ϴ�.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple != 17)
//	{
//		printf("apple�� 17���� �ƴմϴ�");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple > 7)
//	{
//		printf("apple�� 7������ �����ϴ�.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple < 20)
//	{
//		printf("apple�� 20������ �����ϴ�.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple)
//	{
//		printf("apple�� 0���� �ƴմϴ�.");
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
//		printf("apple�� �ϳ��� �����ϴ�.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int apple = 0;
//	if (apple == 10)
//	{
//		printf("apple�� 10�� �ֽ��ϴ�.\n");
//	}
//	else if (apple == 0)
//	{
//		printf("apple�� �ϳ��� �����ϴ�.\n");
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
//		printf("Ű�� 150 �̻��Դϴ�.\n");
//	}
//	else if (height > 160)
//	{
//		printf("Ű�� 160�̻��Դϴ�.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int y_age;
//	printf("���̸� �Է������� :");
//	scanf("%d", &y_age);
//	printf("�� �� �ִ� ��ȭ�� ");
//	if (y_age >= 0)
//	{
//		printf("��ü ���ɰ�");
//		if (y_age >= 12)
//		{
//			printf(", 12�� ������");
//			if (y_age >= 15)
//			{
//				printf(", 15�� ������");
//			}
//		}
//
//	}
//	printf("�Դϴ�.\n");
//	return 0;
//
//}
//#include <stdio.h>
//int main()
//{
//	char initial
//	printf("���ڸ� �Է��ϼ��� :");
//	scanf("%c", &initial);
//	if (initial >= 'a' && initial <= 'z')
//	{
//		printf("�ҹ����Դϴ�");
//	}
//	else if (initial <= 'Z' && initial >= 'A')
//	{
//		printf("�빮���Դϴ�");
//	}
//	else
//	{
//		printf("���ڰ� �ƴմϴ�");
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
//		printf("����1�� ���� 2���� Ů�ϴ�.\n");
//	}
//	else
//	{
//		if (number < answer)
//		{
//			printf("����2�� ����1���� ŭ�ϴ�.\n");
//		}
//		else
//		{
//			printf("����1�� ����2�� �����ϴ�.\n");
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
//		printf("����1�� ����2���� Ů�ϴ�.\n");
//	}
//	else if (number < answer)
//	{
//		printf("����2�� ����1���� Ů�ϴ�.\n");
//	}
//	else
//	{
//		printf("����1�� ����2�� �����ϴ�.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int score = 75;
//	if (score > 90)
//	{
//		printf("������ A����Դϴ�.\n");
//	}
//	else if (score > 80)
//	{
//		printf("������ B����Դϴ�.\n");
//	}
//	else if (score > 70)
//	{
//		printf("������ C����Դϴ�.\n");
//	}
//	else if (score > 60)
//	{
//		printf("������ D����Դϴ�.\n");
//	}
//	else
//	{
//		printf("������F����Դϴ�.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int number = -11;
//	if (number > 0)
//	{
//		printf("number�� ����Դϴ�.\n");
//	}
//	else if (number < 0)
//	{
//		printf("number�� �����Դϴ�.\n");
//	}
//	else
//	{
//		printf("number�� 0�Դϴ�.\n");
//	}
//	if (number % 2 == 0)
//	{
//		printf("number�� ¦���Դϴ�.\n");
//	}
//	else
//	{
//		printf("number�� Ȧ���Դϴ�.\n");
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
//		printf("�� ����Ű�� �Է��ϼ̽��ϴ�.");
//	}
//	else if (enter == 'a')
//	{
//		printf("�� ����Ű�� �Է��ϼ̽��ϴ�.");
//	}
//	else if (enter == 'd')
//	{
//		printf("�� ����Ű�� �Է��ϼ̽��ϴ�.");
//	}
//	else if (enter == 's')
//	{
//		printf("�Ʒ� ����Ű�� �Է��ϼ̽��ϴ�.");
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
//	printf("input�� �Է��ϼ��� :");
//	scanf("%d", &input);
//	if (input % 3 == 0)
//	{
//		printf("input�� 3�� ����Դϴ�."); 
//		if (input % 6 == 0)
//		{
//			printf("input�� 6�� ����Դϴ�.");
//		}
//		if (input % 9 == 0)
//		{
//			printf("input�� 9�� ����Դϴ�.");
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
//		printf("������â ����\n");
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
//		printf("������â ����\n");
//	case 'm':
//		printf("����â ����\n");
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
//		printf("������â ����\n");
//	case 'm':
//		printf("����â ����\n");
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
//		printf("������â ����\n");
//		break;
//	case 'm':
//		printf("����â ����\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char command;
//	printf("Ŀ�ǵ带 �Է��ϼ���:");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case 'i':
//		printf("������â ����\n");
//		break;
//	case 'm':
//		printf("����â ����\n");
//		break;
//	default:printf("������ ����� �����ϴ�.\n");
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
//	printf("�ΰ��� ���� �Է� :");
//	scanf("%d %d", &input1, &input2);
//	printf("��ȣ�� �Է� :");
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
//	printf("month �Է� :");
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
//	printf("<, a ���� �̵� \n");
//	printf(">, d �������̵� \n");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case '<':
//	case 'a':
//		printf("�������� �̵��մϴ�.\n");
//		break;
//	case '>': case 'd':
//		printf("���������� �̵��մϴ�.\n");
//		break;
//	}
//	return 0;
//}
#include <stdio.h>
int main()
{
	int number;
	int option = 3;
	printf("�޴��� �����ϼ���");
	printf("1.�� ���� 3.�̾��ϱ� 3.�ɼ�\n");
	scanf("%d", &input);
	switch (input)
	{
	case 1:
		printf("�� ���� ����.\n");
		break;
	case 2:
		printf("���̺� ������ �ε�.\n");
		break;
	case option:
		printf("�ɼ� ����.\n");
		break;
	default:
		printf("������ ����� �����ϴ�.\n");
	}
	return 0;
}