#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void)
{
  
  int pid = fork();
  int new_pid = pid;
  int i =0;
  if(pid > 0) printf("%d\n", getpid());
  //if(pid==0) printf("%d", getpid());
  for(i =0; i < 100; i++){   
	if(pid >0) {wait(NULL); pid = fork();}
  }

  if(pid==0) { wait(NULL); printf("%d\n", getpid());}
  sleep(1); 
  return 0;
  }
