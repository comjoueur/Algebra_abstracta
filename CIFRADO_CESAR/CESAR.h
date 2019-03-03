#include<iostream>
#include<cstring>
using namespace std;

//funcion modulo o resto
int mod(int,int);

//Cesar cifrado y descifrado
struct Cesar{
	string alfabeto="ABCDEFGHIJKLMNOPQRSTUVWXYZ _-abcdefghijklmnopqrstuvwxyz0123456789";// alfabeto a trabajar
	int clave;//clave para cifrado
	Cesar(int);//constructor que recibe la clave
	string cifrar(string);//funcion que cifra una palabra
	string descifrar(string);//funcion que descifra una palabra
};
