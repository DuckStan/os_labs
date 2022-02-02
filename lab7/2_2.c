#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void)
{
  int pid = fork();
  if (pid == 0) {
  //printf("Message from the child process\n");
  printf("%d %d \n", getppid(), getpid());
  wait(NULL);
  sleep(1);
  } else if (pid > 0) {
  //printf("Message from the parent process.\n"
  //"Child PID:  %d\n", pid);
  sleep(1);
  wait(NULL);
  }
  return 0;
  }
