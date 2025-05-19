//Incluimos ejemplos simples con punteros para conocer y familiarizarse con ello

#include <iostream>
using namespace std;

int cuadrado(int* ptr){
    return (*ptr) * (*ptr);
}

void modificaValor(int *p){
    *p = 50;
}


void mostrarCadena(){
    const char* m = "Hola Mundo";
    cout << m << endl; // direccion del primer elemento del arreglo de caracteres (en este caso direccion de H)
    cout << (void*)m <<endl;
    cout << &m << endl; 
    cout << &m[0] <<endl;
    cout << *m << endl; // imprime H
}

// Aplicamos Aritmetica de punteros para la suma
void sumaArreglo(int arr[5], int n){
        cout << sizeof(arr) <<endl;
        int suma =0;
        for(int i= 0; i <n ; ++i){
            suma += *(arr + i);
        }
}


int main(){

    int arr[] = {1,2,3,4,5};

    cout << sizeof(arr) << endl;
    sumaArreglo(arr,5);

    int *ptr1 = arr;
    int *ptr2 = arr + 2;

    cout << ptr2 -ptr1 <<endl;

    cout << arr << endl;
    cout << &arr[0] <<endl;

    //sumaArreglo(arr, n);

    mostrarCadena();

    int t = 2;
    cout << cuadrado(&t);
   


    int y = 5;

    modificaValor(&y);
    cout << "El valor de y es: " << y <<endl;


    int n = 10;
    cout << &n <<endl;
    cout << *&n <<endl;

    //Declaracion de un puntero

    int* ptr;
    ptr = &n;
    cout << "La direccion de n es: " << ptr <<endl;
    cout << "El valor de n es: "  << *ptr << endl;
    

    //
    char c = 'A';
    char *ptrch = &c;

    cout << "La direccion de c es: " << ptrch <<endl;
    cout << "El valor de c es: "  << *ptrch << endl;
    


  return 0; 
}