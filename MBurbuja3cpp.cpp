#include<iostream>
using namespace std;
void mostrarDatos(int A[], int tamanio,string titulo);
void ordenaDatosBurbuja(int A[], int tamanio);
int main(){
	int A[]={9,5,2,7,1};
	int tamanio=sizeof A/sizeof A[0];
	mostrarDatos(A, tamanio,"Listado de Datos");
	ordenaDatosBurbuja(A, tamanio);
	mostrarDatos(A, tamanio,"Listado de Ordenado");
	return 0;
};
void mostrarDatos(int A[], int tamanio,string titulo){
	cout<<endl<<titulo<<endl;
	for(int i=0;i<tamanio;i++){
		cout<<A[i]<<"\t";
	};
	cout<<endl;
};
void ordenaDatosBurbuja(int A[], int tamanio){
	int aux;
	for(int i=0;i<tamanio;i++){
		for(int j=0;j<tamanio-1;j++){
			if(A[j]>A[j+1]){
				aux=A[j];
				A[j]=A[j+1];
				A[j+1]=aux;
			}
		}
	}
};







