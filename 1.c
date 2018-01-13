#include <stdio.h>
#define N 10
void swap(int *a, int *b)
{
	int t;

	t=*a;
	*a=*b;
	*b=t;
}


//冒泡
void orderMP(int *a,int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if (a[j]<a[j+1])
			{
				swap(&a[j],&a[j+1]);
			}

		}
	}
}


//选择
void orderXZ(int *a,int n)
{
	int i,j,m;
	for(i=0;i<n;i++)
	{
		m=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[m])
			{
				m=j;
			}
		}
		if (m!=i)
		{
			swap(&a[i],&a[m]);
		}
	}
}	

//插入法
void orderCR(int *a,int n)
{
	int i,j,m;
	for(i=0;i<n;i++)
	{
		m=a[i];
		for(j=i-1;m<a[j]&&j>=0;j--)
		{
			a[j+1]=a[j];
		}
		a[j+1]=m;
	}
	
}

//边小中间大
	void orderBZ(int *a,int n)
{
	int i,j,m;
	for(i=0;i<n/2;i++)
	{
		m=i;
		for (j=i+1;j<n-i;j++)
		{
			if(a[m]>a[j])
			{
				m=j;
			}
		}
	
		if(m!=i)
		{
			swap(&a[i],&a[m]);
		}

		m=n-i-1;
		for(j=i+1;j<n-i-1;j++)
		{
			if(a[m]>a[j])
			{
				m=j;
			}
		}
		if(m!=i)
		{
			swap(&a[n-i-1],&a[m]);
		}
	}
}


int main()
{
	int a[N]={9,6,8,0,7,4,5,3,1,2};
	int i,j;
	int m;
	int n=N;

	orderCR(a,n);


	//输出语句
	for(i=0;i<N;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	return 0;
}
