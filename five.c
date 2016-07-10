#include <stdio.h>
int main(void) 
{
int r,i,j=0,b[100],a[100];
scanf("%d",&r);
for(i=0;i<r;i++)
scanf("%d",&a[i]);
for(i=0;i<r;i++)
{
	int t=a[i],c=0;
	while(t)
	{
		int rem=t%2;
		t=t/2;
		c++;
    }
    b[j++]=c;
 
}
for(i=0;i<r;i++)
{
	for(j=0;j<r;j++)
	{
		if(b[i]>b[j])
		{
			int temp=b[i];
			b[i]=b[j];
			b[j]=temp;
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		else if(b[i]==b[j])
		{
			if(a[i]>a[j])
		{
			int temp=b[i];
			b[i]=b[j];
			b[j]=temp;
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}	
		}
	}
}
for(i=0;i<r;i++)
printf("%d",a[i]);
return 0;
}
