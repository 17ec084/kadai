#include<stdio.h>
void main(void)
{
int deffer2a=getchar()-'a';
switch(deffer2a)
{
  case 0:
    //getchar()�������̂�'a'�̂Ƃ�
    printf("a�����͂��ꂽ");
    break;
  case 1:
    //getchar()�������̂�'b'�̂Ƃ�
    printf("b�����͂��ꂽ");
    break;
  case 2:
    //getchar()�������̂�'c'�̂Ƃ�
    printf("c�����͂��ꂽ");
    break;

  default:
    //�����ȊO
    printf("a.b,c�ȊO�����͂��ꂽ");
}
 


}