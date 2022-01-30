#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &array){ //Complejidad o(n²)
    cout << "Burbuja: ";
    bool flag = true;
	int auxiliar;
	for(int i = 0; i < array.size()-1 && flag; i++){
		flag = false;
		for(int j = 0; j < array.size()-1-i; j++){
			if(array[j+1] < array[j]){
				auxiliar = array[j];
				array[j] = array[j+1];
				array[j+1] = auxiliar;
				flag = true;
			}
		}
	}
}
