#include <iostream>
#include <vector>
using namespace std;

void busquedaSecuencial(vector<int>&array,int elemento){ //Complejidad o(n)
    cout << "(Busqueda Secuencial) ";
    int contador = 0;
    bool found = false;
    for(int i = 0; i < array.size(); i++){
        if(array[i] == elemento){
            contador++;
            cout << "Se encontro en el indice: " << i << endl;
            found = true;
            break;
        }
        contador++;
    }
    if(found == false){
        cout<<-1<<endl;
    }
    cout << "Comparaciones: "<<contador<<endl;
}