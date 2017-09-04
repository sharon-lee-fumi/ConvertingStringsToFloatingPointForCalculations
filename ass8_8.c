#include <stdio.h>
#include <stdlib.h>

#define SIZE 20

int main( void )
{ 
   // variables to hold strings
   char s1[SIZE];
   char s2[SIZE];
   char s3[SIZE];
   char s4[SIZE];

   puts("Please enter four strings that represent floating-point values");	
   
   fgets(s1, SIZE-1, stdin);
   fgets(s2, SIZE-1, stdin);
   fgets(s3, SIZE-1, stdin);
   fgets(s4, SIZE-1, stdin);
      
   // variables to hold converted sequence
   double d1; 
   double d2; 
   double d3; 
   double d4; 

   // create char pointers
   char *s1Ptr; 
   char *s2Ptr;
   char *s3Ptr;
   char *s4Ptr;
   
   // converte string to double
   d1 = strtod( s1, &s1Ptr );
   d2 = strtod( s2, &s2Ptr );
   d3 = strtod( s3, &s3Ptr );
   d4 = strtod( s4, &s4Ptr );

   // calculate the sum of the values
   double sum = d1 + d2 + d3 +d4; 
   
   printf( "The sum of four values is : %f \n", sum);

}
