//#include <stdio.h>
//int main()
//{
//	int k;
//	printf("���ϴ� ���ڸ� �Է� : ");
//	scanf("%d", &k); //vs: scanf_s
//	printf("�Է��� ���ڴ� : %d\n", k);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int y, x;
//	printf("���ϰ� ���� �� 2�� �Է� : ");
//	scanf("%d %d", &y, &x); //scanf_s
//	printf("�� ���� ���� %d�Դϴ�.\n", y + x);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char a, b, c;
//	printf("���� �� �� �Է� : ");
//	scanf("%c%c%c", &a, &b, &c);
//	printf("���� ��� : %c%c%c\n", a, b, c);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int r;
//	double pi = 3.14;
//	printf("�������� ���̸� �Է� : ");
//	scanf("%d", &r); //vs: scanf_s
//	double Area = pi * r * r;
//	double round = 2 * pi * r;
//	printf("���� ���̴� : %.2f\n ���� �ѷ��� : %.2f\n", Area, round);
//}
//#include <stdio.h>
//int main()
//{
//	int w1;
//	int w2;
//	double H;
//	printf("�غ��� ���� �Է� : ");
//	scanf("%d", &w1);
//	printf("������ ���� �Է� : ");
//	scanf("%d", &w2);
//	printf("���� �Է� : ");
//	scanf("%lf", &H);
//	double Area = H * (w1 + w2)/2;
//	printf("��ٸ����� ���̴� %.1f\n", Area);
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
//	printf("���� 2�� �Է� : ");
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
//	printf("���� �Է� : ");
//	scanf("%d", &a);
//	printf("%d = %d %% 50", a % 50, a);
//	return 0;
//}