/* En este caso vamor a poner el practica dos tipos de punteros
  *x --> Este accede a la direccion de memoria y recupera el valor almacenado en ella (desreferencia la direccion de x)
  &x --> Este nos da la direccion en donde se almacena la variable x
*/

#include <iostream>
using namespace std;

int main(){

    cout << "Punteros con variables: "<<endl;
    int i = 3;
    int* ptr = &i;
    int** ptrptr = &ptr;

    cout << "ptr: "<<ptr<<endl; // nos da la direccion en donde se almacena i (*(ptr) == *(&i) == i)
    cout << "*ptr: "<<*ptr<<endl; // nos da el valor a donde apunta el puntero (en este caso a i=3)
    cout << "ptrptr: "<<ptrptr<<endl; // nos da la direccion del puntero que apunta a i 
    cout << "*ptrptr: "<<*ptrptr<<endl; // nos da la direccion donde se almacena i (*(ptrptr) == *(&ptr) == &i)
    cout << "**ptrptr: "<<**ptrptr<<endl; // nos da el valor de i (*(*(ptrptr)) == *(&i) == i)

    cout << "Punteros con arreglos: "<<endl;
    int arr[3];
    int* ptr1 = arr;
    int** pptr1 = &ptr1;
    arr[0] = 10;

    cout <<"&arr[0]: "<< &arr[0] <<endl;// imprime la direccion del primer elemento del arreglo
    cout <<"*&ptr1: "<< *&ptr1 <<endl; // imprime la direccion del primer elemento del arreglo
    cout <<"*pptr1: "<< *pptr1 <<endl; // imprime la direccion del primer elemento del arreglo
    cout <<"**pptr1: "<< **pptr1 <<endl; // imprime el valor del primer elemento del arreglo
    cout <<"arr: "<< arr <<endl; // imprime la direccion del primer elemento del arreglo 
    cout <<"&arr: "<< &arr <<endl; // imprime la direccion del primer elemento del arreglo

    //con esto podemos notar que &arr[0] == *&ptr1 == *pptr1 == arr == &arr indican lo mismo 

    cout << "Punteros con matrices: "<<endl;
    int a[2][4] = {{1,2,3,4}, {5,6,7,8}};

    cout << "a: "<<a<<endl;// es la direccion del primer subarreglo (a == &a[0])
    cout << "a[0]: "<<a[0]<<endl;// este es un puntero que apunta al primer elemento de este subarreglo (a[0] == &a[0][0])
    cout << "a+1: "<<a+1<<endl;// es la direccion del segundo subarreglo (a+1 == &a[1])
    cout << "*(a+1): "<<*(a+1)<<endl;// desreferencia al puntero a+1 (*(a+1) == a[1])
    cout << "*(a+1) +1: "<<*(a+1)+1<<endl;// es un puntero que apunta al segundo elemento del subarreglo a[1] (*(a+1)+1 == &a[1][1])
    cout << "*(*(a+1)+1): "<<*(*(a+1)+1)<<endl;// desreferencia la direccion anterior ( *(*(a+1)+1) == a[1][1] )

    /* Si queremos pasar matricez como parametros de funciones podemos hacerlo de la siguiente manera: 
        void f(int a[5][10]) ---> este se usa para cuando quieres trabajr exactamente con un arreglo de exactamente 10columnas y que tenga 5 filas
        void f(int a[][10]) ---> cuando sabes el numero de columnas pero no necesariamente el de filas
        void f(int (*a)[10]) --->a es un puntero a un arreglo de 10 enteros. Funciona igual que el anterior(es util cuando haces calculos como *(a+1))
        void f(int** a) ---> es un puntero a puntero, es decir, cada fila puede estar en cualquier parte de la memoria, no representa una matriz en 2D
                             como las anteriores (este se usa comunmente en matrices dinamicas)
    */


    return 0;
}