#include <iostream>
#include <vector>
using namespace std;

void IntercambioSort(vector<int>&array){ 
    cout << "Intercambio: ";
    int auxiliar;
    for(int i = 0; i < array.size()-1; i++){
        for(int j = i + 1; j < array.size(); j++){
            if(array[j] < array[i]){
                auxiliar = array[j];
                array[j] = array[i];
                array[i] = auxiliar;
            }
        }
    }
}

