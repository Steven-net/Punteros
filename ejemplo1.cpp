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
// como observacion: el cout tiene una sobrecarga especial para punteros char(como const char*), que interpreta el puntero
// como el inicio de una cadena de caracteres terminada en '\0'
    cout << m << endl; // imprime toda la cadena ya que este apunta a una cadena de texto que termina en '\0'
    cout << (void*)m <<endl; // imprime la direccion de memoria de m (este apunta al primer elemento 'H')
    cout << &m << endl; // imprime la direccion de memoria de la variable m (podemos decir que &m es de tipo const char**)
    cout << &m[0] <<endl; // &m[0] es un puntero que apunta al char m[0] por lo que se comporta igual que m 
    cout << *m << endl; // imprime H, desreferencia al puntero y accede al caracter en la posicion 0
}

// Aplicamos Aritmetica de punteros para la suma
void sumaArreglo(int arr[5], int n){ 
        
        int suma =0;
        for(int i= 0; i <n ; ++i){
            suma += *(arr + i);
        }
}


int main(){

    int arr[] = {1,2,3,4,5};


    int *ptr1 = arr;
    int *ptr2 = arr + 2;

    cout << ptr2 -ptr1 <<endl;

    cout << arr << endl; // Te da la direccion del primer elemento
    cout << &arr[0] <<endl; // arr == &arr[0]


    mostrarCadena();

    int t = 2;
    cout << cuadrado(&t)<<endl;

    int y = 5;

    modificaValor(&y);
    cout << "El valor de y es: " << y <<endl;


    int n = 10;
    cout << &n <<endl; // direccion de n
    cout << *&n <<endl; // valor de n

    //Declaracion de un puntero

    int* ptr;
    ptr = &n;
    cout << "La direccion de n es: " << ptr <<endl;
    cout << "El valor de n es: "  << *ptr << endl;
    

    //
    char c = 'A';
    char *ptrch = &c;

    cout << "La direccion de c es: " << ptrch <<endl; // este se interpreta como una cadena
    // si quieres imprimir la direccion en si deberias usar (void*)ptrch
    cout << "El valor de c es: "  << *ptrch << endl; // este 
    
  return 0; 
}