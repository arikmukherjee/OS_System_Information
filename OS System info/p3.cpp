#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
int pid=fork();
if(pid<0)
{
printf("\n Error! ");
exit(1);
}
else if(pid==0)
{
printf("\n Hello I'm child Process ");
printf("\n My pid is %d ",getpid());
exit(0);
}
else if(pid>0)
{
printf("\n Hello Parent Process ");
printf("\n My Actual pid is %d \n ",getpid());
wait(NULL);
printf("\n Child Parent Exited..");
exit(1);
}
}

