
#include <iostream>
/**
 * Capitulo 2 Ejercicio #2.4
 * Escribe en ensamblador la estructura de alto nivel switch, aplicándola al siguiente ejemplo en C.
 * 
 * for ( i= 1950; i<2015; i++ ){
 * switch( i&3 ){
 * case 0: printf("En %d hubo olimpiadas\n", i);
 * break;
 * case 2: printf("En %d hubo mundial de fútbol\n", i);
 * break;default: printf("En %d no pasó nada\n", i);
 * }
 * }

**/
 
 //@Autor Ramirez Villa Jesus Pablo
 //@GithubAutor PabloVilla1999
 //@Date 08 Diciembre 2021

using namespace std;

int main()
{
    for(int i=1950; i<2015; i++)
    {
        switch(i&3)
        {
            case 0:
            printf("En %d hubo olimpiadas\n", i);
            break;
            
            case 2:
            printf("En %d hubo mundial de fútbol\n", i);
            break;
            
            default:
            printf ("En %d no pasó nada\n", i);
        }
    }
    return 0;
}
