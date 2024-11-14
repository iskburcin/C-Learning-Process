#include <stdio.h>

void printArray(int a[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d: %d\n", i, a[i]);
  }
  printf("\n");
}
void reverseArray(int a[], int n) {
  int temp;
  for (int i = 0; i < n / 2; i++) {
    temp = a[i];
    a[i] = a[n - i - 1];
    a[n - i - 1] = temp;
  }
  printArray(a, n);
}

int countPositive(int a[], int n) {
  int noOfPositive = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] > 0)
      noOfPositive++;
  }
  return noOfPositive;
}
int main() {

  /** --- ARRAYS ---
   * a collection of the same data type
   *
   * Declaration:
   * dataType arrName[arrSize];
   *
   * Initialization:
   * dataType arrName[size] = { value1, ...};
   *
   * Accessing Element:
   * arrName[index];
   * */
  int marks[5];
  for (int i = 0; i < 5; i++) {
    printf("mark-%d: ", i);
    scanf("%d", &marks[i]);
  }
  printArray(marks, 5);
  reverseArray(marks, 5);

  /**
   * * Arrays In Memory:
   * int = 4 bytes
   * Memory will reserve size*4 bytes in itself for the   array
   *
   * pointers could perform:
   * -> addition of a number to a pointer
   * -> substraciton of a number from a pointer
   * -> substraciton of one pointer from another
   * -> comparison of two pointer variables
   */
  int a = 6;
  int *int_ptr = &a;
  printf("\nThe address of a is %u\n", int_ptr);           // 6422292
  int_ptr++;                                               // it will add +4 for
  integer printf("The value of int_ptr is %u\n", int_ptr); // 6422296

  char b = 'b';
  char *char_ptr = &b;
  printf("\nThe address of b is %u\n", char_ptr);         // 6422291
  char_ptr++;                                             // it will add 1 for
  char printf("The value of char_ptr is %u\n", char_ptr); // 6422292

  int *mark_ptr = &marks[0];
  for (int i = 0; i < 5; i++) {
    printf("The index of %d is %d in the memory of %u\n", i, marks[i],
           mark_ptr);
    mark_ptr++;
  }
  /**
   *  --- TWO DIMENSIONAL ARRAY ---
   *
   * Decleration:
   * dataType dataName[size][size];
   * Initialization:
   * dataType arrName[size][size] = { {value11, ...}
   *                                  {value21, ...}...};
   *
   */
  int rectCoords[3][2];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      printf("Enter the value of rectCoords[%d][%d]: ", i, j);
      scanf("%d", &rectCoords[i][j]);
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      printf("The value of rectCoords[%d][%d]: %d\n", i, j, rectCoords[i][j]);
    }
  }

  int randomNums[] = {1, 3, 5, -6, 4, -8, -33, 5, -7};
  printf("The no of positive integers is %d\n", countPositive(randomNums, 9));

  int arr[3][10];
  int n1, n2, n3;
  printf("Enter 3 num to print their multiplication table: ");
  scanf("%d %d %d", &n1, &n2, &n3);
  int mul[] = {n1, n2, n3};

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 10; j++) {
      arr[i][j] = mul[i] * (j + 1);
    }
    printf("\n");
  }
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 10; j++) {
      printf("%d x %d = %d \n", mul[i], j + 1, arr[i][j]);
    }
    printf(" \n");
  }

  int c[2][3][4];
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 4; k++) {
        printf("| %u ", &c[i][j][k]);
      }
      printf("\n");
    }
    printf("\n");
  }

  return 0;
}
