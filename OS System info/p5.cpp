 #include<stdio.h>
#include<stdlib.h>
int main()
{
printf("\n the configured memory is : \n");
system("cat /proc/meminfo | awk 'NR ==1{print $2}'\n");
printf("\n amount of free memory : \n");
system("cat /proc/meminfo | awk 'NR ==2{print $2}'\n");
printf("\n amount of used memory is: \n");
system("cat /proc/meminfo | awk '{ if (NR==1) a=$2; if (NR==2) b=$2 }END {print ab}'\n");
printf("\n");
return 0;
}

