/* En este caso vamor a poner el practica dos tipos de punteros
  *x --> Este accede a la direccion de memoria y recupera el valor almacenado en ella (desreferencia la direccion de x)
  &x --> Este nos da la direccion en donde se almacena la variable x
*/

#include <iostream>
using namespace std;

int main(){
    int i = 3;
    int* ptr = &i;
    int** ptrptr = &ptr;

    cout << "ptr: "<<ptr<<endl; // nos da la direccion en donde se almacena i (*(ptr) == *(&i) == i)
    cout << "*ptr: "<<*ptr<<endl; // nos da el valor a donde apunta el puntero (en este caso a i=3)
    cout << "ptrptr: "<<ptrptr<<endl; // nos da la direccion del puntero que apunta a i 
    cout << "*ptrptr: "<<*ptrptr<<endl; // nos da la direccion donde se almacena i (*(ptrptr) == *(&ptr) == &i)
    cout << "**ptrptr: "<<**ptrptr<<endl; // nos da el valor de i (*(*(ptrptr)) == *(&i) == i)

    return 0;
}