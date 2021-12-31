#include<stdio.h>
int decimalTobinary(int dno)
{
int bno=0,temp=1,rem;
while(dno!=0)
{
rem=dno%2;
dno=dno/2;
bno+=rem*temp;
temp=temp*10;
}
return bno;
}
int main()
{
int dno,p;
printf("Enter a number in decimal:");
scanf("%d",&dno);
p=decimalTobinary(dno);
printf("%d",p);
}
