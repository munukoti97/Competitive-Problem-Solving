#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,l=0;
clrscr();
printf("enter the n value:");
scanf("%d",&n);
for(i=0;i<n;i++,printf("\n"))
for(j=1;j<2*n;j++)
if((j<=n-i && (l=j) ) || ((j-n>i-1) && (l=2*n-j)))
printf("%c",64+l);
else
printf(" ");
getch();
}

if n=4
it prints
   ABCDCBA
   ABC CBA
   AB   BA
   A     A
   
