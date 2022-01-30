#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    vector <int> arreglo_uno(5);
    vector <int> arreglo_dos(7);
    vector <int> arreglo_tres(13);
    vector <int> arreglo_cuatro(20);
    vector <vector<int>> arreglos = {arreglo_uno,arreglo_dos,arreglo_tres,arreglo_cuatro};
    
    //Ordenamientos
    for(int i = 0; i < arreglos.size(); i++){
        cout << "Arreglo "<< i + 1<<endl;
        generarArreglo(arreglos[i]);
        IntercambioSort(arreglos[i]);
        imprimirArreglo(arreglos[i]);
        bubbleSort(arreglos[i]);
        imprimirArreglo(arreglos[i]);
        cout << "Quick Sort; ";
        quickSort(arreglos[i],0,arreglos.size()-1);
        imprimirArreglo(arreglos[i]);
        cout << "Merge Sort: ";
        mergeSort(arreglos[i],0,arreglos.size()-1);
        imprimirArreglo(arreglos[i]);
        cout << endl;
    }
    cout << endl;
    
    //Busquedas
    cout << "Busquedas: "<<endl;
    int numeroToBuscar;
    vector <int> numeros = {95,8,78,25,18,77,75,71,47,7,23,73,28,73,44,81,20,38,71,68};
    mergeSort(numeros,0,numeros.size()-1);
    imprimirArreglo(numeros);
    for(int i = 0; i < 4; i++){
        cout << "Dame un numero a buscar: ";
        cin >> numeroToBuscar;
        cout << "--------------------------------------"<<endl;
        busquedaSecuencial(numeros,numeroToBuscar);
        busquedaBinaria(numeros,numeroToBuscar,20);
        cout << "--------------------------------------" <<endl;
    }
    return 0;
}