#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
  int pid = fork();
  if (pid == 0) {
  printf("Message from the child process\n");
  printf("Parent PID: %d \n Child PID: %d \n", getppid(), getpid());
  } else if (pid > 0) {
  printf("Message from the parent process.\n"
  "Child PID:  %d\n", pid);
  }
  return 0;
  }
