
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <read_data.h>
#include <smooth.h>

#define MAX_LINES 256

int main(void)
{
FILE* fp; /* This is the file pointer */
fp = fopen("messyData.dat", "r");
float data[MAX_LINES];

int ndata = read_data(fp, data, MAX_LINES);

printf("Read %i lines\n", ndata);

fclose(fp);

int filter_length = 25;

float output[ndata-filter_length+1];

smooth(data, ndata, filter_length, output);


fp = fopen("smoothedData.dat", "w");
for(int i=0; i<ndata-filter_length; i++)
 {
 	fprintf (fp,"%f\n", output[i]); 
}
fclose(fp);


}


