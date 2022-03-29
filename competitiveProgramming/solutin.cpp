#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

void sortString(string &str)
{
   sort(str.begin(), str.end());
   cout << str;
}
 
int main(){
    
    int cont = 0;
	int testCases;
	scanf("%d",&testCases);
	
	while(cont < testCases){
	    
	    char caracter[1000];
		scanf("%s",&caracter);
		int stringSize = strlen(caracter);
		string final = "";
		
		for(int i = 0;i < stringSize; i++){
		    char firstChar = caracter[i];
		    char secondChar = caracter[i + 1];
			if(firstChar != secondChar){
			    final += firstChar;
			}else{
				i++;
			}
		}
		
		sortString(final);
		cont++;
	}
	return 0;
}
