#include <REGX52.H>
#include <intrins.h>

void Delayxms(unsigned int xms)		
{
	unsigned char i, j;

	while(xms--)
	{
		i = 2;
		j = 239;
		do
		{
			while (--j);
		} while (--i);
	}
}

void main(void)
{
	unsigned char LEDNum = 0;
	
	P2 = 0xFE;
	while(1)
	{
		if(P3_0 == 0)
		{
			Delayxms(20);
			while(P3_0 == 0);
			Delayxms(20);
			
			LEDNum++;
			if(LEDNum >= 8)
			{
				LEDNum = 0;
			}
			P2 = ~(0x1 << LEDNum);
		}
		
		if(P3_1 == 0)
		{
			Delayxms(20);
			while(P3_1 == 0);
			Delayxms(20);
			
			
			if(LEDNum == 0)
			{
				LEDNum = 7;
			}
			else
			{
				LEDNum--;
			}
			
			P2 = ~(0x1 << LEDNum);
		}
	}
}