#include<iostream>
using namespace std;
int main(){
	int A[]={7,2,6,1,3,5}, aux;
	int tamanio= sizeof A/sizeof A[0];
	cout<<"tamanio: "<<tamanio<<endl;
	cout<<"datos ingresados\n";
	for(int i=0;i<tamanio;i++){
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