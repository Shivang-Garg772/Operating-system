#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
int main(){
int status;
pid_t p;
p=fork();
if(p==0){
// child process
printf("I am child\n");
exit(0);
}
else{
//parent process
wait(&status);
printf("I am parent\n");
printf("The child pid=%d\n",p);
}
return 0;
}
