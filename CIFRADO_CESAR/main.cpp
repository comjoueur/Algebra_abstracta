#include "CESAR.h"

int main(){
	cout<<"Introduzca la palabra u oracion"<<endl;
	string p;//palabta a cifrar o descifrar
	getline(cin,p);//entrada de la palabra
	
	cout<<"Introduzca la clave"<<endl;
	int clave;//clave a trabajar
	cin>>clave;//entrada de la clave
	
	Cesar cesar(clave);//declaramos una instancia del cifrado
	cout<<"introduzca un numero"<<endl;
	cout<<"Cifrar(1)"<<endl;
	cout<<"Descifrar(2)"<<endl;
	int g;
	cin>>g;
	if(g==1){
	cout<<"el cifrado es"<<endl;
	cout<<cesar.cifrar(p)<<endl;//imprimos el cifrado la palabra
	}
	else{
		cout<<"el mensaje es"<<endl;
		cout<<cesar.descifrar(p)<<endl;//deciframos el cifrado de la palabra
	}
}