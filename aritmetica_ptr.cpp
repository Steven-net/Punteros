/* La aritmetica de punteros te permite movilizarte entre ubicaciones en la memoria, generalmente 
entre elementos de un arreglo. Tenemos las siguientes operaciones permitidas:
*/
#include <iostream>
using namespace std;

int main(){
    int arr[] = {6,0,9,6,5,4};
    int* ptr = arr;
    
    //SUMA DE PUNTERO Y UN ENTERO: cuando agregamos un entero n a un puntero este genera otro puntero que avanza n posiciones en la memoria
    cout << ptr <<endl;
    ptr++; // se mueve al proximo elemento del arreglo (arr+1 * sizeof(int))
    cout << ptr<<endl;

    int* ptr2 = arr + 3; // mueve el ptr2 para apuntar al cuarto elemento del arreglo (arr+3 * sizeof(int))
    cout << ptr2<<endl;

    //RESTA DE UN PUNTERO Y UN ENTERO: este, si le restamos un n entero, retrocese n posiciones en la memoria
    cout << ptr<< endl; // ptr este en la posicion arr + 1
    ptr--; 
    cout << ptr << endl; // deberia devolver el valor inicial de ptr (arr)

    //RESTA DE DOS PUNTEROS: devuelve la cantidad de elementos del tipo dado que acabe entre los dos punteros.
    cout << ptr2 - ptr<<endl;

    //COMPARACION DE PUNTEROS: se pueden comparar mediante operadores relacionales como "==", "<=", ">=" y "!="

    // Recordemos que: arr[3] == *(arr+3)
    return 0;
}
