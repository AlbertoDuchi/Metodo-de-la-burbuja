#include<iostream>
#include<time.h>
using namespace std;
//prototipos
void generaNumeros(int A[], int numElementos);
void mostrarNumeros(int A[], int numElementos, string titulo);
void ordenarNumerosBurbuja(int A[],int numElementos);
int main(){
	int numElementos;
	int A[100];
	do{
		cout<<"Numero Elementos: ";
		cin>>numElementos;
		if(numElementos<1 or numElementos>100){
			cout<<"\tError.......!!!!!\n";
		}
	}while(numElementos<1 or numElementos>100);
	generaNumeros(A,numElementos);
	mostrarNumeros(A,numElementos,"Lista original");
	ordenarNumerosBurbuja(A,numElementos);
	mostrarNumeros(A,numElementos,"Lista Ordenada");
	return 0;
};
//detalle de prototipos
void generaNumeros(int A[], int numElementos){
	srand(time(NULL));
	for(int i=0;i<numElementos;i++){
		A[i]=1+rand()%(100-1);	
	};
};
void mostrarNumeros(int A[], int numElementos, string titulo){
	int cuentaNumeros=0;
	cout<<endl<<titulo<<endl;
	for(int i=0;i<numElementos;i++){
		if(cuentaNumeros==10){
			cout<<endl;
			cuentaNumeros=0;
		}
		cout<<A[i]<<"\t";
		cuentaNumeros++;
	}
	cout<<endl;
};
void ordenarNumerosBurbuja(int A[],int numElementos){
	int aux;
	for(int i=0;i<numElementos;i++){
		for(int j=0;j<numElementos-1;j++){
			if(A[j]>A[j+1]){
				aux=A[j];
				A[j]=A[j+1];
				A[j+1]=aux;
			}
		}
	}
};