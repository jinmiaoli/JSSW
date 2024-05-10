#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int cishu(int array[],int n,int j)
{
	int i,num=0;
	for(i=0;i<n;i++)
	{
		if(array[j]==array[i])
		{
			num++;
		}
	}
	return num;
}
void paixue(int array[],int n)
{
	int i,j,max_pos,temp;
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[100],b[100],c[100];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		int z=cishu(a,n,i);
		b[i]=z;
	}
	for(i=0;i<n;i++)
	{
		c[i]=i;
	}
	int j,max,tempc,tempb;
	for(i=0;i<n-1;i++)
	{
		max=i;
		for(j=i+1;j<n;j++)
		{
			if(b[j]>b[max])
			{
				max=j;
			}
		}
		if(i!=max)
		{
			tempb=b[max];
			b[max]=b[i];
			b[i]=tempb;
			tempc=c[max];
			c[max]=c[i];
			c[i]=tempc;
		}
	}
	int g;
	for(i=0;i<n;i++)
	{
		if(b[0]!=b[i])
		{
			g=i;
			break;
		}
		else
		{
			g=0;
		}
	}
	if(g==0)
	{
		paixue(a,n);
        for(i=0;i<n;i++)
	    {  
		   for(j=i+1;j<n;j++)
		   {
			   if(a[j]==a[i])
			   {
				   break;
			   }  
			    else
			   {
				   printf("%d %d\n",a[i],b[i]);
				    break;
			   }
		    }
		    if(i==n-1)
		    {
			    printf("%d %d\n",a[i],b[i]);
		    }
	    }
    }  
    else
    {
    	int x,d[100];
	for(i=0;i<g;i++)
	{
		x=c[i];
		d[i]=a[x];
	}
	paixue(d,g);
	for(i=0;i<g;i++)
	{
		for(j=i+1;j<g;j++)
		{
			if(d[j]==d[i])
			{
				break;
			}
			else
			{
				printf("%d %d\n",d[i],b[i]);
				break;
			}
		}
		if(i==g-1)
		{
			printf("%d %d\n",d[i],b[i]);
		}
	}
	}
	

	return 0;
}
