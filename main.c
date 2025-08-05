#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "base64.h"


int main( void ) {
  char s[1024];

  while( 1 ) {
    printf( "Input string -> " );
    fgets( s, 1024, stdin );

    printf( "%s\n", base64Encode( s, strlen(s), BASE64_TYPE_MIME ) );
    printf( "%s\n", base64Encode( s, strlen(s), BASE64_TYPE_URL ) );
  }

  return 0;
}