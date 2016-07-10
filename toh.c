#include<stdio.h>
#include<conio.h>
int main()
{
int n;
char sr='a',temp='b',desc='c';
printf("enter no of disc");
scanf("%d",&n);
toh(n,sr,temp,desc);
return 0;
}
int toh(int jn,char sr,char t,char d)
{
if(jn==0)
{
printf("\n the %d disk moved from %c-->%c",jn,sr,d);
return 0;
}
toh(jn-1,sr,d,t);
printf("\n the %d disk moved from %c-->%c",jn,sr,d);
toh(jn-1,t,sr,d);
}
