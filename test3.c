#include<stdio.h>
void main(void)
{
int i;
scanf("%d",&i);
printf("%d==5��%d\n",i,i==5);
printf("!%d��%d\n",i,!i);
printf("%d!=5��%d\n",i,i!=5);
printf("%d<=5��%d\n",i,i<=5); 
printf("%d>=5��%d\n",i,i>=5);
printf("%d<5��%d\n",i,i<5);
printf("%d>5��%d\n",i,i>5);
printf("%d<=5&&%d>=5��%d\n",i,i,i<=5&&i>=5);    
printf("%d<=5||%d>=5��%d\n",i,i,i<=5||i>=5);
printf("!%d||%d��%d,i,i-4",!i||i-4); 


}