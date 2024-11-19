#include <stdio.h>
#include <string.h>

int main() {
  /**
   * -- Since RAM is volatile, its content is lost once the program
   * terminates.
   * Use file to save data
   * C write the file and then read from it
   *
   * a "FILE" is a structure which needs to be created for opening the file.
   * It is required to communicate between the file and the program
   * A file pointer is a pointer to this structure of the file
   *
   * -- File Modes --
   * "r" -> open for reading
   * "rb" -> open for reading in binary
   * "w" -> open for writing [If the file exists, the contents will be
   *overwritten] "wb" -> open for writing in binary "a" -> open for append [If
   *the file doesnt exists, the contents will be created]
   *
   **/
  FILE *file_ptr;
  file_ptr = fopen("test.txt", "r");
  int num, num2, num3;
  // num = fscanf(file_ptr, "%d",&num);

  if (file_ptr == NULL)
    printf("The file doesnt have any data");
  else {
    // fscanf read an int from file in num variable
    // fscanf(file_ptr, "%d", &num);
    // printf("The file read this: %d\n", num);
    // fscanf(file_ptr, "%d", &num);
    // printf("The file read this: %d\n", num);
    // fscanf(file_ptr, "%d", &num);
    // printf("The file read this: %d\n", num);
    fscanf(file_ptr, "%d %d %d", &num, &num2, &num3);
    printf("The values: %d %d %d", num, num2, num3);
  }
  FILE *file_ptr2;
  file_ptr2 = fopen("test.txt", "a");
  fprintf(file_ptr2, "%d", num);

  /**
   * fgetc() is used to read a char from file
   * fgetc() is used to write char to file
   * -> fgetc returns EOF when all the chars from a file have been read.
   * */
  char ch;
  while (1) {
    ch = fgetc(file_ptr);
    printf("%c", ch);
    if (ch == EOF)
      break;
  }
  // tells the compiler that we are done working with this file and the
  // assosicated resources could be freed
  fclose(file_ptr);

  FILE *mul_ptr;
  mul_ptr = fopen("table.txt", "w");
  printf("\nEnter a num: ");
  scanf("%d", &num);
  for (int i = 0; i < 10; i++) {
    fprintf(mul_ptr, "%d x %d = %d", num, i + 1, num * (i + 1));
    fprintf(mul_ptr, "%c", '\n');
  }

  file_ptr = fopen("test.txt", "r");
  file_ptr2 = fopen("table.txt", "a");
  char cha;
  while (1) {
    cha = fgetc(file_ptr);
    if (cha == EOF)
      break;
    else {
      fprintf(file_ptr2, "%c", cha);
      fprintf(file_ptr2, "%c", cha);
      printf("%c", cha);
    }
  }
  float salary;
  char name[10];
  FILE *emp_ptr;
  emp_ptr = fopen("employee_register.txt", "w");
  for (int i = 1; i <= 3; i++) {
    printf("\nEnter the employee's name: \n");
    scanf("%s", &name);
    printf("\nEnter the %s's salary: \n", name);
    scanf("%f", &salary);
    fprintf(emp_ptr, "%d. %s, %.2f\n", i, name, salary);
    printf("%d. %s, %.2f", i, name, salary);
  }

  FILE *int_ptr;
  int_ptr = fopen("intval.txt", "r");
  int ber;
  fscanf(int_ptr, "%d", &ber);
  fclose(int_ptr);
  int_ptr = fopen("intval.txt", "w");
  fprintf(int_ptr, "%d", (ber * 2));
  fclose(int_ptr);

  return 0;
}