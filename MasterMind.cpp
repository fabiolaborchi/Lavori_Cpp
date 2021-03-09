#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
/*
 *MasterMind
 *Author: Fabiola Borchi
 *Date: 05/03/2021
*/
class MasterMind{
	private:
	int test[5];
	int mappa[5];
	void init(){
		srand(time(NULL));
		for(int i=0; i<5; i++){
			mappa[i]=(rand()%10)+1;
			for (int j=0; j<i; j++){
                if (mappa[i]==mappa[j]){
                    i--;
                    break;
                }
            }
		}	
	}
	public:
	MasterMind(){
		init();
	}
	
	void stampa(){
		for(int i=0; i<5; i++){
			cout<<mappa[i]<<"\t";
		}
		cout<<endl;
	}
	
	void play(){
		
		cout<<"inserisci 5 numeri interi"<<endl;
		for(int i=0; i<5; i++){
			cin>>test[i];
		}
		for(int i=0; i<5; i++){
			cout<<test[i]<<"\t";
		}
	}

	bool check(){
		int strike=0, ball=0;
		for(int i=0; i<5; i++){
			for(int j=0; j<5; j++){
				if(test[i]==mappa[j]){
					if (i==j){
					strike++;
					}
					else{
					ball++;
					}
				}
			}
		}
		cout<<endl;
		cout<<"strike: "<<strike<<endl<<"ball: "<<ball<<endl;
		return strike==5;
	}
};

int main ()
{
	MasterMind m;
	m.stampa();

	do{
		m.play();
	} while(!m.check());
return 0;
}

