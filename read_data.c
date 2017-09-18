#include <stdio.h>
#include <stdlib.h>

int read_data(FILE* fp, float* data, int sz_data)
{

	int count = 0;
	
	char line[32];
	while(fgets(line, sizeof line, fp) != NULL && count < sz_data)
	{
		data[count] = atof(line);
		printf("Line: %s\n", line);
		printf("Converted: %f\n" , data[count]);
		count++;
	}
	
	return count;
}