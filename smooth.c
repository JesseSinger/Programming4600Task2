#include <stdio.h>
	/* smooth function */


int smooth(float* data, int sz_data, int filter_length, float* output)
{
	float x;
	float y;
	for (int n = 0;n<sz_data-filter_length; n++)
	{
		x=0;
		y=0;	
		for (int m = 0; m <= filter_length; m++)
			{	
			x = x + data[n+m];
			y++;
			}
		output[n]= x/y;
	}



}