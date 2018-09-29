/**
* Author: Cal Malone
*
* This program calculates the arithmetic geometric mean of two numbers x and y using command
* line arguments.
*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {

double x ;
double y ;
double E ;
double A ;
double G ;
double agm ;
double newA ;
double newG ;

if(argc != 4) {
  printf("Error: Please enter the correct number of command line arguments\n") ;
  exit(1) ;
}
x = atof(argv[1]) ;
y = atof(argv[2]) ;
E = atof(argv[3]) ;

A = 0.5 * (x + y) ;
G = sqrt(x * y) ;

double i = fabs((A - G)) ;
  while(i >= E)  {
    newA = 0.5 * (A + G) ;
    newG = sqrt(A * G) ;
    A = A - (A - newA) ;
    G = G - (G - newG) ;
    i = fabs((A - G)) ;
  }
agm = (A + G)/2.0 ;
  printf("Arithmetic-Geometric Mean:%.2lf\n", agm) ;

return 0;
}
