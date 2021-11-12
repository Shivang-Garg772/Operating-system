#include<stdio.h>
#include<unistd.h>
int main(){
pid_t p;
p=fork();
if(p==0){
sleep(6);
printf("\n I am child my PID=%d and my PPID=%d \n",getpid(),getppid());
}
else
{
printf("I am parent. My child PID =%d and my PID=%d \n",p,getpid());
}
printf("Terminating PID =%d\n",getpid());
return 0;
}
