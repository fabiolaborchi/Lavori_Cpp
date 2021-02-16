/*
 *Pilacin.cpp
 *Author: Fabiola Borchi
 *Date: 18 Gennaio 2021
*/
#include <iostream>
using namespace std;
class Pila{
	public:
	string data[100];
	int p=0;
	
	bool isEmply(){
		return p==0;
	}
	void push(string parola){
		if(p>=100){
			cout<<"\n\t\tErrore:(\n";
			return;//non restituisce niente 
		}
			data[p]=parola;
			p++;
	}
	string pop(){
		if(p<=0){
			cout<<"\n\t\tErrore:(\n";
			return "";
		}
		p--;
		return data[p];
	}
};
int main (){
	Pila pila;
	string parola;
	while(true){
		cout<<"inserisci una parola: ";
		cin>>parola;
		if(parola=="basta") break;
		pila.push(parola);
	}
	while(!pila.isEmply()){
		cout<<pila.pop()<<endl;
	}
	return 0;
}


