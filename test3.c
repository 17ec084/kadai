#include<stdio.h>
void main(void)
{
int i;
scanf("%d",&i);
printf("%d==5‚Í%d\n",i,i==5);
printf("!%d‚Í%d\n",i,!i);
printf("%d!=5‚Í%d\n",i,i!=5);
printf("%d<=5‚Í%d\n",i,i<=5); 
printf("%d>=5‚Í%d\n",i,i>=5);
printf("%d<5‚Í%d\n",i,i<5);
printf("%d>5‚Í%d\n",i,i>5);
printf("%d<=5&&%d>=5‚Í%d\n",i,i,i<=5&&i>=5);    
printf("%d<=5||%d>=5‚Í%d\n",i,i,i<=5||i>=5);
printf("!%d||%d‚Í%d",i,i-4,!i||i-4); 


}
