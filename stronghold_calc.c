#include <stdio.h>
#include <math.h>  // for the tan trig function and pi

int main ()
{
    // declaring variables to get values for the coordinates and angles
    float x1, z1, f1, x2, z2, f2;

    // declaring variables that will be the outputted result
    int x, z;

    // getting values for the coordinates and angles
    printf("Name your x1 value: ");
    scanf("%f", &x1);

    printf("Name your z1 value: ");
    scanf("%f", &z1);

    printf("Name your f1 value: ");
    scanf("%f", &f1);

    printf("Name your x2 value: ");
    scanf("%f", &x2);

    printf("Name your z2 value: ");
    scanf("%f", &z2);

    printf("Name your f2 value: ");
    scanf("%f", &f2);

    // solving for x and z coordinates of the stronghold
    // M_PI is the value of pi
    z = ((z1 * tan(-f1*M_PI/180)) - (z2 * tan(-f2*M_PI/180)) - x1 + x2) / (tan(-f1*M_PI/180) - tan(-f2*M_PI/180));
    x = (z - z1) * tan(-f1*M_PI/180) + x1;

    // output results
    printf("\nThe stronghold is at (%i, %i).\n", x, z);

    return 0;
}