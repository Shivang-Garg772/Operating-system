//zombie process
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(){
pid_t p;
p=fork();
if(p==0){
//child
while(1)
sleep(50);
}
else{
//parent
exit(0);
}
}
