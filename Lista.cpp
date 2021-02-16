/*
    Author:Borchi Fabiola
    Date: 05/02/2021
    Lista.cpp
*/
#include <iostream>
#include <cstdlib>
using namespace std;
class Lista{
    private:
    string *data;
    int l;
    int top=0;
    public:
    Lista(int lunghezza){
        l=lunghezza;
        data=new string[l];
        }
    string read(int i){
        return data[i];
    }
    void stampa (){
        for(int i=0; i<l; i++){
            cout<<read(i)<<endl;
        }
    }
    int len(){ return l;}
    string get(int i){return data [i];}
    void put (string v){
      if(top<100){
          data[top]=v;
          top++;
      }
        
    }
    
    string generaStringa(){
        string a;
        int b=(rand()%20)+1;
        for(int i=0; i<b; i++){
            a=a+"*";
        }
        return a;
    }
};

int main()
{   
    Lista v(100);
    for (int i=0; i<100; i++){
           v.put(v.generaStringa());
    }
    v.stampa();
    return 0;
}
