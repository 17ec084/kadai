#include<stdio.h>
void main(void)
{

    int differ2a = getchar()-'a';
    int differ2b = differ2a-1;
    int differ2c = differ2a-2;

    if(!differ2a)
    {
        //  !differ2a
        //��!differ2a            != 0
        //�� differ2a            == 0
        //��(getchar()��������)  == 'a'
        printf("a�����͂���܂���");
     
    }
    else
    if(!differ2b)
    {
        //  !differ2b
        //��!differ2b            != 0
        //�� differ2b            == 0
        //��(getchar()��������)-1== 'a'
        //��(getchar()��������)  == 'b'
        printf("b�����͂���܂���");
       
    }
    else
    if(!differ2c)
    {
        //  !differ2c
        //��!differ2c            != 0
        //�� differ2c            == 0
        //��(getchar()��������)-2== 'a'
        //��(getchar()��������)  == 'c'
        printf("c�����͂���܂���");
       
    }
    else
    {
        printf("a,b,c�ȊO�����͂���܂���");

    }
 


}