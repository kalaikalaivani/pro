#include<stdio.h>
int hanoi(int disc,char frm,char cache,char to)
{
if(disc==1)
{
printf("\nThe %d disk moved from %c-->%c",disc,from,to);
return 0;
}
hanoi(disc-1,frm,to,cache);
printf("\nthe %d disk moved from %c-->%c",disc,from,to);
hanoi(disc-1,cache,frm,to);
}
int main()
{
int n;
char frm='X',cache='Y',to='Z';
printf("enter nio of disk:");
scanf("%d",&n);
hanoi(n,frm,cache,to);
return 0;
}
