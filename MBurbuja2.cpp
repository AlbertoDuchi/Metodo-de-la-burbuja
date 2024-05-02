#include<iostream>
#include<time.h>
using namespace std;
int main(){
	srand(time(NULL));
	int tamanio=5;
	int A[tamanio], aux;
	cout<<"tamanio: "<<tamanio<<endl;
	cout<<"datos ingresados\n";
	for(int i=0;i<tamanio;i++){
		A[i]=1+rand()%(100-1);
		cout<<A[i]<<" ";
	};
	//ordenar datos
	for(int i=0; i<tamanio;i++){
		for(int j=0;j<tamanio-1;j++){
			if(A[j]>A[j+1]){
				aux=A[j];
				A[j]=A[j+1];
				A[j+1]=aux;
			}
		}
	}
	cout<<"\nLista ordenada\n";
	for(int i=0;i<tamanio;i++){
		cout<<A[i]<<" ";
	};	
	return 0;
}