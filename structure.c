#include <stdio.h>
#include <string.h>
/**
 * --- STRUCT ---
 * a collection of different types of variable under a single name
 */
struct employee {
  int code;
  float salary;
  char name[10];
};

// created 2-dim vector
struct vector {
  int x;
  int y;
};

// this function get the args as vectors (struct) and return same struct as
// 2-dim
struct vector sumVector(struct vector v1, struct vector v2) {
  struct vector v3 = {v1.x + v1.y, v2.x + v2.y};
  return v3;
};
int main() {
  struct employee e1, e2;
  e1.code = 4533;
  strcpy(e1.name, "Harry");
  e1.salary = 54.44;

  printf("%d %s: %f \n", e1.code, e1.name, e1.salary);

  char inputStr[] = "c";
  do {

    struct employee ex;
    printf("\nEnter the employee's Name: ");
    scanf("%s", &ex.name);

    printf("Enter the employee's code: ");
    scanf("%d", &ex.code);
    printf("Enter the employee's salary: ");
    scanf("%f", &ex.salary);

    printf("%s has %d code and %.2f amount salary.\n", ex.name, ex.code,
           ex.salary);
    printf("Want to continue (q/Q for quit):");
    scanf("%s", &inputStr);
    // You can't (usefully) compare strings using != or ==, you need to use
    // strcmp:
  } while (strcmp(inputStr, "q") != 0);

  /**
   * Just like array of other variable types, array of structres can be
   * created
   */

  struct employee facebook[100];
  facebook[0].code = 300;
  facebook[1].code = 301;

  // Initialize:
  struct employee enes = {499, 50000, "Enes"};
  struct employee *enesPtr = &enes;
  printf("\n%s has %d code and %.2f amount salary.\n", enes.name, enes.code,
         enes.salary);

  // Arrow Operator is same as pointer structur that is usual veresion
  printf("\n-----------------\nName Memory Place: %d\nSalaryMemory Place: "
         "%d\nCode Memory Place: %d\n",
         (*enesPtr).name, enesPtr->code, (*enesPtr).salary);

  struct vector v1, v2, v3;
  v1.x = 5, v1.y = 12;
  v2.x = 5, v2.y = 12;
  v3 = sumVector(v1, v2);
  printf("For v1: X vector: %d | Y vector: %d\n", v1.x, v1.y);
  printf("For v3: X vector: %d | Y vector: %d\n", v3.x, v3.y);

  /**Just like any other data type, structure also can be passed to a
   * function as argument
   * */
  return 0;
}