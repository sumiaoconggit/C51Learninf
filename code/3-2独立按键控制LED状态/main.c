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
	while(1)
	{
		if(P3_1 == 0)
		{
			Delayxms(20);
			while(P3_1 == 0);
			Delayxms(20);
			
			P2_0 = ~P2_0;
		}
	}
}