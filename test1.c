#include<stdio.h>
void main(void)
{

    int differ2a = getchar()-'a';
    int differ2b = differ2a-1;
    int differ2c = differ2a-2;

    if(!differ2a)
    {
        //  !differ2a
        //¨!differ2a            != 0
        //¨ differ2a            == 0
        //¨(getchar()‚µ‚½‚à‚Ì)  == 'a'
        printf("a‚ª“ü—Í‚³‚ê‚Ü‚µ‚½");
     
    }
    else
    if(!differ2b)
    {
        //  !differ2b
        //¨!differ2b            != 0
        //¨ differ2b            == 0
        //¨(getchar()‚µ‚½‚à‚Ì)-1== 'a'
        //¨(getchar()‚µ‚½‚à‚Ì)  == 'b'
        printf("b‚ª“ü—Í‚³‚ê‚Ü‚µ‚½");
       
    }
    else
    if(!differ2c)
    {
        //  !differ2c
        //¨!differ2c            != 0
        //¨ differ2c            == 0
        //¨(getchar()‚µ‚½‚à‚Ì)-2== 'a'
        //¨(getchar()‚µ‚½‚à‚Ì)  == 'c'
        printf("c‚ª“ü—Í‚³‚ê‚Ü‚µ‚½");
       
    }
    else
    {
        printf("a,b,cˆÈŠO‚ª“ü—Í‚³‚ê‚Ü‚µ‚½");

    }
 


}