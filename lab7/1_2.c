#include <stdio.h>


extern char **environ;

int main(int argc, char *argv[])
{
  int counter =0;
  char **p;
  for (p = environ; *p != NULL; p++) /* перебор всех элементов массива */
    counter++;
  printf("Number of env vars:%d\n", counter);
  printf("Number of supplied args:%d\n", argc);
  return 0;
}
