#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
#define max 20
int main(){
pid_t pid;
int a[max],n,sum=0,i,status;
printf("Enter the number of terms in array:");
scanf("%d",&n);
printf("Enter values in an array:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
pid=fork();
if(pid==0){
for(i=0;i<n;i++)
{
if(a[i]%2!=0)
{
sum=sum+a[i];
}
}
printf("\n Sum of odd number=%d\n",sum);
exit(0);
}
else{
for(i=0;i<n;i++){
if(a[i]%2==0){
sum=sum+a[i];
}
}
printf("Sum of even no's =%d \n",sum);
}
return 0;
}
