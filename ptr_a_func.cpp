/* PUNTEROS A FUNCIONES
    Son variables que pueden almacenar la direccion de una funcion y permiten llamar a esa funcion a traves de un puntero.
    Son utiles cuando quieres pasar funciones como parametros, almacenar multiples funciones para elegir dinamicamente, etc.
 Ahora presentaremos un ejemplo:
   Escriba un programa que calcule el maximo de dos numeros utilizando puntero a funcion y una funcion que retorne puntero
*/
#include <iostream>
using namespace std;

//Funcion que retorna un puntero al mayor
int* Maximo(int* n1, int* n2){
    if(*n1 < *n2){
        return n2;
    }else{
        return n1;
    }
}

int main(){
    int n1= 3;
    int n2 = 6;

    int* (*comparacion)(int*,int*) = Maximo; // Declaracion y designacion del puntero a funcion 

    cout << "El mayor numero entre "<<n1<<" y "<<n2<< " es "<< *comparacion(&n1,&n2)<<endl;

    return 0;
}