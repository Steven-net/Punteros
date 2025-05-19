//Usando Aritmetica de punteros implemente una funcion para invertir un arreglo de enteros

#include <iostream>
using namespace std;

void Invertir(int* arr, int n){
    int* inicio = arr; // puntero que apunta al primer elemento
    int* final =  arr + n-1; // puntero que apuntas al ultimo elemento 

    while( inicio < final){
        swap(*inicio, *final);
        inicio++; // se dezplaza un elemento a la derecha
        final--; // se desplaza un elemento a la izquierda
    }
}

void print(int arr[], int n){
    for(int i =0; i<n; i++){
        cout << arr[i]<< " ";
    }
    cout << endl;
}

int main(){
    int n = 5;
    int arr[n] = {1,2,3,4,5};

    cout << "Arreglo: "<<endl;
    print(arr,n);
    Invertir(arr,n);
    cout << "Arreglo invertida: "<<endl;
    print(arr,n);

    return 0;
}