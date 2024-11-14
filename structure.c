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

int main() {
  struct employee e1, e2;
  e1.code = 4533;
  strcpy(e1.name, "Harry");
  e1.salary = 54.44;

  printf("%d %s: %f \n", e1.code, e1.name, e1.salary);

  return 0;
}