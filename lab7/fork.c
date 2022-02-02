#include <stdio.h>
#include <unistd.h>

int main(void)
{
  int pid = fork();
  if (pid == 0) {
  printf("Message from the child process\n");
  } else if (pid > 0) {
  printf("Message from the parent process.\n"
  "Child PID:  %d\n", pid);
  }
  return 0;
  }
