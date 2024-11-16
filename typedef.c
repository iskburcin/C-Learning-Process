#include <stdio.h>
#include <string.h>

// Can be write like this:
//   typedef struct employee {
//     int code;
//     float salary;
//     char name[10];
//   } Emp;

struct employee {
  int code;
  float salary;
  char name[10];
};
typedef struct c {
  int real;
  int imaginary;
} Complex;

typedef struct bank {
  int accNo;
  float balance;
  float expenses;
  float incomes;
  //   char currency[5];
  //   char name[10];
} BankAccount;

struct Date {
  int dd;
  int mm;
  int yyyy;
};

int compareDates(struct Date d1, struct Date d2) {
  if (d1.yyyy > d2.yyyy && d1.mm > d2.mm && d1.dd > d2.dd)
    return 0;
  if (d1.yyyy > d2.yyyy) {
    if (d1.mm > d2.mm) {
      return -1;
    } else
      return -1;
  } else
    return 1;
}

void display(Complex cx) {
  printf("The complex num is %di and the real num is %d\n", cx.imaginary,
         cx.real);
}
int main() {
  typedef int Enes;
  Enes burcin = 22;
  int burcin2 = 22; // same thing as Enes burcin
  printf("The value of Burçin is %d\n", burcin);

  // --- It can be applied to the struct ---
  typedef struct employee Emp;
  Emp e1;                  // == struct employee e1
  Emp *ptrOfe1;            // == struct employee *ptrOfe1
  ptrOfe1->salary = 56.22; // == (*ptrOfe1).salary = 56
  ptrOfe1->code = 555;     // == (*ptrOfe1).code = 56

  printf("The value of salary is %.2f and the value of code %d\n",
         ptrOfe1->salary, ptrOfe1->code);

  Complex c = {1, 2};
  printf("The value of Complex number is %d + %di\n", c.real, c.imaginary);
  Complex cmp[5];
  //   for (int i = 1; i < 5; i++) {
  //     printf("Enter two number for:\n");
  //     printf("Complex:");
  //     scanf("%d", &cmp[i].imaginary);
  //     printf("Real:");
  //     scanf("%d", &cmp[i].real);
  //     display(cmp[i]);
  //   }

  struct Date d1 = {23, 2, 2000};
  struct Date d2 = {18, 1, 2002};
  printf("Dates are: %d", compareDates(d1, d2));
  return 0;
}