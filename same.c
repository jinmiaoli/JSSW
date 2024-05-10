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
	int n1,n2;
	int a[20],b[20];
	scanf("%d",&n1);
	int i=0;
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&n2);
	for(i=0;i<n2;i++)
	{
		scanf("%d",&b[i]);
	}
	int a_c[20],b_c[20];
	for(i=0;i<n1;i++)
	{
		a_c[i]=cishu(a,n1,i);
	}
	for(i=0;i<n1;i++)
	{
		b_c[i]=cishu(b,n2,i);
	}
	int j1,max1,tempc1,tempb1;
	for(i=0;i<n1-1;i++)
	{
		max1=i;
		for(j1=i+1;j1<n1;j1++)
		{
			if(a[j1]<a[max1])
			{
				max1=j1;
			}
		}
		if(i!=max1)
		{
			tempb1=a[max1];
			a[max1]=a[i];
			a[i]=tempb1;
			tempc1=a_c[max1];
			a_c[max1]=a_c[i];
			a_c[i]=tempc1;
		}
	}
	int j2,max2,tempc2,tempb2;
	for(i=0;i<n2-1;i++)
	{
		max2=i;
		for(j2=i+1;j2<n2;j2++)
		{
			if(b[j2]<b[max2])
			{
				max2=j2;
			}
		}
		if(i!=max2)
		{
			tempb2=b[max2];
			b[max2]=b[i];
			b[i]=tempb2;
			tempc2=b_c[max2];
			b_c[max2]=b_c[i];
			b_c[i]=tempc2;
		}
	}
	int j;
	if(n1!=n2)
	{
		printf("0\n");
		for(i=0;i<n1;i++)
	    {  
		   for(j=i+1;j<n1;j++)
		   {
			   if(a[j]==a[i])
			   {
				   break;
			   }  
			    else
			   {
				   printf("%d %d\n",a[i],a_c[i]);
				    break;
			   }
		    }
		    if(i==n1-1)
		    {
			    printf("%d %d\n",a[i],a_c[i]);
		    }
	    }
	}
	else
	{
		printf("1\n");
		for(i=0;i<n1;i++)
	    {  
		   for(j=i+1;j<n1;j++)
		   {
			   if(a[j]==a[i])
			   {
				   break;
			   }  
			    else
			   {
				   printf("%d %d\n",a[i],a_c[i]);
				    break;
			   }
		    }
		    if(i==n1-1)
		    {
			    printf("%d %d\n",a[i],a_c[i]);
		    }
	    }
	}
    return 0;
}
