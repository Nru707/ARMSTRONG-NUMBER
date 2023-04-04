#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int no,x,q,r,sum=0;
clrscr();
printf("enter the number\n");
scanf("%d",&no);
x=no;
while(x!=0){
q=x/10;
r=x%10;
x=q;
sum=sum+pow(r,3);
}
if(sum==no){
printf("%d is a amrstrong number\n",no);
}
if(sum!=no){
printf("%d is not a armstrong number\n",no);
}
getch();
}