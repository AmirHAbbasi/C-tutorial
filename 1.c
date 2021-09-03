
#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int *p = malloc(8*sizeof(7)); 
    
    p[0] = 14345;    // hex = 3809
    p[1] = 113400;   // hex = 1BAF8
    
    /*
    p - > 09
          38
          00
          00
  p+1 - > F8
          BA
          01
          00

    */

    int first_p = p[0];
    int second_p = p[1];
    
    char first_byte = (char)*p;
    char second_byte = (char)*(p+1);
    
    printf("%d", second_p);
    
    printf("\n%d", first_byte);
    
    
    
    printf("\n%d", second_byte);
    
    printf("\n%d", (char)*(p+1));
    
    char *charized = (char*)p;
    
    printf("\n1:%d", *(charized+1));   // returns 56 = (38)hex
    
    printf("\n3:%d", *(charized+5));   // (BA)hex  =  1011 1010  Signed-->  70 d
    
    
    free(p);
    
    // free allocated memory to p and set to 0
    
    printf("\n%d", (char)*(p+1));
    
    printf("\n1:%d", *(charized+1));   // also it's set to 0
    
    return 0;
}
