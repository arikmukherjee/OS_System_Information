 #include<stdlib.h>
#include<stdio.h>
int main()
{
printf("\n The kernel version is: \n");
system("cat /proc/sys/kernel/osrelease");
printf("\n The CPU space: \n");
system("cat /proc/cpuinfo | awk 'NR==3,NR==4{print}'\n");
system("cat /proc/cpuinfo | awk 'NR==2,NR==5{print}'\n");
system("cat /proc/cpuinfo | awk 'NR==8{print}'\n");
printf("Amount of CPU time since system was last booted is : \n");
system("cat /proc/uptime \n");
return 0;
}

