#include<fcntl.h>
#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<sys/stat.h>
#define SIZE 100
int main(){
int fd;
int nbw;
char str[SIZE];
mknod("myfifo",S_IFIFO | 0666,0);
printf("Writing for reader process:\n");
fd=open("myfifo",O_WRONLY);
while(fgets(str, SIZE, stdin)){
nbw=write(fd,str,strlen(str));
printf("Writer process write %d bytes: %s\n",nbw,str);
}
return 0;
}
