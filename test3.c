#include<stdio.h>
void main(void)
{
int i;
scanf("%d",&i);
printf("%d==5は%d\n",i,i==5);
printf("!%dは%d\n",i,!i);
printf("%d!=5は%d\n",i,i!=5);
printf("%d<=5は%d\n",i,i<=5); 
printf("%d>=5は%d\n",i,i>=5);
printf("%d<5は%d\n",i,i<5);
printf("%d>5は%d\n",i,i>5);
printf("%d<=5&&%d>=5は%d\n",i,i,i<=5&&i>=5);    
printf("%d<=5||%d>=5は%d\n",i,i,i<=5||i>=5);
printf("!%d||%dは%d,i,i-4",!i||i-4); 


}