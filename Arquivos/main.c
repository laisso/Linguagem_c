#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415
int main()
{
    float f = PI+1;
    printf("PI = %f \n", f);
    /*PI = 12.4; essa defini��o jamais pode acontecer neste c�digo porque uma vez que eu defini que PI
    � 3.1415 com o comando define, n�o tem como ser alterado.*/

    return 0;
}
