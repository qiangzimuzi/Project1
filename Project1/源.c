//#include <stdio.h>
//int main(void)
//{
//	printf("希望成功！");
//	return 0;
//}
//#include <stdio.h>
//int main(void) {
//    char name[40];
//    char surname[40];
//    printf("Please input your first name:");
//    scanf_s("%s", name);
//    /* 读取名字输入，存储至name[]数组。由于scanf()函数的特性，
//     * 字符串的输入不能有空白。*/
//    printf("Please input your last name:");
//    scanf_s("%s", surname);
//    /* 读取姓输入，存储至surname[]数组*/
//    printf("Hello, %s, %s.\n", name, surname);
//    return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//#define DENSITY 62.4
//int main()
//{
//	float weight, volume;
//	int size, letters;
//	char name[40];
//
//
//	printf("Hi! What's your first name?\n");
//	scanf("%s", name);
//	printf("%s, what's your weight in pounds?\n", name);
//	scanf("%f", &weight);
//	size = sizeof(name);
//	letters = strlen(name);
//	volume = weight / DENSITY;
//	printf("Well, %s, your volume is %2.2f cubic feet.\n",
//		name, volume);
//	printf("Also, your first name has %d letter,\n",
//		letters);
//	printf("and we have %d bytes to store it.\n", size);
//	return 0;
//}
//#include <stdio.h>
//#define	PRAISE "You are an extraordinary being."
//int main(void)
//{
//	char name[40];
//	printf("What's your name? ");
//	scanf_s("%s", name, 40);
//	printf("Hello, %s. %s\n", name, PRAISE);
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//#define	PRAISE "You are an extraordinary being."
//int main(void)
//{
//	char name[40];
//
//	printf("What's your name? ");
//	scanf_s("%s", name, 40);
//	printf("Hello, %s. %s\n", name, PRAISE);
//	printf("Your name of %zd letters occupies %zd memory cells.\n",
//		strlen(name), sizeof name);
//	printf("The phrase of praise has %zd letters",
//		strlen(PRAISE));
//	printf("and occupies %zd memory cells.\n", sizeof PRAISE);
//
//	return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define PI 3.14159
//
//int main(void)
//{
//	float area, circum, radius;
//	printf("What is the radius of your pizza?\n");
//	scanf("%f", &radius);
//	area = PI * radius * radius;
//	circum = 2.0 * PI * radius;
//	printf("Your basic pizza parameters are as follows:\n");
//	printf("circumference = %1.2f, area = %1.2f\n", circum, area);
//
//	return 0;
//}
//#define BEEP '\a'
//#define TEE 'T'
//#define ESC '\033'
//#define OOPS "Now you have done it!
//float"
//#include <stdio.h>
//#include <limits.h>
//#include <float.h>
//
//int main(void)
//{
//	printf("Some number limits for this system:\n");
//	printf("Biggest int: %d\n", INT_MAX);
//	printf("Smallest long long: %lld\n", LLONG_MIN);
//	printf("One byte = %d bits on this system.\n", CHAR_BIT);
//	printf("Largest double: %e\n", DBL_MAX);
//	printf("Smallest normal float: %e\n", FLT_MIN);
//	printf("float epsilon = %e\n", FLT_EPSILON);
//
//	return 0;
//}
//#include <stdio.h>
//#define PI 3.141593
//
//int main(void)
//{
//	int number = 7;
//	float pies = 12.75;
//	int cost = 7800;
//
//	printf("The %d contestants ate %f berry pies.\n", number, pies);
//	printf("The value of pi is %f.\n", PI);
//	printf("Farewell! thou art too dear for my possessing,\n");
//	printf("%c%d\n", 's', 2 * cost);
//
//	return 0;
//}
//#include <stdio.h>
//#define PAGES 959
//
//int main(void)
//{
//	printf("*%d*\n", PAGES);
//	printf("*%2d*\n", PAGES);
//	printf("*%10d*\n", PAGES);
//	printf("*%-10d*\n", PAGES);
//	
//	return 0;
//}
//#define _CRT_SECURE_NO_WNRNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	const double RENT = 3852.99;
//	RENT = 1;
//	printf("*%f*\n", RENT);
//	printf("*%e*\n", RENT);
//	printf("*%4.2f*\n", RENT);
//	printf("*%3.1f\n", RENT);
//	printf("*%10.3f*\n", RENT);
//	printf("*%10.3E*\n", RENT);
//	printf("*%+4.2f*\n", RENT);
//	printf("*%010.2f*\n", RENT);
//
//	return 0;
//
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void)
//{
//	int age;
//	float assets;
//	char pet[30];
//	char h;
//	/*printf("Enter your age, assets, and favorite pet.\n");
//	scanf("%d %f", &age, &assets);
//	scanf("%s", pet);
//	printf("%d $%.2f %s\n", age, assets, pet);*/
//	age = scanf(" %c", &h);
//	printf("%d", age);
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	unsigned width, precision;
//	int number = 256;
//	double weight = 242.5;
//	char a = '1';
//	printf("%c", a);
//	printf("Enter a field width:\n");
//	scanf("%d", &width);
//	printf("The number is :%*d:\n", width, number);
//	printf("Now enter a width and a precision:\n");
//	scanf("%d %d", &width, &precision);
//	printf("Weight = %*.*f\n", width, precision, weight);
//	printf("Done!\n");
//
//	return 0;
//}
//#include <stdio.h>
//#define Q "\"His Hamler was funny without being vulgar.\""
//
//int main(void)
//{
//	printf("He sold the painting for $%2.2f\n", 2.345e2);
//	printf("%c%c%c\n", 'H', 105, '\41');
//	printf("%s\nhas %d characters.\n", Q, strlen(Q));
//	printf("Is %2.2e the same %2.2f?\n", 1201.0, 1201.0);
//
//	return 0;
//}
//#define BOOK "War and Peace"
//#include <stdio.h>
//
//int main(void)
//{
//	float cost = 12.99;
//	float percent = 80.0;
//
//	printf("This copy of \"%s\" sells for $%1.2f.\n", BOOK, cost);
//	printf("This is %.0f%% of list.",percent);
//
//
//	return 0;
//}
#include <stdio.h>

//int main(void)
//{
//	int a;
//	float b;
//	char c[20];
//	char d[20];
//	scanf_s("%d %f %s", &a, &b, &c);
//	
//}
//#include <stdio.h>
//
//int main(void)
//{
//	char name[40];
//	char surname[40];
//
//	printf("Please input your first name:");
//		scanf_s("%s", name, 40);
//	printf("Please input your last name:");
//	scanf_s("%s", surname, 40);
//	printf("Hellow, %s, %s.", name, surname);
//
//	return 0;
//
//}
#include <stdio.h>

//int main(void)
//{
//	char name[40];
//
//	printf("Please input your name:");
//	scanf_s("%s", name,40);
//	printf("\"%20s\"\n", name);
//	printf("\"%-20s\"\n", name);
//	printf("\"%20s\"\n", name);
//
//}
//#include <stdio.h>
//
//int main(void)
//{
//	char name[40];
//	int width;
//
//	printf("Please input your name:");
//	scanf_s("%s", name, 40);
//	//width = printf("\"%s\"\n", name);
//	///*printf("%d", width);*/
//	width = strlen(name);
//	printf("\"%*s\"", (width + 3), name);
//
//	return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	float input;
//	printf("Enter，a float number:");
//	scanf_s("%f", &input);
//	printf("The input is %.1f or %.1e \n", input, input);
//	printf("The input is %f or %e \n", input, input);
//
//	return 0;
////}
//#include <stdio.h>
//
//int main(void)
//{
//	float high;
//	char name[40];
//	printf("Enter your name :");
//	scanf_s("%s", name, 40);
//	printf("Please input your heigh:");
//	scanf_s("%f", &high);
//	printf("%s, you are %.3f feet tall \n", name, high / 12);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	float speed, size, time;
//	printf("Please input the net speed(megabits per second):");
//	scanf_s("%f", &speed);
//	printf("Please input the file size(megabyte):");
//	scanf_s("%f", &size);
//	time = size * 8 / speed;
//	printf("At %.2f megabits per second, a file of %.2f megabytes download in %.2f seconds.", speed, size, time);
//
//	return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	char first_name[40], second_name[40];
//	int width1, width2;
//	printf("Please input your first name:");
//	scanf_s("%s", first_name, 40);
//	printf("Please input your second name:");
//	scanf_s("%s", second_name, 40);
//	width1 = strlen(first_name);
//	width2 = strlen(second_name);
//	printf("%*s %*s\n", width1, first_name, width2, second_name);
//	printf("%*d %*d\n", width1, width1, width2, width2);
//	printf("%s %s\n", first_name, second_name);
//	printf("%-*d %-*d", width1, width1, width2, width2);
//
//	return 0;
//}

//#include <stdio.h>
//#include <float.h>
//
//int main(void)
//{
//	float first = 1.0 / 3.0;
//	double second = 1.0 / 3.0;
//
//	printf("%.6f,%.6f,%.12f,%.12f,%.16f,%.16f\n", first, second, first, second, first, second);
//	printf("%d,%d", FLT_DIG, DBL_DIG);
//
//
//	return 0;
//}
//#include <stdio.h>
//#define GALLON_TO_LITRE 3.785
//#define MILE_TO_KM 1.609
//
//int main(void)
//{
//	float range, oil;
//	printf("Please input the range you traveled(in mile):");
//	scanf_s("%f", &range);
//	printf("Please input the oil you spend(in gallon):");
//	scanf_s("%f", &oil);
//	printf("In UAS, your oil wear is %.1f M/G\n", range / oil);
//	printf("In Europe, your oil wear is %.1fL/100KM", (oil * GALLON_TO_LITRE) / (range * MILE#_TO_KM));
//
//	return 0;
//}
//#include <stdio.h>
//#define SQUARES 64
//
//int main(void)
//{
//	const double CROP = 2E16;
//	double current, total;
//
//	int count = 1;
//	printf("square		grains		total		");
//	printf("fraction of \n");
//	printf("			added		grains		");
//	printf("world total\n");
//	total = current = 1.0;
//
//	printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total / CROP);
//	while (count < SQUARES)
//	{
//		count = count + 1;
//		current = 2.0 * current;
//		total = total + current;
//		printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total / CROP);
//	}
//	printf("That's all.\n");
//	
//	return 0;
//}
//#include <stdio.h>
//
//
//#define SEC_PER_MIN 60
//
//int main(void)
//{
//	int sec, min, left;
//
//
//	printf("Convent seconds to minutes and seconds!\n");
//	printf("Enter the number of seconds (<=0 to quit");
//	scanf_s("%d", &sec);
//	while (sec > 0)
//	{
//		min = sec / SEC_PER_MIN;
//		left = sec % SEC_PER_MIN;
//		printf("%d seconds is %d minutes, %d seconds.\n", sec, min, left);
//		printf("Enter next value (<0 to quit):\n");
//		scanf_s("%d", &sec);
//	}
//	printf("Done!\n");
//
//	return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	int ultra = 0, super = 0;
//
//	while (super < 5)
//	{
//		super++;
//		++ultra;
//		printf("super = %d, ultra = %d \n", super, ultra);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main(void)
//{
//	int a = 1, b = 1;
//	int a_post, pre_b;
//
//	a_post = a++;
//	pre_b = ++b;
//	printf("a a_post     b pre_b \n");
//	printf("%1d  %5d %5d %5d\n", a, a_post, b, pre_b);
//	printf("%5d\n", a);
//	printf("	d");
//
//
//	return 0;
//}
//#include <stdio.h>
//#define MAX 100
//
//int main(void)
//{
//	int count = MAX + 1;
//	
//	while (--count > 0)
//	{
//		printf("%d bottles of spring water on the wall,"
//			"%d bottles of spring water!\n", count, count);
//		printf("Take one down and pass it around,\n");
//		printf("%d bottles of spring water!\n\n", count - 1);
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	int count, sum;
//
//	count = 0;
//	sum = 0;
//	while (count++ < 20)
//	{
//		sum = sum + count;
//		printf("sum = %d\n", sum);
//
//	
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	char ch;
//	int i;
//	float fl;
//
//	fl = i = ch = 'C';
//	printf("ch = %c, i = %d, f1 = %2.2f\n", ch, i, fl);
//	ch = ch + 1;
//	i = fl + 2 * ch;
//	fl = 2.0 * ch + i;
//	printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
//	ch = 1107;
//	printf("Now ch = %c\n", ch);
//	ch = 80.89;
//	printf("Now ch = %c\n", ch);
//
//	return 0;
//}

//#include <stdio.h>
//void pound(n);
//
//int main(void)
//{
//	int times = 5;
//	char ch = '!';
//	float f = 6.0;
//
//	pound(times);
//	pound(ch);
//	pound((int)f);
//
//	return 0;
//}
//
//void pound(n)
//{
//	
//	while (n-- > 0)
//		printf("#");
//	printf("\n");
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//const int S_PER_M = 60;
//const int S_PER_H = 3600;
//const double M_PER_K = 0.62137;
//
//int main(void)
//{
//	double distk, distm;
//	double rate;
//	int min, sec;
//	int time;
//	double mtime;
//	int mmin, msec;
//
//	printf("This program converts your time for a metric race\n");
//	printf("to a time for running a mile and to your average\n");
//	printf("speed in miles per hour.\n");
//	printf("Please enter, in kilometers, the distance run.\n");
//	scanf_s("%lf", &distk);
//	printf("Next enter the time in minutes and second.\n");
//	printf("Begin by entering the minutes.\n");
//	/*rewind(stdin);*/
//	scanf_s("%d", &min);
//	printf("Now enter the seconds.\n");
//	scanf_s("%d", &sec);
//
//	time = S_PER_M * min + sec;
//	distm = M_PER_K * distk;
//	rate = distm / time * S_PER_H;
//	mtime = (double)time / distm;
//	mmin = (int)mtime / S_PER_M;
//	msec = (int)mtime % S_PER_M;
//
//	printf("You ran %1.2f km (%1.2f miles) in %d min, %d sec.\n",
//		distk, distm, min, sec);
//	printf("That pace corresponds to running a mile in %d min, ", 
//		mmin);
//	printf("%d sec.\nYour average speed was %1.2f mph.\n", msec,
//		rate);
//
//	return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	int a;
//	/*double b = 1.3;
//	int c;
//	c = a + (int)b;*//**/
//	return a = 0 > 1;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	long num;
//	long sum = 0L;
//	int status;
//
//	printf("Please enter an integer to be summed");
//	printf("(q to quit): ");
//	status = scanf_s("%ld", &num);
//	while (status == 1)
//	{
//		sum = sum + num;
//		printf("Please enter next integer (q to quit): ");
//		status = scanf_s("%ld", &num);
//
//	}
//	printf("Those integers sum to %ld.\n", sum);
//
//	return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	int n = 5;
//
//	while (n < 7)
//	{
//		printf("n = %d\n", n);
//		n++;
//		printf("Now n = %d\n", n);
//
//	}
//	printf("The loop has finished.\n");
//
//	return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	int n = 0;
//
//	while (n++ < 3)
//	printf("n is %d \n", n);
//	printf("That's all this program does.\n");
//	
//	return 0;
//}
//#include <math.h>
//#include <stdio.h>
//
//int main(void)
//{
//	const double ANSWER = 3.14159;
//	double response;
//
//	printf("What is the value of pi?\n");
//	scanf_s("%lf", &response);
//	while(fabs(response - ANSWER) > 0.0001)
//	{
//		printf("Try again!\n");
//		scanf_s("%lf", &response);
//
//	}
//	printf("Close enough!\n");
//
//	return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	int n = 3;
//
//	while (n)
//		printf("%2d is true\n", n--);
//	printf("%2d is false\n", n);
//
//	n = -3;
//	while (n)
//		printf("%2d is true\n", n++);
//	printf("%2d is false\n", n);
//
//	return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	int num;
//
//	printf("    n     n cubed\n"
//	);
//	for (num = 1; num <= 6; num++)
//		printf("%5d %5d\n", num, num * num * num);
//
//	return 0;
//}
//#include <stdio.h>
//#define ROWS 6
//#define CHARS 10
//
//int main(void)
//{
//	int row;
//	char ch;
//
//	for (row = 0; row < ROWS; row++)
//	{
//		int row;
//		char ch;
//		for (ch = 'A'; ch < ('A' + CHARS); ch++)
//		{
//			printf("%c", ch);
//			
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//#define SIZE 10
//#define PAR 72
//int main(void)
//{
//	int index, score[SIZE];
//	int sum = 0;
//	float average;
//
//	printf("Enter %d golf scores:\n", SIZE);
//	for (index = 0; index < SIZE; index++)
//		scanf_s("%d", &score[index]);
//	printf("The scores read in are as follows:\n");
//	for (index = 0; index < SIZE; index++)
//		printf("%5d", score[index]);
//	printf("\n");
//	for (index = 0; index < SIZE; index++)
//		sum += score[index];
//	average = (float)sum / SIZE;
//	printf("Sum of scores = %d, average = %.2f\n", sum, average);
//	printf("That's a handicap of %.0f.\n", average - PAR);
//	return 0;
//}
//#include <stdio.h>
//double power(double n, int p);
//int main(void)
//{
//	double x, xpow;
//	int exp;
//
//	printf("Enter a number and the positive integer power");
//	printf(" to which\nthe number will be raised. Enter q");
//	printf(" to quit.\n");
//	scanf_s("%lf%d", &x, &exp);
//	/*{
//		xpow = power(x, exp);
//		printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
//		printf("Enter next pair of numbers or q to quit.\n");
//	}
//	printf("Hope you enjoyed this power trip -- bye\n");*/
//
//	return 0;
//}
//
//double power(double n, int p)
//{
//	double pow = 1;
//	int i;
//
//	for (i = 1; i <= p; i++)
//		pow *= n;
//	return pow;
//}
//#include <stdio.h>
//int main(void)
//{
//	const int FREEZING = 0;
//	float temperature;
//	int cold_days = 0;
//	int all_days = 0;
//
//	printf("Enter the list of daily low temperatures.\n");
//	printf("Use Celsius, and enter q to quit.\n");
//	while (scanf_s("%f", &temperature) == 1)
//	{
//		all_days++;
//		if (temperature < FREEZING)
//			cold_days++;
//	}
//	if (all_days != 0)
//		printf("%d days total: %.1f%% were below freezing.\n", all_days, 100.0 * (float)cold_days / all_days);
//	if (all_days == 0)
//		printf("No data entered!\n");
//	return 0;
//}
//#include <stdio.h>
//#define SPACE ' '
//
//int main(void)
//{
//	char ch;
//
//	ch = getchar();
//	while (ch != '\n')
//	{
//		if (ch == SPACE)
//			putchar(ch);
//		else
//			putchar(ch + 1);
//		ch = getchar();
//
//	}
//	putchar(ch);
//
//	return 0;
//}
//#include <stdio.h>
//#include <ctype.h>
//
//int main(void)
//{
//	char ch;
//
//	while ((ch = getchar()) != '\n')
//	{
//		if (isalpha(ch))
//			putchar(ch + 1);
//		else
//			putchar(ch);
//	}
//	putchar(ch);
//
//	return 0;
//}
//#define RATE1 0.13230
//#define RATE2 0.15040
//#define RATE3 0.30025
//#define RATE4 0.34025
//#define BREAK1 360.0
//#define BREAK2 468.0
//#define BREAK3 720.0
//#define BASE1 (RATE1 * BREAK1)
//#define BASE2 (BASE1 + (RATE2 * (BREAK2 - BREAK1)))
//#define BASE3 (BASE2 + (RATE3 * (BREAK3 - BREAK2)))
//
//int main(void)
//{
//	double kwh;
//	double bill;
//
//	printf("Please enter the kwh used.\n");
//	scanf_s("%lf", &kwh);
//	if (kwh <= BREAK1)
//		bill = RATE1 * kwh;
//	else if (kwh <= BREAK2)
//		bill = BASE1 + (RATE2 * (kwh - BREAK1));
//	else if (kwh <= BREAK3)
//		bill = BASE2 + (RATE3 * (kwh - BREAK3));
//	printf("The charge for %.1f kwh is $1.2f.\n", kwh, bill);
//
//	return 0;
//}
//#include <stdio.h>
//#include <stdbool.h>
//
//int main(void)
//{
//	unsigned long num;
//	unsigned long div;
//	_Bool isPrime;
//
//	printf("Please enter an integer for analysis; ");
//	printf("Enter q to quit.\n");
//	while (scanf_s("%lu", &num) == 1)
//	{
//		for (div = 2, isPrime = 1; (div * div) <= num; div++)
//		{
//			if (num % div == 0)
//			{
//				if ((div * div) != num)
//					printf("%lu is divisible by %lu and %lu.\n", num, div, num / div);
//				else
//					printf("%lu is divisible by %lu.\n", num, div);
//				isPrime = 2;
//			}
//		}
//		if (isPrime)
//			printf("%lu is prime.\n", num);
//		printf("Please enter another integer for analysis; ");
//		printf("Enter q to quit.\n");
//
//	}
//	printf("Bye.\n");;
//
//	return 0;
//}
//#include <stdio.h>
//#define PERIOD '.'
//
//int main(void)
//{
//	char ch;
//	int charcount = 0;
//
//	while ((ch = getchar()) != PERIOD)
//	{
//		if (ch != '\"' && ch != '\'')
//			charcount++;
//	}
//	printf("There are %d non-quote characters.\n", charcount);
//
//	return 0;
//}
//#include <stdio.h>
//#include <ctype.h>
//#include <stdbool.h>
//#define STOP '|'
//
//int main(void)
//{
//	char c;
//	char prev;
//	long n_chars = 0L;
//	int n_lines = 0;
//	int n_words = 0;
//	int p_lines = 0;
//
//	bool inword = false;
//	printf("Enter text to be analyzed (| to terminate):\n");
//	prev = '\n';
//	while ((c = getchar()) != STOP)
//	{
//		n_chars++;
//		if (c == '\n')
//			n_lines++;
//		if (!isspace(c) && !inword)
//		{
//			inword = true;
//			n_words++;
//		}
//		if (isspace(c) && inword)
//			inword = false;
//		prev = c;
//	}
//	if (prev != '\n')
//		p_lines = 1;
//	printf("characters = %ld, words = %d, lines = %d, ",
//		n_chars, n_words, n_lines);
//	printf("partial lines = %d\n", p_lines);
//
//	return 0;
//}
//#include <stdio.h>
//#define COVERAGE 350
//
//int main(void)
//{
//	int sq_feet;
//	int cans;
//
//	printf("Enter number of square feet to be painted:\n");
//	while (scanf_s("%d", &sq_feet) == 1)
//	{
//		cans = sq_feet / COVERAGE;
//		cans += (sq_feet % COVERAGE == 0) ? 0 : 1;
//		printf("You need %d %s of paint.\n", cans,
//			cans == 1 ? "can" : "cans");
//		printf("Enter next value (q to quit):\n");
//
//			
//	}
//
//	return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	float length, width;
//
//	printf("Enter the length of the rectangle:\n");
//	while (scanf_s("%f", &length) == 1)
//	{
//		printf("Length = %0.2f:\n", length);
//		printf("Enter its width:\n");
//		if (scanf_s("%f", &width) != 1)
//			break;
//		printf("Width = %0.2f:\n", width);
//		printf("Area = %0.2f:\n", length * width);
//		printf("Enter the length of the rectangle:\n");
//	}
//	printf("Done.\n");
//
//	return 0;
//}

//#include <stdio.h>
//#include <ctype.h>
//
//int main(void)
//{
//	char ch;
//
//	printf("Give me a letter of the alphabet, and I will give ");
//	printf("an animal name\nbeginning with that letter.\n");
//	printf("Please type in a letter; type # to end my act.\n");
//	while ((ch = getchar()) != '#')
//	{
//		if ('\n' == ch)
//			continue;
//		if (islower(ch))
//			switch (ch)
//			{
//			case 'a':
//				printf("argali, a wild sheep of Asia\n");
//				break;
//			case 'b':
//				printf("babirusa, a wild pig of Malay\n");
//				break;
//			case 'c':
//				printf("coati, racoonlike mammal\n");
//				break;
//			case 'd':
//				printf("desman, aquatic, molelike critter\n");
//				break;
//			case 'e':
//				printf("echidna, the spiny anteater\n");
//				break;
//			case 'f':
//				printf("fisher, brownish marten\n");
//				break;
//			default:
//				printf("That's a stumper!\n");
//			}
//		else
//			printf("I recognize only lowercase letter.\n");
//		/*while (getchar() != '\n')
//			continue;*/
//		printf("Please type another letter or a #.\n");
//
//	}
//	printf("Bye!\n");
//
//	return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	char ch;
//	int a_ct, e_ct, i_ct, o_ct, u_ct;
//
//	a_ct = e_ct = i_ct = o_ct = u_ct = 0;
//
//	printf("Enter some text; enter # to quit.\n");
//	while ((ch = getchar()) != '#')
//	{
//		switch (ch)
//		{
//		case 'a':
//		case 'A': a_ct++;
//			break;
//		case 'e':
//		case 'E':
//			e_ct++;
//			break;
//		case 'i':
//		case 'I':
//			i_ct++;
//			break;
//		case 'o':
//		case 'O':
//			o_ct++;
//			break;
//		case 'u':
//		case 'U':
//			u_ct++;
//			break;
//		default:
//			break;
//		}
//	}
//	printf("number of vowels:	A	E	I	O	U\n");
//	printf("			%4d %4d %4d %4d %4d\n", a_ct, e_ct, i_ct, o_ct, u_ct);
//
//	return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	int chcount = 0;
//	char ch;
//
//	while ((ch = getchar()) != '\n')
//	{
//		if (ch == ' ')
//			continue;
//		putchar(ch);
//		chcount++;
//	}
//
//	return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	char ch;
//
//	while ((ch = getchar()) != '#')
//		printf("%d", ch);
//
//	return 0;
//}
//#include <stdio.h>
//#define FORMAT "%s! C is cool!\n"
//
//int main(int argc, char* argv[])
//{
//	int num = 10;
//
//	printf();
//	printf("%d\n", ++num);
//	printf("%d\n", num++);
//	printf("%d\n", num--);
//	printf("%d\n", num);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(int argc, char* argv[])
//{
//	char c1, c2;
//	int diff;
//	float num;
//
//	c1 = 'S';
//	c2 = 'O';
//	diff = c1 - c2;
//	num = diff;
//	printf("%c%c%c: %d %3.2f\n", c1, c2, c1, diff, num);
//
//	return 0;

//#include <stdio.h>
//#define SEVEN 7
//
//int main(int argc, char *argv[])
//{
//	char n = 'a'-1;
//	char a = 'a';
//
//	while (n++ < (a+6))
//	{
//		printf("%5c", n);
//		printf("\n");
//
//	}
//	return 0;
//}
//#include <stdio.h>
//#define END 'g'
//
//
//int main(int argc, char* argv[])
//{
//	char n = 'a' - 1;
//	while (n++ < END)
//	{
//		printf("%5c", n);
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	int x = 100;
//	while (x++ < 103)
//		printf("%4d\n", x);
//	printf("%4d\n", x);
//
//	return 0;
//}
//#include <stdio.h>
//
//int main(int argc, char* argv[])
//{
//	char ch = 's';
//	while (ch < 'w')
//	{
//		printf("%c", ch);
//	}
//	printf("%c\n", ch);
//
//	return 0;
//}
//#include <stdio.h>
//
//int main(int argc, char* argv[])
//{
//	int x, a, b, c, k, m, n, q, p, d = 1;
//	return 0;
//
//
//}
//#define MINUTES 60
//#include <stdio.h>
//
//int main(int argc, int* argv[])
//{
//	int hours, minutes, input;
//
//	printf("Please intput minutes,convert minutes to hours");
//	printf("(q to quit):\n");
//	while (scanf_s("%d", &input) > 0)
//	{
//		hours = input / MINUTES;
//		minutes = input % MINUTES;
//		printf("convert to %d hours and %d minutes.\n", hours, minutes);
//		printf("Please continue input the number of minutes(q to quit)\n");
//
//	}
//	printf("progame exit!\n");
//
//	return 0;
//}
//#include <stdio.h>
//const int MIN_PER_HOU = 60;
//
//int main(int argc, char* argv)
//{
//	int hours, minutes, input;
//
//	printf("CONVERT MINUTES TO HOURS!\n");
//	printf("PLEASE INPUT THE NUMBER OF MINUTES( <= 0 TO QUIT):");
//	scanf_s("%d", &input);
//	while (input > 0)
//	{
//		hours = input / MIN_PER_HOU;
//		minutes = input % MIN_PER_HOU;
//		printf("CONVERT TO %D HOUR AND %d MINUTES\n", hours, minutes);
//		printf("PLEASE CONTINUE INPUT THE NUMBER OF MINUTES( <= 0 TO QUIT ):");
//		scanf_s("%d", &input);
//
//	}
//	printf("PROGRAM EXIT!\n");
//	
//	return 0;
//	
//}
//#define ELEVEN 11
//#include <stdio.h>
//
//int main(int argc, char* argv[])
//{
//	int input, counter;
//	counter = 0;
//
//	printf("Print countinue 10 numbers!\n");
//	printf("Please input the start number :");
//	scanf_s("%d", &input);
//	while (counter++ < ELEVEN)
//	{
//		printf(" %d \n",input*input);
//		input++;
//	}
//	printf("Program exit!\n");
//
//	return 0;
//
//}

//#include <stdio.h>
//
//int main(int argc, char* argv[])
//{
//	int count = 0, sum = 0;
//	printf("Enter the number of days you work:");
//	scanf_s("%d", &count);
//	while (count > 0)
//	{
//		sum = sum + count * count;
//		count--;
//	}
//	printf("You earned $ %d total!\n", sum);
//	printf("PROGRAM EXIT!\n");
//
//	return 0;
//}
//#include <stdio.h>
//
//int main(int argc, char* argv[])
//{
//	int first, second;
//	printf("This program computes moduli.\n");
//	printf("Enter an integer to server as the second operand:");
//	scanf_s("%d", &second);
//	printf("Now enter the first operand:");
//	scanf_s("%d", &first);
//	while (first > 0)
//	{
//		printf("%d %% %d is %d", first, second, first % second);
//		printf("Enter next number for first operand ( <= 0 to quit ):");
//		scanf_s("%d", &first);
//
//	}
//	printf("Done!\n");
//
//	return 0;
//}
//#include <stdio.h>
//int Temperatures(double fahrenheit);
//int main(int argc, char* argv)
//{
//	double input;
//	printf("This program convert fahrenheit to celsius and kelvin.\n");
//	printf("Enter a fahrenheit to start :");
//	while (scanf_s("%lf", &input) > 0)
//	{
//		Temperatures(input);
//		printf("Enter next fahrenheit!(q to quit): ");
//	}
//	printf("Done!\n");
//	return 0;
//}
//int Temperatures(double fahrenheit)
//{
//	const double F_TO_C = 32.0;
//	const double C_TO_K = 273.16;
//	double celsius, kelvin;
//	celsius = 5.0 / 9.0 * (fahrenheit - F_TO_C);
//	kelvin = celsius + C_TO_K;
//	printf("%.2f. fahrenheit, equal %.2f celsius, and %.2f kelvin\n", fahrenheit, celsius, kelvin);
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int i, j, list[10];
//	for (i = 1; i < 10; i++)
//	{
//		list[i] = 2 * i + 3;
//		for (j = 1; j <= i; j++)
//		
//			printf("%d ", list[j]);
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int i, j;
//
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 8; j++)
//		{
//			printf("$");
//		}
//		printf("\n");
//		j = 0;
//	}
//}
//#include <stdio.h>
//
//int main(void)
//{
//	for (int i = 1; i < 5; i++)
//	{
//		for (int j = 1; j < 9; j++)
//			printf("$");
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//	char cha;
//	for (i = 0, cha = 'A'; i < 4; i++,cha += 2 * i)
//		printf("%c", cha);
//	return 0;
//}
//#include <stdio.h>
//long square(int num);
//
//int main(void)
//{
//	/*int k;
//	
//	for (k = 1, printf("%d: Hi!\n", k); printf("k = %d\n", k), k * k < 26; k += 2, printf("Now k is %d\n", k))
//		printf("k is %d in the loop\n", k);
//
//	return 0;*/
//	int num;
//	long num2;
//
//	while (scanf_s("%d", &num) > 0)
//	{
//		num2 = square(num);
//		printf("%ld\n", num2);
//	}
//	return 0;
//}
//long square(int num)
//	{
//		long num2;
//		num2 = (long)num * num;
//		return num2;
//	}

//#include <stdio.h>
//
//int main(void)
//{
//	char alphabet[26] = "abcd";
//	if (alphabet[25] != '\0')
//		printf("1");
//	printf("%c", alphabet[25]);
//	return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	char alphabet[26];
//	int i;
//	char c = 'a';
//
//	for (i = 0; i < 26; i++, c++)
//		alphabet[i] = c;
//	for (i = 0; i < 26; i++)
//	{
//		printf("%c \n", alphabet[i]);
//		
//	}
//	alphabet[25] = '\0';
//	printf("%s", alphabet);
//	return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	for (int i = 1; i < 6; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			printf("$");
//		}
//		printf("\n");
//	}
//}
//#include <stdio.h>
//
//int main(void)
//{
//	for (int i = 1; i < 7; i++)
//	{
//		char out = 'F';
//		for (int j = 0, out = 'F'; j < i; j++, out--)
//			printf("%c", out);
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	int i, j;
//	char c;
//	for (i = 1; i <= 6; i++)
//	{
//		for (j = 0, c = 'F'; j < i; j++, c--)
//			printf("%c", c);
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	int i, j;
//	char a = 'A';
//	for (i = 1; i < 7; i++)
//	{
//		for (j = 0; j < i; j++, a++)
//		{
//			printf("%c", a);
//		}
//		printf("\n");
//	}
//	return 0;
//}
#include <stdio.h>

int main(void)
{
	int i, j, num;
	char c;
	printf("Enter the core char you want to printf(A...Z):");
	scanf_s("%c", &c);
	char ch = 'A';
	num = c - 'A' + 1;
	for (i = 1; i <= num; i++)
	{
		for (j = 0; j < num - i; j++)
			printf(" ");
		for (ch = 'A'; j < num; j++)
			printf("%c", ch++);
		for (j = 1, ch -= 2; j < i; j++, ch--)
			printf("%c", ch);
		printf("\n");
	}
	return 0;
}
