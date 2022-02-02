#include <stdio.h>
#include <stdlib.h>

extern char **environ;

int main(int argc, char *argv[])
{
  int counter =0;
  int max_vars;
  char **p;
  char p_name[10];
  sscanf(argv[0],"%s", p_name);
  sscanf(argv[1],"%d", &max_vars);
  printf("%s %d \n", p_name, max_vars);
  for (p = environ; counter < max_vars; p++){
    counter++;
    printf("%d. %s\n", counter, *p);
  }
  printf("Number of env vars:%d\n", counter);
  return 0;
}
