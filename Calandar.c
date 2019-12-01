#include<stdio.h>
#include<conio.h>
void main()
{
int i=0,y,m,d,s=0,a[12]={0,31,59,90,120,151,181,212,243,273,304,334};
char day[7][10]={"sunday","monday","tuesday","wednesday","thursday","friday","saturaday"};
clrscr();
printf("enter the year:");
scanf("%d",&y);
printf("enter the month:");
scanf("%d",&m);
printf("enter the date:");
scanf("%d",&d);
// s=(y-2001)*365+(y/4-2001/4);
if(y>=2100)
i=y/100-2100/100+1;
s=(y-2001+(y/4-2001/4)-1-i)%7+365;
if(y%4==0 && (m==1 || m==2) && !(y%100==0))
a[m-1]=s+d-1+a[m-1];
else
a[m-1]=s+d+a[m-1];
s=a[m-1]%7;
printf("\n the day is %s",day[s]);
getch();
}
