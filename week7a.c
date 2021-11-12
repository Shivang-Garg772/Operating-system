#include<stdio.h>
#include<string.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<sys/types.h>
#define SIZE 100
struct msgbuf{
long mtype;
char mtext[SIZE];
}svarname;
int main(){
key_t key;
int msgid,c;
key=ftok("progfile",'A');
msgid=msgget(key, 0666 | IPC_CREAT);
svarname.mtype=1;
printf("Enter a string:");
fgets(svarname.mtext,SIZE,stdin);
c=msgsnd(msgid,&svarname,strlen(svarname.mtext),0);
printf("Sender wrote the text :\t %s \n",svarname.mtext);
return 0;
}
