#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,a[100][100],n,r,p;
clrscr();
printf("enter the value n and r:");
scanf("%d",&n);
scanf("%d",&r);
for(i=1;i<=r;i++)
a[0][i-1]=i;
p=0;
for(i=r-2;i>=0;i--)
{
if(a[p][i]<(n-((r-2)-i)-1))
{
if(p>0)
p=p+1;
for(k=0;(k<r && p>0);k++)
{
if(k>=i)
a[p][k]=a[p-1][i]+(k-i)+1;
else
a[p][k]=a[p-1][k];
}
p++;
for(j=a[p-1][r-1]+1;j<=n;j++)
{
for(k=0;k<r;k++)
{
 if(k==r-1)
 a[p][k]=j;
 else
 a[p][k]=a[p-1][k];
 }
 p++;
 i=r;
 }
 p=p-1;
}
}
for(i=0;i<=p;i++)
{
for(j=0;j<r;j++)
{
printf("%d ",a[i][j]);
}
printf("\n");
}
getch();
}
