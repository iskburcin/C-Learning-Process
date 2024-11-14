#include <stdio.h> // Include the Standard Input/Output library
#include <math.h>

int main(void)
{
	// printf("Hello World!\n");
	// // getchar();

	// // uint16_t totalGreenApples = 15; //good
	// // uint16_t ttlGrnAp = 15; //bad

	// char charName = 'E';
	// int charAge = 24;
	// float floatSalary = 38.457;
	/*
	% is format specifier
	%d for int, %f for float, %c for char, %s for string
	*/
	// printf("Size of int %zu bytes\n", sizeof(char));  // 1 byte (8 bits)
	// printf("Size of int %zu bytes\n", sizeof(int));	  // 4 byte (32 bits)
	// printf("Size of int %zu bytes\n", sizeof(float)); // 4 byte (32 bits)

	// printf("There once was a man named %c\n", charName);
	// printf("he was %d years old\n", charAge);

	// charName = 'B';
	// printf("He really like the name %c\n", charName);
	// printf("but he didint like being %d.\n", charAge);

	// int value;
	// scanf("%d", &value); //& called address of operator and assign given value to it self

	// printf("\nEntered value is %d\n", value);

	// int lenght = 3;
	// int height = 3;

	// printf("Renctangles area: %d\n", (lenght * height));

	// printf("Enter the lenght: ");
	// scanf("%d",&lenght);
	// printf("Enter the height: ");
	// scanf("%d",&height);
	// printf("Renctangles area: %d\n", (lenght * height));

	// int r;
	// int height;
	// printf("Enter the height: ");
	// scanf("%d", &height);

	// printf("Enter the radius: ");
	// scanf("%d", &r);

	// printf("Circle area: %d\n", (3,14*r*r));
	// printf("Sylinder area: %d\n", (3,14*r*r * height));

	// float c=1, f;

	// printf("Enter the celcius: ");
	// scanf("%f", &c);

	// f = ((9.0 / 5.0) * c) + 32;
	// printf("Tempperature in fahrenheit: %f\n", f);
	// // if variable is a pointer, then the name and convention should have a prefix

	// int a, b, c, d;
	// a = b = c = d = 30; // all equal to 30

	/*   +*-/ are operators
	% is remainder and cannot used on float, sign is same as of numerator(-5%2=-1)
	*/
	// float a, b, c;
	// printf("Enter the base of exponantion: ");
	// scanf("%f", &a);

	// printf("Enter the base of exponantion: ");
	// scanf("%f", &b);

	// printf("Exponantion of %.2f to %.2f is %.2f\n", a, b, (pow(a, b)));

	// int d;
	// d = (int)a; //casting from float to int

	// printf("Enter a number to check is divisible by 97: ");
	// scanf("%d", &d);

	// printf("The value of %d is %d\n", d, (d%97));
	// int a, b;
	// printf("Enter a value (0 or 1): ");
	// scanf("%d", &a);

	// printf("Enter b value (0 or 1): ");
	// scanf("%d", &b);

	// printf("The value of a AND b is %d.\n", (a && b));
	// printf("The value of a OR b is %d.\n", (a || b));
	// printf("The value of NOT a is %d and NOT b is %d.\n", !a, !b);

	// // ternary if
	// a > b ? printf("a is greater") : (a == b ? printf("both equal") : printf("b is greater"));
	// int first,second,third;
	// printf("Enter first mark: ");
	// scanf("%d", &first);
	// printf("Enter second mark: ");
	// scanf("%d", &second);
	// printf("Enter third mark: ");
	// scanf("%d", &third);
	// int total = first+second+third;
	// // printf("The value of total is %d", (total));
	// printf("\n");
	// if((total/3)<40){
	// 	printf("Failed due less percent.");
	// }else if(first<33 || second<33 || third<33){
	// 	printf("Failed due to less marks in individual subject(s).");
	// }else{
	// 	printf("Passed");
	// }

	// char ch = 'a';
	// printf("Enter a character to determine wheter it is capital or not: ");
	// scanf("%c", &ch);
	// printf("The char is %c\n", ch);
	// printf("The value of char is %d\n", ch);
	// if (ch >= 97 && ch <= 122)
	// {
	// 	printf("The char is lowercase\n");
	// }
	// else
	// {
	// 	printf("The char is uppercase\n");
	// }
	// int first,second,third,fourth;
	// printf("Enter first mark: ");
	// scanf("%d", &first);
	// printf("Enter second mark: ");
	// scanf("%d", &second);
	// printf("Enter third mark: ");
	// scanf("%d", &third);
	// printf("Enter fourth mark: ");
	// scanf("%d", &fourth);

	// if(first>second && first>third && first>fourth){
	// 	printf("first number (%d) is the greatest.",first);
	// }else if(second>first && second>third && second>fourth){
	// 	printf("second number (%d) is the greatest.",second);
	// }else if(third>second && third>first && third>fourth){
	// 	printf("third number (%d) is the greatest.",third);
	// }else{
	// 	printf("fourth number (%d) is the greatest.",fourth);
	// }
	int i = 0, num;
	// printf("Enter a num: ");
	// scanf("%d", &num);
	// while (i <= 10)
	// {
	// 	printf("%d x %d = %d\n", i, num, (i * num));
	// 	i++;
	// }
	// i = 10;
	// while (i >= 0)
	// {
	// 	printf("%d x %d = %d\n", i, num, (i * num));
	// 	i--;
	// }
	// printf("\n----Mission -3.a----\n");
	// do
	// {
	// 	printf("this loop works for twice due to being i is %d\n", i);
	// 	i += 2;
	// } while (i < 10);
	// i=-1;
	// printf("\n----Mission -3.b----\n");
	// do
	// {
	// 	printf("this loop works for twice due to being i is %d\n", i);
	// 	i += 2;
	// } while (i < 3);

	// i=-1;
	// printf("\n----Mission -3.c----\n");
	// do
	// {
	// 	printf("this loop works for once due to being i is %d\n", i);
	// } while (i > 1);

	int n;
	int isPrime = 1;
	printf("Enter a number to check prime or not: ");
	scanf("%d", &n);

	if (n == 0 || n == 1)
	{
		isPrime =1;
	}
	else
	{

		for (int i = 2; i < n; i++)
		{
			if (n % i == 0 || n % 2 == 0)
			{
				isPrime = 0;
				break;
			}else if(n%i !=0 && n%2 !=0){
				isPrime=1;
				break;
			}
		}
	}
	if (isPrime)
	{
		printf("%d is a prime", n);
	}
	else
	{
		printf("%d is not a prime", n);
	}

	printf("\n");
	return 0; //means the program finished successfully
}

/**
 * to create exe file:
 * gcc arrays.c -o ./arrays.exe
 * 
 * to build and run the c file:
 * gcc arrays.c -o arrays  && ./arrays.exe
 */