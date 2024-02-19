#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<unistd.h>
int main(int argc, char *argv[])
{
int i;
struct stat s;
if(argc<2)
{
printf("\n Enter filename \n");
//exit(0);
/*close if*/
}
for(i=1;i<argc;i++)
{
printf("File : %s",argv[i]," ");
if(stat(argv[i],&s)<0)
{
printf("Error in obtainig stats \n");
}
else
{
printf("owner UID : ");
printf("%ld",s.st_uid);
printf("\n");
printf("group ID : %ld \n",s.st_gid);
printf("Access permissions : %ld \n",s.st_mode);
printf("Access Time : %ld \n ",s.st_atime);
printf("File Size : %ld \n",s.st_size);
printf("File Size(in Blocks): %ld \n",s.st_blksize);
}
}
return 0;
}
