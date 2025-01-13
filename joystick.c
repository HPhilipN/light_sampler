#include "joystick.h"

//path definition
#define Xvoltage "/sys/bus/iio/devices/iio:device0/in_voltage2_raw"
#define Yvoltage "/sys/bus/iio/devices/iio:device0/in_voltage3_raw"


void readxy(double *x, double *y){
    FILE *fx = fopen(Xvoltage, "r");

    if(!fx)
    {
        printf("ERROR: unable to open x voltage input file. \n");
        exit(-1);
    }


    FILE *fy = fopen(Yvoltage, "r");
    if(!fy)
    {
        printf("ERROR: unable to open y voltage input file. \n");
        exit(-1);
    }

    
    fclose(fx);
    fclose(fy);
}