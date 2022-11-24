// =================================================================
//
// File: main.cpp
// Author: Juan Manuel González Ascencio
// Date: 15 octubre 2022
//
// =================================================================
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <list>



using namespace std;


class Canal {
	public:
	string fecha, hora, punto, ubi;
	long long int fechaNueva;
	string::size_type sz;
	

	void cambiaFecha(){
		
		string fechaGrande="";
		
		fechaGrande+=fecha[3];
		fechaGrande+=fecha[4];
		fechaGrande+=fecha[0];
		fechaGrande+=fecha[1];
		fechaGrande+=hora[0];
		fechaGrande+=hora[1];
		fechaGrande+=hora[3];
		fechaGrande+=hora[4];
		
		fechaNueva=stoll(fechaGrande,&sz);
		cout<<fechaNueva<<endl;
		cout<<fecha<<endl;
		cout<<hora<<endl;
		cout<<fecha[3]<<endl;
	}

};


int main(int argc, char* argv[]) {


	int cantidad;
	string prefix, ubi;
	vector <string> texto;
		
	int n, aux;
    list<Canal> lstM, lstR;
    list<int>::iterator itr;
 

	
	
	
	cin >> n;
	cin>>prefix;
	Canal nuevoCanal;
    for (int i = 0; i < n; i++) {
	//Canal nuevoCanal;
    cin >> (nuevoCanal.fecha)>>(nuevoCanal.hora)>>(nuevoCanal.punto)>>(nuevoCanal.ubi);
		if(prefix == (nuevoCanal.ubi).substr(0, 3)){
			if(nuevoCanal.punto=="R"){
				//if (nuevoCanal.fec)
				}
			else{
				lstM.push_back(nuevoCanal);	
				}
		}
        
    }
    nuevoCanal.fecha = "25-07-20";
    cout<<nuevoCanal.fecha<<endl;







	//Ordenamiento



	cout<<"la cantidad de elementos es de "<<lstR.size()<<" y el prefijo es "<<prefix<<endl;
	
	
	
	
	/*Canal nuevoCanal;
	nuevoCanal.fecha="25-07-20";
	nuevoCanal.hora="20:10";
	nuevoCanal.cambiaFecha();*/
	//cout<<nuevoCanal.fechaNueva;
	
/*
	for (int i=0; i<prefix.length(); i++){
		if (ubi[i]!=prefix[i]){
			respuesta=false;
		}*/


};



