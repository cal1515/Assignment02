/**
* Author: Cal Malone
*
* This program will solve the classic rainfall problem by finding the average rainfall
* for the values entered not including 99999, which when entered, will stop the loop.
*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {
double rainfall = 0 ;
double totalRainfall = 0 ;
int daysCounter = 0 ;
  while(rainfall != 99999) {
    scanf("%lf", &rainfall) ;
      if(rainfall >= 0)  {
    totalRainfall = totalRainfall + rainfall ;
    daysCounter++ ;
      }
  }
double averageRainfall = ((totalRainfall - 99999) / (daysCounter - 1)) ;
  printf("Average Rainfall: %.lf\n", averageRainfall) ;

return 0;
}
