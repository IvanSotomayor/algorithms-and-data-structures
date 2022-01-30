#include <iostream>
#include <vector>
using namespace std;

void busquedaBinaria(vector<int>&array, int clave, int n){ //Complejidad o(log n))
    cout << "(Busqueda binaria) ";
    int inicio, fin, mitad, valor_mitad;
    bool found = false;
    int contador = 0;
    inicio = 0;
    fin = n - 1;
    while(inicio <= fin){
        mitad = (fin + inicio)/2;
        valor_mitad = array[mitad];
        if(clave == valor_mitad){
            cout << "Esta en la posicion: " << mitad <<endl;
            contador++;
            found = true;
            break;
        }
        else if(clave < valor_mitad){
            fin = mitad-1;
            contador++;
        }
        else{
            inicio = mitad + 1;
            contador++;
        }
    }
    if(found == false){
        cout<<-1<<endl;
    }
    cout << "Comparaciones: " << contador << endl;
}