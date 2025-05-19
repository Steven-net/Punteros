#include <iostream>
using namespace std;

void Invertir(int* arr, int n){
    int inicio = 0;
    int final = n-1;

    while( inicio <= final){
        swap(*(arr + inicio), *(arr + final));
        inicio++;
        final--;
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