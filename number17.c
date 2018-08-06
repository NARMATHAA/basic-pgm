#include <stdio.h>
void main()
{
int num,rem,ams,temp;
scanf("%d", &num);
temp=num;
while (num!=0)
{
rem=num%10;
num=num/10;
ams=ams+ (rem*rem*rem);
}
if(temp==ams)
printf("yes");
else
printf("no");
getch();
}
