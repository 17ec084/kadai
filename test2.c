#include<stdio.h>
void main(void)
{
int deffer2a=getchar()-'a';
switch(deffer2a)
{
  case 0:
    //getchar()‚µ‚½‚à‚Ì‚ª'a'‚Ì‚Æ‚«
    printf("a‚ª“ü—Í‚³‚ê‚½");
    break;
  case 1:
    //getchar()‚µ‚½‚à‚Ì‚ª'b'‚Ì‚Æ‚«
    printf("b‚ª“ü—Í‚³‚ê‚½");
    break;
  case 2:
    //getchar()‚µ‚½‚à‚Ì‚ª'c'‚Ì‚Æ‚«
    printf("c‚ª“ü—Í‚³‚ê‚½");
    break;

  default:
    //‚»‚ê‚çˆÈŠO
    printf("a.b,cˆÈŠO‚ª“ü—Í‚³‚ê‚½");
}
 


}