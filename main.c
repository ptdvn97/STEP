#include <main.h>

#define A PIN_D1
#define B PIN_D2
#define C PIN_D3
#define D PIN_D4

int a=0,b=0;
void main()
{

   while(TRUE)
   {

      output_bit(A,1);
      output_bit(B,0);
      output_bit(C,1);
      output_bit(D,0);
      delay_ms(70);
      output_bit(A,0);
      output_bit(B,1);
      output_bit(C,1);
      output_bit(D,0);
      delay_ms(70);
      output_bit(A,0);
      output_bit(B,1);
      output_bit(C,0);
      output_bit(D,1);
      delay_ms(70);
      output_bit(A,1);
      output_bit(B,0);
      output_bit(C,0);
      output_bit(D,1);
      delay_ms(70);
   }

}
