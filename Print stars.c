#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,l,n;
clrscr();
printf("enter the n value:");
scanf("%d",&n);
  for(i=1;i<=n;i++)
  for(j=1;j<=n;j++,printf("\n"))
{ for(l=1;l<=((n-i+1)*(n)-j+2);l++,printf(" ")){}
  for(l=1;l<=j;l++,printf("* ")){}
  for(k=1;k<i;k++)
{ for(l=1;l<=2*(n-j) ;l++,printf(" ")){}
  for(l=1;l<=j;l++,printf("* ")){} }}
getch();
}

if n =1 
 it prints    *
 
if n=2 
 it prints      *
               * *
              *   *
             * * * *
 if n=3
  it prints            *
                     *   *
                   *   *   *
                 *          *
               *   *      *   *
             *   *   *  *   *   *
            *         *          *
          *   *     *   *      *   *
        *   *   * *   *   *  *   *   *
       
  if n=4
    .
    .
    .
    .
    .
    etc
         
      
