#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include <unordered_map>

using namespace std;

int main(){
    int testCases;
	while(cin >> testCases){
	    
	    unordered_map<int, int> umap;
	    
		for(int i = 0; i < testCases; i++){
		    int binds;
			scanf("%d",&binds);
			
			while(binds % 3 == 0){
			    binds = binds / 3;
			}
			while(binds % 2 == 0){
			    binds = binds / 2;
			}
			umap[binds] = 1;
		}
		
		if(umap.size() == 1){
		    cout<< "Yes" <<endl;
		}
		else{
		    cout<< "No" <<endl;
		}
	}
	return 0;
}