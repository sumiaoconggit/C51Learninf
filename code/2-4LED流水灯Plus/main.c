#include <REGX52.H>
#include <intrins.h>

void Delay1ms(unsigned int xms)		//@11.0592MHz
{
	while(xms--)
	{
		unsigned char i, j;

		i = 3;
		j = 85;
		do
		{
			while (--j);
		} while (--i);;
	}
}


void main()
{
	while(1)
	{
		P2 = 0xFE;
		Delay1ms(500);
		P2 = 0xFD;
		Delay1ms(500);
		P2 = 0xFB;
		Delay1ms(50);
		P2 = 0xF7;
		Delay1ms(50);
		P2 = 0xEF;
		Delay1ms(50);
		P2 = 0xDF;
		Delay1ms(50);
		P2 = 0xBF;
		Delay1ms(50);
		P2 = 0x7F;
		Delay1ms(50);
	}
}