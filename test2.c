#include<stdio.h>
void main(void)
{
int deffer2a=getchar()-'a';
switch(deffer2a)
{
  case 0:
    //getchar()したものが'a'のとき
    printf("aが入力された");
    break;
  case 1:
    //getchar()したものが'b'のとき
    printf("bが入力された");
    break;
  case 2:
    //getchar()したものが'c'のとき
    printf("cが入力された");
    break;

  default:
    //それら以外
    printf("a.b,c以外が入力された");
}
 


}