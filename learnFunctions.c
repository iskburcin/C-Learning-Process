#include <stdio.h> // Include the Standard Input/Output library

// function in c are "Pass by values" yani fonksiyona parametre olarak giren değerler, fonksiyonun içinde değişseler bile, fonksiyondan sonra eski değerleriyle devam ederler.
int change(int a); // fonksiyon prototype
int change(int a)
{
    a = 77;
    return a;
}

int factoriel(int a)
{
    if (a == 0 || a == 1)
    {
        return 1;
    }
    return factoriel(a - 1) * a;
    /*
    use recursion in subproblems like tree traversal iterative approaches
    -> the base case: curicial as ensures the function terminates correctly
    -> avoid run infinitly due to causing a stack overflow or memry error..*/
}

int findAverage(int a, int b, int c)
{
    return (a + b + c) / 3;
}

float celciusToFahrenheit(float cel)
{
    return cel * 9 / 5 + 32;
}

int fibonacci(int a)
{
    if (a == 0)
        return 0;
    else if (a == 1)
        return 1;
    return fibonacci(a - 1) + fibonacci(a - 2);
}

void sthUnuseful(int a)
{
    printf("number: %d\n++number: %d\nnumber++:%d\n", a, ++a, a++);
}

int sumOfNaturalNum(int a)
{
    if (a == 1)
    {
        return 1;
    }
    if (a == 0)
    {
        return 0;
    }

    return sumOfNaturalNum(a - 1) + a;
}

void createPyramid(int a)
{
    if (a == 0 || a == 1)
    {
        printf("*\n");
    }
    {
        /* code */
    }

    if (a >= 2)
    {
        for (int i = 0; i < a; i++)
        {
            // for prints *
            for (int j = 0; j < (2 * i + 1); j++)
            {
                printf("*");
            }
            // for new line
            printf("\n");
        }
    }
}
int main(void)
{
    int b = 22;
    change(b); // copy of b is passed to the change function
    int c = change(b);
    printf("b is %d\n", b);
    printf("c is %d\n", c);
    int d;
    do
    {
        printf("Enter a number (0-34):");
        scanf("%d", &d);
        printf("Entered %d's factoriel is: %d\n", d, factoriel(d));
    } while (d != 0 && factoriel(d) != 0);
    printf("Average find function control: %d\n", findAverage(2, 5, 8));
    printf("Fahrenhet find function control: %.2fF\n", celciusToFahrenheit(8.2));
    do
    {
        printf("Enter a fibonacci number:");
        scanf("%d", &d);
        for (int i = 0; i < d; i++)
        {
            printf("Fib %d = %d\n", i, fibonacci(i));
        }
    } while (d != 0 && b + fibonacci(d) != 0);
    do
    {
        printf("\nEnter a number:");
        scanf("%d", &d);
        sthUnuseful(d);
    } while (d != 0);
    do
    {
        printf("\nEnter a number to sum:");
        scanf("%d", &d);
        printf("Sum of num until %d = %d\n", d, sumOfNaturalNum(d));
    } while (d != 0 || d != 000);
    d = 8;
    printf("%d", d);
    do
    {
        printf("\nEnter a number to create pyramit:");
        scanf("%d", &d);
        createPyramid(d);
    } while (d != 0);

    return 0;
}