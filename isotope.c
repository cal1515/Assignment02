/**
* Author: Cal Malone
*
* This program calculates the amount of an element remaining after each year for n years
* where n is the element's half life. A table is then produced showing the progression
* year by year of the element's decay.
*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {

int atomicNumber ;
char elementName ;
char elementSymbol ;
double halfLife ;
double initialMass ;
int year = 1 ;
double newMass ;

if(argc != 6) {
  printf("Error: Please enter the correct number of command line arguments\n") ;
  exit(1);
}

atomicNumber = atoi(argv[1]) ;
printf("%s", argv[2]) ;
printf("(%d-%s)\n", atomicNumber, argv[3]) ;
halfLife = atof(argv[4]) ;
initialMass = atof(argv[5]) ;

printf("Year Amount\n ---------------- \n --  %4.3lf grams\n", initialMass) ;
double i = initialMass ;
  while(i > (initialMass/2))  {
    newMass = initialMass * pow(0.5, (year/halfLife)) ;
    i = initialMass - (initialMass - newMass) ;
    printf("%d %8.3lf grams\n", year, i) ;
    i = initialMass - (initialMass - newMass) ;
    year++ ;

  }

return(0) ;

}
