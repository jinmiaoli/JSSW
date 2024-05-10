#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void paixue(int array[],int n)
{
	int i,j,max_pos,temp;
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(array[j]<array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
}
int duibi(int array[],int n, int m)
{
	int i=0;
	int z=0;
	for(i=0;i<m;i++)
	{
		if(array[i]==array[m])
		{
			z=1;
			break;
		}
		else
		{
			z=0;
		}
	}
	return z;
}
int main(int argc, char *argv[]) 
{
	int a[20],i,j,n,x=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int b[20];
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	paixue(a,n);
	int c[20];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(b[j]==a[i]&&a[i]==a[i+1])
			{
				continue;
			}
			else if(b[j]==a[i]&&a[i]!=a[i+1])
			{
				int d=0;
				int z=0,y=0;
				z=duibi(b,n,j);
				if(z==0)
				{
					c[j]=x+1;
				}
				else
				{
					for(d=0;d<n;d++)
				    {
					    if(b[d]==b[j]&&d<j)
					    {
						   c[j]=c[d];
						   x=x-1;
						   break;
					    } 
				    }
			    }   
				x=x+1;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",c[i]);
	}
	return 0;
}
