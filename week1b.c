//Multi-time fork
#include<stdio.h>
#include<unistd.h>
int main(){
fork();
printf("Linux\n");
fork();
printf("Unix\n");
fork();
printf("RED HAT\n");
return 0;
}
