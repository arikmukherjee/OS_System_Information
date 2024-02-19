#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
pid_t pid,p;
p=fork();
pid=getpid();
if(p<0)
{
fprintf(stderr,"Fork Failed");
return 1;
}
printf("output of fork ID: %d \n",p);
printf("Process id is: %d \n",pid);
return 0;
}

