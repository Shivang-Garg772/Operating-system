#include<stdio.h>
#include<string.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<sys/types.h>
int main(){
key_t key;
int shmid;
char *ptr;
key=ftok("shmfile",'A');
shmid=shmget(key, 1024, 0666 | IPC_CREAT);
ptr=shmat(shmid, (void *)0,0);
printf("The data stored : %s\n",ptr);
shmdt(ptr);
shmctl(shmid,IPC_CREAT,NULL);
return 0;
}
