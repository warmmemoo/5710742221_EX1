#/* ex03_29.c
   What does this program print? */
#include <stdio.h>

/* function main begins program execution */
int main( void )
{
   int count = 1; /* initialize count */

   while ( count <= 10 ) { /* loop 10 times */

      /* output line of text */
      printf( "%s\n", count % 2 ? "****" : "++++++++" );
      count++; /* increment count */
   } /* end while */

   return 0; /* indicate program ended successfully */

} /* end function main */
