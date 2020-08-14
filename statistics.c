#include <stdio.h>

int  avg(int a[]);
int mean(int a[]);
int mode(int a[]);


int main ()
{
    int i,j,k;
    int a[10] = {1,2,3,4,5,6,7,8,9,10}; 
    printf("Average is %d\n",avg(a));
    printf("Mean is %d\n",mean(a));
    printf("Median %d\n",mode(a));
}


int  avg(int a[])
{
  int sum=0,i;
  for(i=0;i<10;i++)
  {
      sum = sum + a[i];
  }
  return sum/10;

}

int mean(int a[])
{
   return a[0];

}

int mode(int a[])
{
  return a[4];

}

