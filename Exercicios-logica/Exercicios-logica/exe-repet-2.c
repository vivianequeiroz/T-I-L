#include <stdio.h>

int brocolis ()
{
char c;
int i=0;
    
    printf("\nEntre com um texto: "); while ( ( c=getchar() ) != 10 )
    i++;
    printf("\n%d\n",i);
    
    return 0;
}
