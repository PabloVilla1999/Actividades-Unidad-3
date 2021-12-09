#include <iostream>
/**
 * Capitulo 2 Ejercicio #2.1
 * Basándonos en los ejemplos anteriores, escribe un bucle for que imprima los 50
 * primeros números pares naturales en orden inverso (desde 100 hasta 2 en pasos de 2). 
**/
 
 //@Autor Ramirez Villa Jesus Pablo
 //@GithubAutor PabloVilla1999
 //@Date 16 Septiembre 2021

using namespace std;

int main()
{
    int Num=100;
    for(Num; Num>=2; Num=Num-2)
    {
        cout<<Num<<"\n";
    }
    return 0;
}
