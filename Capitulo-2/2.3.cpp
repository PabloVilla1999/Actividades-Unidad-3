#include <iostream>

/**
 * Capitulo 2 Ejercicio #2.3
 * Escribe en ensamblador un código equivalente a éste. Primero haciendo uso de
 * la instrucción ands y un registro auxiliar, luego simplifica con la instrucción tst.
 * 
 * for ( i= 1; i<10; i++ ){
 * if( i&1 )
 * printf("%d es impar\n", i);
 * else
 * printf("%d es par\n", i);
 * }
**/
 
 //@Autor Ramirez Villa Jesus Pablo
 //@GithubAutor PabloVilla1999
 //@Date 08 Diciembre 2021

using namespace std;

int main()
{
    for(int i=1; i<10; i++)
    {
        if(i&1)
        {
            printf("%d es impar\n", i);
        }
        else
        {
            printf("%d es par\n", i);
        }
    }
}
