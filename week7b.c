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
msgrcv(msgid,&svarname,sizeof(svarname),1,0);
printf("Data recieved isl %s\n",svarname.mtext);
msgctl(msgid, IPC_RMID,NULL);
return 0;
}
