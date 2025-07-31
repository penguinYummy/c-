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