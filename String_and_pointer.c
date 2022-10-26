#include <stdio.h>
int main()
{

  char str[7] = "String";
  char *s = str;

  for (int i = 0; str[i] != '\0'; i++)
  {
    printf("%c", *(s + i));
  }
}




