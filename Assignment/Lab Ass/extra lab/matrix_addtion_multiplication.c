#include<stdio.h>
int i,j,k;
void getarray(int a[2][2])
{
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\n Enter a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}

void printarray(int a[2][2])
{
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
}

void addarray(int a[2][2], int b[2][2], int c[2][2])
{
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
}

// Logic of matrix multiplication

void getm1(int p[3][3])
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter p[%d][%d]:=",i,j);
			scanf("%d",&p[i][j]);
		}
	}
}

void printm1(int p[3][3])
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",p[i][j]);
		}
		printf("\n");
	}
}

void multiplication(int p[3][3], int q[3][3], int r[3][3])
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			r[i][j]=0;
			
			for(k=0;k<3;k++)
			{
				r[i][j] += p[i][k] * q[k][j];
			}
		}
	}
}
main()
{
	int a[2][2], b[2][2],c[2][2];
	int p[3][3],q[3][3],r[3][3];
	
	printf("\n Enter the elements of first matrix is:\n");
	getarray(a);
	printf("\n First matrix is:\n");
	printarray(a);
	
	printf("\n Enter the elements of second matrix is:\n");
	getarray(b);
	printf("\n Second matrix is:\n");
	printarray(b);
	
	addarray(a,b,c);
	printf("\n Addition of two matrix is:\n");
	printarray(c);
	
	
	
	printf("\n Matrix multiplictipn is :\n");
	
	printf("\n Enter the elements of frist matrix is:\n");
	getm1(p);
	printf("\n Frist matrix is:\n");
	printm1(p);
	
	printf("\n Enter the elements of second matrix is:\n");
	getm1(q);
	printf("\n Second matrix is:\n");
	printm1(q);
	
	multiplication(p,q,r);
	printf("\n 3 X 3 mtrix multiplication is:\n");
	printm1(r);
	
}
