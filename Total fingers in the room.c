#include<stdio.h>
int getTotalFingersCount(int N)
{   if(N==0)
      return 0;
    if(N==1)
        return 10;
  	if(N%2==0)
      return 11+getTotalFingersCount(N-1);
    else
      return 10+getTotalFingersCount(N-1);      

}
