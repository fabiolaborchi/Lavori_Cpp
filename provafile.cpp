#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
	//creazione di un nuovo file
	ofstream myFile("prova.txt");
	myFile <<"Prima frase da scrivere su questo file"<<endl;
	myFile <<"Seconda frase da scrivere su questo file"<<endl;
	myFile.close();
	
	//lettura di un file esistente
	string s;
	ifstream myFile2("prova.txt");
	while (getline(myFile2,s)){
		cout<<s;
		cout<<endl;
	}
	myFile2.close();
return 0;
}

