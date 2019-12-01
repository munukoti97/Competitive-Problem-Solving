#include<stdio.h>
#include<conio.h>
void main()
{
int  n,i,j,k,l,o=0,a[50][50];
clrscr();
printf("enter the n value:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
a[0][i]=i+1;
}
a[0][n]=0;
for(i=0;i<=o;i++)
for(j=a[i][n];j<n-1;j++)
for(k=j+1;k<n;k++)
{
o++;
for(l=0;l<n;l++)
if(l==j)
a[o][l]=a[i][k];
else
{
if(l==k)
a[o][l]=a[i][j];
else
a[o][l]=a[i][l];
}
a[o][n]=j+1;
}
for(i=0;i<=o;i++)
{
for(j=0;j<n;j++)
printf("%d ",a[i][j]);
printf("\n");
}
getch();
}
