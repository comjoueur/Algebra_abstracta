#include"CESAR.h"
//funcion modulo o resto
int mod(int a,int b){
	int d=a-(a/b)*b;
	return (d>=0) ? d : d+b;
}

Cesar::Cesar(int _clave){
	clave= _clave;
}
string Cesar::cifrar(string p){
	for(int i=0;i<p.size();i++){
		p[i]=alfabeto[mod(alfabeto.find(p[i])+clave,alfabeto.size())];;
	}
	return p;
}
string Cesar::descifrar(string p){
	for(int i=0;i<p.size();i++){
		p[i]=alfabeto[mod(alfabeto.find(p[i])-clave,alfabeto.size())];
	}
	return p;
}