#include <stdio.h>
#include <assert.h>
#include <string.h>


char* out_format_TEST(int voltage[], int percent[], int index)
{
    int Sensor;
    Sensor = (index % 2)+ 1;
    char out_buffer[30];
    
    sprintf(out_buffer,"S%d \t %d V \t   %d", Sensor, voltage[index], percent[index]);
    
    return out_buffer;
}

int main()
{
    int voltage[50] = {0,0,1,1,1,1,1,1,2,2,2,2,2,2,3,3,4,4,4,5,5,5,6,6,6,6,6,6,7,7,7,7,7,7,7,8,8,8,8,8,9,9,9,10,10,10,11,11,12,12};
    int percent[50] = {0,0,1,3,5,6,10,10,11,14,15,18,18,18,23,23,24,28,29,30,32,32,38,41,41,44,46,49,51,52,52,55,55,56,58,58,65,69,70,70,75,77,77,83,87,88,91,95,98,100};
    
    
    assert(strcmp(out_format_TEST(voltage, percent, 0),"S1 	 0 V 	   0") == 0);
    assert(strcmp(out_format_TEST(voltage, percent, 50),"S2 	 12 V 	   100") == 0);
    
    
    return 0;
}
