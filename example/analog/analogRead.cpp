#include "math.h"

#include "arduino.h"

#include "pwm.h"

//PWM P(7);
/*
analog pin table
0,1,2,3,6,7,16,17,22,23,24,25,26,27
*/
void setup()
{
	systemtickcfg(9000);//1ms??????
}

float x,y;
int main(void)
{

	setup();
	
	
	while(1)
	{

		 
		x = x + PI*0.01;
		if(x >= PI)x=0;
		y = 2000 - (sin(x)+1)*1000;
		
		analogWrite(7,y);
		delay_ms(50);
	}


}




