#include <iostream>
using namespace std;

int main(){
    int i = 3;
    int* ptr = &i;
    int** ptrptr = &ptr;

    cout << "ptr: "<<ptr<<endl; // nos da la direccion en donde se almacena i
    cout << "*ptr: "<<*ptr<<endl; // nos da el valor a donde apunta el puntero (en este caso a i=3)
    cout << "ptrptr: "<<ptrptr<<endl; // nos da la direccion 
    cout << "*ptrptr: "<<*ptrptr<<endl;
    cout << "**ptrptr: "<<**ptrptr<<endl;

    return 0;
}