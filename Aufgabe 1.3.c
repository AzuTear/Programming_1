#include <stdio.h>

int main()
{
    //define PI
    #define PI 3.1415f

    float anzahlStuecke=12;
    float hoehe=8;
    float durchmesser=28;

    //Declare an own varible VolumeTortenStücks
    float VolumeTortenStücks = PI*durchmesser/2*durchmesser/2*hoehe/12;
    printf("\nDas Volum eines Torten Stücks beträgt: %f Liter.\n\n",VolumeTortenStücks);
    printf("\nEin Torten Stück ist %f cm^3 groß.\n\n",VolumeTortenStücks/1000);
    return 0;
}
