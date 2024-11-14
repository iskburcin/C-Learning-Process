#include <stdio.h>

/**
 * POINTERS are storing a address of variable
 * &("Adress of" operator) is used to obrain the address of a given variable
 *
 * &adress will give the corresponded address
 * *(&adress) will give the value at this adress
 *
 * memory addresses are typically hexadecimal (base-16) numbers.
 */
void sswap(int *a, int *b)
{
    printf("x was: %d and y was: %d\n", *a, *b);
    int tmep = *a;
    *a = *b;
    *b = tmep;
    printf("x is: %d and y is: %d\n", *a, *b);
    printf("Adress of variable in sswap: %u\n", a);
}

void printAdres(int *a)
{
    printf("Adress of variable in print: %u\n", a);
    printf("Value of corresponded adress: %d\n", *a);
}

int tenTimes(int *a)
{
    return (*a) * 10;
}

int *sumPtr(int a, int b)
{
    int sum = a + b;
    int *ptr = &sum;
    // printf("The address of sum is: %u", ptr);
    return ptr;
}
float *avgPtr(int a, int b)
{
    float avg = (a + b) / 2.0;
    float *ptr = &avg;
    // printf("\nThe avg is: %.2f\n", avg);
    // printf("The address of avg is: %u", ptr);
    return ptr;
}
int main()
{
    /*   int sth = 2;
        int *in_adress;   // declaration of int-pointer
        in_adress = &sth; // store address of sth in adress

        char sth2 = 'A';
        char *ch_adress; // declaration of char-pointer
        ch_adress = &sth2;

        float sth3 = 4.556;
        float *fl_adress; // declaration of float-pointer...
        fl_adress = &sth3;

        printf("\naddress of sth: %u", &sth); // u means unsigned int
        printf("\naddress of sth: %p", &sth); // p creates hexadecimal pointer place
        printf("\naddress of sth: %u", in_adress);
        printf("\naddress of sth: %p", in_adress);
        printf("\naddress of in_adress: %u", &in_adress);
        printf("\nvalue of sth: %d", sth);
        printf("\nvalue of sth: %d", *(&sth));
        printf("\nvalue of sth: %d\n", *in_adress);

        printf("\naddress of sth2: %u", &sth2);
        printf("\naddress of sth2: %p", &sth2);
        printf("\naddress of sth2: %u", ch_adress);
        printf("\naddress of sth2: %p", ch_adress);
        printf("\naddress of ch_adress: %u", &ch_adress);
        printf("\nvalue of sth2: %d", sth2);
        printf("\nvalue of sth2: %d", *(&sth2));
        printf("\nvalue of sth2: %d\n", *ch_adress);

        printf("\naddress of sth3: %u", &sth3);
        printf("\naddress of sth3: %p", &sth3);
        printf("\naddress of sth3: %u", fl_adress);
        printf("\naddress of sth3: %p", fl_adress);
        printf("\naddress of fl_adress: %u", &fl_adress);
        printf("\nvalue of sth3: %d", sth3);
        printf("\nvalue of sth3: %d", *(&sth3));
        printf("\nvalue of sth3: %d\n", *fl_adress);

        // POINTER TO A POINTER
        int **int_ptr_adress = &in_adress;

        printf("\naddress of int_adress: %u", &in_adress);
        printf("\naddress of int_adress: %p", &in_adress);
        printf("\naddress of int_adress: %u", int_ptr_adress);
        printf("\naddress of int_adress: %p", int_ptr_adress);
        printf("\naddress of fl_adress: %u", &int_ptr_adress);
        printf("\nvalue of int_adress: %d", *in_adress);
        printf("\nvalue of int_adress: %d", **(&in_adress));
        printf("\nvalue of int_adress: %d\n", **int_ptr_adress);

    */
    /** TYPES OF FUNCTION CALL */
    /**
     * CALL BY VALUE: Sending the values of arguments. Doesnt change
     * CALL BY REFERENCE: Sending the address of arguments. Could changed
     * Bc, the function can modify the value of a variable in calling function using * and & operators
     */
    int x = 3, y = 8;
    sswap(&x, &y);
    printAdres(&x);
    printf("\nx * 10 = %d\n", tenTimes(&x));
    printf("\n************************\n");
    int *in_sum_ptr = sumPtr(x, y);
    printf("\nThe sum: x + y = %d", *sumPtr(x, y));
    printf("\nThe address of sum is %u\n", in_sum_ptr);
    float *fl_avg_ptr = avgPtr(x, y);
    printf("\nThe avg: (x + y)/2 = %.2f", *avgPtr(x, y));
    printf("\nThe address of avg is %u\n", fl_avg_ptr);
    printf("\n************************\n");

    return 0;
}

// terminal kodları
// in both, dont use the file's extensions
// strings file_name.exe runs the assembler string code of the file (each 5||+5 char)
// xxd file_name | less

/** 
 * objdump -d -Mintel file_name
 * object dumps disassemble by using Mintel syntax on our program 
 * 
 * It takes 0s and 1s and gives theri hex and assembler version
 */
