#include <stdio.h>
#include <string.h>
/**
 * --- STRİNG ---
 * a 1D charater array terminated by a null char (\0)
 *
 * Declaration:
 * char stringName[size];
 *
 *
 * taking string input from the user => %s
 *
 * WARNING!
 * 1) scanf() cannot take multi-word strings with spaces
 * 2) once char st[] = "kajds" is assigned, it cannot be reinitialized to sth
 * else
 * 3) A string defined using pointers can be reinitialized!!!
 *
 * When string stored in the memory, last index is emty ("\0")
 * Useful Functions:
 * gets(); reads the entered multi-word string until a newline char is
 * encountered
 * fgets(str,n,stream); reads the entered multi-word string until a
 * newline char is encountered or 'n-1' char are read
 * puts(); show string output
 * fgets(); safer than gets() puts(); shows the entered string value
 *
 * --- DECLARE A STRING USING POINTERS ---
 * char *ptr = "harry";
 *  */
int mystrlen(char str[]) {
  int i = 0;
  char c = str[i];
  while (c != '\0') {
    c = str[i];
    i++;
  }
  return i - 1;
}

char *mySlice(char str[], int from, int to) {
  // it worked when function is int???
  char *from_ptr = &str[from];
  char *to_ptr = &str[to];

  str = from_ptr;
  str[to] = '\0';
  return str;
}

void myStrCopy(char to[], char from[]) {
  for (int i = 0; i < mystrlen(from); i++) {
    to[i] = from[i];
  }
  to[mystrlen(from)] = '\0';
}

void addOneEachChar(char str[]) { // encrypte
  for (int i = 0; i < mystrlen(str); i++) {
    str[i] += 1;
  }
  printf("%s \n", str);
}
void remOneEachChar(char str[]) { // decryepte
  for (int i = 0; i < mystrlen(str); i++) {
    str[i] -= 1;
  }
  printf("%s \n", str);
}

int countCharInString(char str[], char c) {
  int count = 0;
  for (int i = 0; i < mystrlen(str); i++) {
    if (str[i] == c)
      count++;
  }
  return count;
}
void isInString(char str[], char c) {
  int contain = 0;
  for (int i = 0; i < mystrlen(str); i++) {
    if (str[i] == c) {
      contain = 1;
      break;
    }
  }
  if (contain)
    printf("It contains %c\n", c);
  else
    printf("It doesnt contain %c\n", c);
}

int main() {
  char st[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
  char stv2[] = "abcdefg"; // same as doing like above
  printf("first char is %c\n", st[0]);
  printf("first char is %c\n", stv2[0]);
  //   printf("Enter the string: \n");
  //   scanf("%s", &st); // use english chars
  //   printf("Entered string: %s\n", st);

  //   printf("Enter the string: \n");
  //   char sth[30];
  //   gets(sth); // the entered string is stored in variable
  //   // but dont use scanf before gets()
  //   printf("Entered string: %s\n", sth);
  //   puts(sth);
  //   printf("Enter the string:\n");
  //   fgets(sth, 30, stdin); // the entered string is stored SAFETLY
  //   puts(sth);

  // strlen(str); gets the length of string
  char enes[] = "enes";
  printf("Length of String: %d\n", strlen(enes));
  printf("MY Length of String: %d\n", mystrlen(enes));

  // strcat(this,that); concatenate two strings
  printf("Concatenated Strings: %s\n", strcat(enes, " <3 Burcin"));
  printf("My Sliced Strings: %s\n", mySlice(enes, 3, 7));

  // strcpy(to,from); copies the seconds values into first
  char copyOfEnes[20];
  printf("Copied String: %s\n", strcpy(copyOfEnes, enes));
  myStrCopy(copyOfEnes, enes);
  printf("My Copied String: %s\n");

  // strcmp(this,that); compare two strings. 0 = equal, -value = mismatch (ascii
  // value is less than the second one), + value = vice verse
  printf("Compared Strings: %s %s %d\n", enes, copyOfEnes,
         strcmp(copyOfEnes, enes));

  // strupr(); convert chars into uppercase
  printf("Uppercase Strings: %s\n", strupr(enes));

  // strlwr(); convert chars into lowercase
  printf("Lowercase Strings: %s\n", strlwr(enes));

  // strrev(); convert chars into lowercase
  printf("Reversed Strings: %s\n", strrev(enes));
  printf("Added +1 to each char: ");
  addOneEachChar(enes);
  printf("Removed -1 from each char: ");
  char revenes[] = "vc!4=!tfof";
  remOneEachChar(revenes);

  printf("e harfi |%s| stringinin içinde %d kere geçti.\n", revenes,
         countCharInString(revenes, 'e'));

  isInString(revenes, 'e');
  isInString(revenes, 'k');
  char love[6];
  //   scanf("%s",&love);
  printf("Enter the chars that you want to be stored: \n");
  for (int i = 0; i < 5; i++) {
    scanf("%c", &love[i]);
    fflush(stdin); // not to count \n as a char
  }
  love[5] = '\0';
  printf("%s", love);

  return 0;
}