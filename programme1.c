#include <stdio.h>
#include <stdlib.h>
#define MAJORITE 18
#define RETRAITE 62
#define TARIF_RETRAITE 6
#define TRUE 1
#define FALSE 0
#ifndef boolean
#define boolean int
#endif 
boolean est_mineur(int age)
{
if(age < MAJORITE)
    return TRUE;
else
    return FALSE;
}
int main()
{
int age=RETRAITE;
float prix=TARIF_RETRAITE;
printf ("quel est votre age:");
scanf("%d",&age);
if(est_mineur(age))
{
prix=4.50;
}
else
{
if(age>=RETRAITE)
prix=TARIF_RETRAITE;
else
prix=7;
}
printf("ce sera %f francs!:",prix);


return 0;
}


