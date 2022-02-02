#include <stdio.h>
#include <stdlib.h>

extern char **environ;

int main(int argc, char *argv[])
{
  int counter =0;
  char **p;
  //sscanf(argv[],"%s%d", NULL, max_vars);
  for (p = environ; counter < 10; p++){ /* перебор всех элементов массива */
    counter++;
    printf("%d. %si\n", counter, *p);
  }
  printf("Number of env vars:%d\n", counter);
  return 0;
}
