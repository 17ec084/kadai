#include<stdio.h>
void main(void)
{

    int differ2a = getchar()-'a';
    int differ2b = differ2a-1;
    int differ2c = differ2a-2;

    if(!differ2a)
    {
        //  !differ2a
        //→!differ2a            != 0
        //→ differ2a            == 0
        //→(getchar()したもの)  == 'a'
        printf("aが入力されました");
     
    }
    else
    if(!differ2b)
    {
        //  !differ2b
        //→!differ2b            != 0
        //→ differ2b            == 0
        //→(getchar()したもの)-1== 'a'
        //→(getchar()したもの)  == 'b'
        printf("bが入力されました");
       
    }
    else
    if(!differ2c)
    {
        //  !differ2c
        //→!differ2c            != 0
        //→ differ2c            == 0
        //→(getchar()したもの)-2== 'a'
        //→(getchar()したもの)  == 'c'
        printf("cが入力されました");
       
    }
    else
    {
        printf("a,b,c以外が入力されました");

    }
 


}