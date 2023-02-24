#include <stdio.h>
#include <assert.h>


void out_format(int voltage[], int percent[])
{
    int i, Sensor = 1;
    char out_buffer[50];
    
    for(i = 0 ; i < 50 ; i++)
    {
        sprintf(out_buffer,"S%d \t %d V \t   %d %", Sensor, voltage[i], percent[i]);
        printf("\n");
        printf(out_buffer);
        if(Sensor== 2)
            Sensor = 1;
        else
            Sensor++;
    }
}

int main()
{
    int voltage[50] = {0,0,1,1,1,1,1,1,2,2,2,2,2,2,3,3,4,4,4,5,5,5,6,6,6,6,6,6,7,7,7,7,7,7,7,8,8,8,8,8,9,9,9,10,10,10,11,11,12,12};
    int percent[50] = {0,0,1,3,5,6,10,10,11,14,15,18,18,18,23,23,24,28,29,30,32,32,38,41,41,44,46,49,51,52,52,55,55,56,58,58,65,69,70,70,75,77,77,83,87,88,91,95,98,100};
    
    printf("SENSOR \t VOLTAGE  PERCENTAGE OF CHARGE \n");
    
    out_format(voltage, percent);
    
    
    return 0;
}
