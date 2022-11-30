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
#include <utility>



using namespace std;


class Canal {
	public:
	string fecha, hora, punto, ubi;
	long long int fechaNueva;
	string::size_type sz;
	
/*
	int cambiaFecha(){
		
		string fechaGrande="";
		//string fechaMes="";
		
		fechaMes+=fecha[3];
		fechaMes+=fecha[4];
		
		fechaGrande+=fecha[3];
		fechaGrande+=fecha[4];
		fechaGrande+=fecha[0];
		fechaGrande+=fecha[1];
		fechaGrande+=hora[0];
		fechaGrande+=hora[1];
		fechaGrande+=hora[3];
		fechaGrande+=hora[4];
		
		
		fechaNueva=stoll(fechaGrande,&sz);
		
		return fechaNueva;
		/*cout<<fechaNueva<<endl;
		cout<<fecha<<endl;
		cout<<hora<<endl;
		cout<<fecha[3]<<endl;
	}*/

};




int main(int argc, char* argv[]) {


	int cantidad;
	string prefix, ubi;
	vector <string> texto;
		
	int n, aux;
    vector <Canal> lstM, lstR;
    list<int>::iterator itr;
 

	
	
	
	cin >> n;
	cin>>prefix;
	Canal nuevoCanal;

    for (int i = 0; i < n; i++) {
	//Canal nuevoCanal;
    cin >> (nuevoCanal.fecha)>>(nuevoCanal.hora)>>(nuevoCanal.punto)>>(nuevoCanal.ubi);
		if(prefix == (nuevoCanal.ubi).substr(0, 3)){

			
			if (nuevoCanal.punto=="R"){
				lstR.push_back(nuevoCanal);
				//cout<<nuevoCanal.ubi<<endl;
				}
			else{ 
				lstM.push_back(nuevoCanal);	
				}
			}
		}
        
        //Para el mediterraneo
	int i, j;
	long long int fecha1, fecha2;
	for (i = 0; i < lstM.size()-1; i++){
 
		// Last i elements are already
		// in place
		for (j = 0; j < lstM.size()-i-1; j++){
		
		string::size_type sz;
		string fechota="";
		fechota+=lstM[j].fecha[3];
		fechota+=lstM[j].fecha[4];
		fechota+=lstM[j].fecha[0];
		fechota+=lstM[j].fecha[1];
		fecha1=stoll(fechota,&sz);
		
		string fechota2="";
		fechota2+=lstM[j+1].fecha[3];
		fechota2+=lstM[j+1].fecha[4];
		fechota2+=lstM[j+1].fecha[0];
		fechota2+=lstM[j+1].fecha[1];
		fecha2=stoll(fechota2,&sz);
		
		

			if (fecha1 > fecha2){
				swap(lstM[j], lstM[j+1]);
			}
		}
	}
        //Para el rojo

	for (i = 0; i < lstR.size()-1; i++){
 
		// Last i elements are already
		// in place
		for (j = 0; j < lstR.size()-i-1; j++){
		
		string::size_type sz;
		string fechota="";
		fechota+=lstR[j].fecha[3];
		fechota+=lstR[j].fecha[4];
		fechota+=lstR[j].fecha[0];
		fechota+=lstR[j].fecha[1];
		fecha1=stoll(fechota,&sz);
		
		string fechota2="";
		fechota2+=lstR[j+1].fecha[3];
		fechota2+=lstR[j+1].fecha[4];
		fechota2+=lstR[j+1].fecha[0];
		fechota2+=lstR[j+1].fecha[1];
		fecha2=stoll(fechota2,&sz);
		
		

			if (fecha1 > fecha2){
				swap(lstR[j], lstR[j+1]);
			}
		}
	}
	
	
	
	int month=0;
	int eneM=0;
	int febM=0;
	int marM=0;
	int mayM=0;
	int abrM=0;
	int junM=0;
	int julM=0;
	int agoM=0;
	int sepM=0;
	int octM=0;
	int novM=0;
	int dicM=0;
	
	int eneR=0;
	int febR=0;
	int marR=0;
	int abrR=0;
	int mayR=0;
	int junR=0;
	int julR=0;
	int agoR=0;
	int sepR=0;
	int octR=0;
	int novR=0;
	int dicR=0;

	
	//--------------------CONTADOR DE REPETICIONES POR MES-----------------------
	//MEDITERRANEO
	for (i=0;i<lstM.size();i++){
		string::size_type sz;
		int fechaMesFinal;
		string fechaMes="";
		fechaMes+=lstM[i].fecha[3];
		fechaMes+=lstM[i].fecha[4];
		fechaMesFinal=stoll(fechaMes,&sz);
		
		if (fechaMesFinal==01){
			eneM++;
		}
		if (fechaMesFinal==02){
			febM++;
		}
		if (fechaMesFinal==03){
			marM++;
		}
		if (fechaMesFinal==04){
			abrM++;
		}
		if (fechaMesFinal==05){
			mayM++;
		}
		if (fechaMesFinal==06){
			junM++;
		}
		if (fechaMesFinal==07){
			julM++;
		}
		if (fechaMesFinal==8){
			agoM++;
		}
		if (fechaMesFinal==9){
			sepM++;
		}
		if (fechaMesFinal==10){
			octM++;
		}
		if (fechaMesFinal==11){
			novM++;
		}
		if (fechaMesFinal==12){
			dicM++;
		}
	}
	
	
	//ROJO
	for (i=0;i<lstR.size();i++){
		string::size_type sz;
		int fechaMesFinal;
		string fechaMes="";
		fechaMes+=lstR[i].fecha[3];
		fechaMes+=lstR[i].fecha[4];
		fechaMesFinal=stoll(fechaMes,&sz);
		
		if (fechaMesFinal==01){
			eneR++;
		}
		if (fechaMesFinal==02){
			febR++;
		}
		if (fechaMesFinal==03){
			marR++;
		}
		if (fechaMesFinal==04){
			abrR++;
		}
		if (fechaMesFinal==05){
			mayR++;
		}
		if (fechaMesFinal==06){
			junR++;
		}
		if (fechaMesFinal==07){
			julR++;
		}
		if (fechaMesFinal==8){
			agoR++;
		}
		if (fechaMesFinal==9){
			sepR++;
		}
		if (fechaMesFinal==10){
			octR++;
		}
		if (fechaMesFinal==11){
			novR++;
		}
		if (fechaMesFinal==12){
			dicR++;
		}
	}
	
	//-------------IMPRESION DE SALIDAS-------------------
	//ENERO MEDITERRANEO
	if (eneM or eneR){cout<<"jan"<<endl;}
	if (eneM){cout<<"m "<<eneM<<": ";
	
	for (i=0;i<lstM.size();i++){
		string::size_type sz;
		int fechaMesFinal;
		string fechaMes="";
		fechaMes+=lstM[i].fecha[3];
		fechaMes+=lstM[i].fecha[4];
		fechaMesFinal=stoll(fechaMes,&sz);
		
		if (fechaMesFinal!=01){
			break;
		}
		cout<<lstM[i].ubi<<" ";
	}
}
	
	
	//ENERO ROJO
	if (febM or febR){cout<<endl;}
	if (febR){cout<<"r "<<eneR<<": ";
	for (i=0;i<lstR.size();i++){
		string::size_type sz;
		int fechaMesFinal;
		string fechaMes="";
		fechaMes+=lstM[i].fecha[3];
		fechaMes+=lstM[i].fecha[4];
		fechaMesFinal=stoll(fechaMes,&sz);
		
		cout<<lstR[i].ubi<<" ";
		
		if (fechaMesFinal!=01){
			break;
		}

	}
}

	//FEBRERO MEDITERRANEO
	cout<<endl;
	if (febM or febR){cout<<"feb"<<endl;}
	if (eneM){cout<<"m "<<febM<<": ";
	
	for (i=0;i<lstM.size();i++){
		string::size_type sz;
		int fechaMesFinal;
		string fechaMes="";
		fechaMes+=lstM[i].fecha[3];
		fechaMes+=lstM[i].fecha[4];
		fechaMesFinal=stoll(fechaMes,&sz);
		
		if (fechaMesFinal==2){
			cout<<lstM[i].ubi<<" ";
		}

	}
}
	
	
	//FEBRERO ROJO
	cout<<endl;
	if (eneM){cout<<"m "<<febR<<": ";
	for (i=0;i<lstR.size();i++){
		string::size_type sz;
		int fechaMesFinal;
		string fechaMes="";
		fechaMes+=lstR[i].fecha[3];
		fechaMes+=lstR[i].fecha[4];
		fechaMesFinal=stoll(fechaMes,&sz);
		
		if (fechaMesFinal==2){
			cout<<lstR[i].ubi<<" ";
		}

	}
}

	//MARZO MEDITERRANEO
	cout<<endl;
	if (marM or marR){cout<<"mar"<<endl;}
	if (marM){cout<<"m "<<febM<<": ";
	
	for (i=0;i<lstM.size();i++){
		string::size_type sz;
		int fechaMesFinal;
		string fechaMes="";
		fechaMes+=lstM[i].fecha[3];
		fechaMes+=lstM[i].fecha[4];
		fechaMesFinal=stoll(fechaMes,&sz);
		
		if (fechaMesFinal==3){
			cout<<lstM[i].ubi<<" ";
		}

	}
}
	
	
	//MARZO ROJO
	cout<<endl;
	if (marR){cout<<"r "<<marR<<": ";
	for (i=0;i<lstR.size();i++){
		string::size_type sz;
		int fechaMesFinal;
		string fechaMes="";
		fechaMes+=lstR[i].fecha[3];
		fechaMes+=lstR[i].fecha[4];
		fechaMesFinal=stoll(fechaMes,&sz);
		
		if (fechaMesFinal==3){
			cout<<lstR[i].ubi<<" ";
		}

	}
}

	//ABRIL MEDITERRANEO
	cout<<endl;
	if (abrM or abrR){cout<<"abr"<<endl;}
	if (abrM){cout<<"m "<<abrM<<": ";
	
	for (i=0;i<lstM.size();i++){
		string::size_type sz;
		int fechaMesFinal;
		string fechaMes="";
		fechaMes+=lstM[i].fecha[3];
		fechaMes+=lstM[i].fecha[4];
		fechaMesFinal=stoll(fechaMes,&sz);
		
		if (fechaMesFinal==4){
			cout<<lstM[i].ubi<<" ";
		}

	}
}
	
	
	//ABRIL ROJO
	cout<<endl;
	if (abrR){cout<<"r "<<abrR<<": ";
	for (i=0;i<lstR.size();i++){
		string::size_type sz;
		int fechaMesFinal;
		string fechaMes="";
		fechaMes+=lstR[i].fecha[3];
		fechaMes+=lstR[i].fecha[4];
		fechaMesFinal=stoll(fechaMes,&sz);
		
		if (fechaMesFinal==4){
			cout<<lstR[i].ubi<<" ";
		}

	}
}


	//MAYO MEDITERRANEO
	cout<<endl;
	if (mayM or mayR){cout<<"may"<<endl;}
	if (mayM){cout<<"m "<<mayM<<": ";
	
	for (i=0;i<lstM.size();i++){
		string::size_type sz;
		int fechaMesFinal;
		string fechaMes="";
		fechaMes+=lstM[i].fecha[3];
		fechaMes+=lstM[i].fecha[4];
		fechaMesFinal=stoll(fechaMes,&sz);
		
		if (fechaMesFinal==5){
			cout<<lstM[i].ubi<<" ";
		}

	}
}
	
	
	//MAYO ROJO
	cout<<endl;
	if (mayR){cout<<"r "<<mayR<<": ";
	for (i=0;i<lstR.size();i++){
		string::size_type sz;
		int fechaMesFinal;
		string fechaMes="";
		fechaMes+=lstR[i].fecha[3];
		fechaMes+=lstR[i].fecha[4];
		fechaMesFinal=stoll(fechaMes,&sz);
		
		if (fechaMesFinal==5){
			cout<<lstR[i].ubi<<" ";
		}

	}
}

	//JUNIO MEDITERRANEO
	cout<<endl;
	if (junM or junR){cout<<"jun"<<endl;}
	if (junM){cout<<"m "<<junM<<": ";
	
	for (i=0;i<lstM.size();i++){
		string::size_type sz;
		int fechaMesFinal;
		string fechaMes="";
		fechaMes+=lstM[i].fecha[3];
		fechaMes+=lstM[i].fecha[4];
		fechaMesFinal=stoll(fechaMes,&sz);
		
		if (fechaMesFinal==6){
			cout<<lstM[i].ubi<<" ";
		}

	}
}
	
	
	//JUNIO ROJO
	cout<<endl;
	if (junR){cout<<"r "<<junR<<": ";
	for (i=0;i<lstR.size();i++){
		string::size_type sz;
		int fechaMesFinal;
		string fechaMes="";
		fechaMes+=lstR[i].fecha[3];
		fechaMes+=lstR[i].fecha[4];
		fechaMesFinal=stoll(fechaMes,&sz);
		
		if (fechaMesFinal==6){
			cout<<lstR[i].ubi<<" ";
		}

	}
}

	//JULIO MEDITERRANEO
	cout<<endl;
	if (julM or julR){cout<<"jul"<<endl;}
	if (julM){cout<<"m "<<julM<<": ";
	
	for (i=0;i<lstM.size();i++){
		string::size_type sz;
		int fechaMesFinal;
		string fechaMes="";
		fechaMes+=lstM[i].fecha[3];
		fechaMes+=lstM[i].fecha[4];
		fechaMesFinal=stoll(fechaMes,&sz);
		
		if (fechaMesFinal==7){
			cout<<lstM[i].ubi<<" ";
		}

	}
}
	
	
	//JULIO ROJO
	cout<<endl;
	if (agoR){cout<<"r "<<julR<<": ";
	for (i=0;i<lstR.size();i++){
		string::size_type sz;
		int fechaMesFinal;
		string fechaMes="";
		fechaMes+=lstR[i].fecha[3];
		fechaMes+=lstR[i].fecha[4];
		fechaMesFinal=stoll(fechaMes,&sz);
		
		if (fechaMesFinal==7){
			cout<<lstR[i].ubi<<" ";
		}

	}
}

	//AGOSTO MEDITERRANEO
	cout<<endl;
	if (agoM or agoR){cout<<"ago"<<endl;}
	if (agoM){cout<<"m "<<agoM<<": ";
	
	for (i=0;i<lstM.size();i++){
		string::size_type sz;
		int fechaMesFinal;
		string fechaMes="";
		fechaMes+=lstM[i].fecha[3];
		fechaMes+=lstM[i].fecha[4];
		fechaMesFinal=stoll(fechaMes,&sz);
		
		if (fechaMesFinal==8){
			cout<<lstM[i].ubi<<" ";
		}

	}
}
	
	
	//AGOSTO ROJO
	cout<<endl;
	if (agoR){cout<<"r "<<agoR<<": ";
	for (i=0;i<lstR.size();i++){
		string::size_type sz;
		int fechaMesFinal;
		string fechaMes="";
		fechaMes+=lstR[i].fecha[3];
		fechaMes+=lstR[i].fecha[4];
		fechaMesFinal=stoll(fechaMes,&sz);
		
		if (fechaMesFinal==8){
			cout<<lstR[i].ubi<<" ";
		}

	}
}

	//SEPTIEMBRE MEDITERRANEO
	cout<<endl;
	if (sepM or sepR){cout<<"sep"<<endl;}
	if (sepM){cout<<"m "<<sepM<<": ";
	
	for (i=0;i<lstM.size();i++){
		string::size_type sz;
		int fechaMesFinal;
		string fechaMes="";
		fechaMes+=lstM[i].fecha[3];
		fechaMes+=lstM[i].fecha[4];
		fechaMesFinal=stoll(fechaMes,&sz);
		
		if (fechaMesFinal==9){
			cout<<lstM[i].ubi<<" ";
		}

	}
}
	
	
	//SEMPTIEMBRE ROJO
	cout<<endl;
	if (sepR){cout<<"r "<<sepR<<": ";
	for (i=0;i<lstR.size();i++){
		string::size_type sz;
		int fechaMesFinal;
		string fechaMes="";
		fechaMes+=lstR[i].fecha[3];
		fechaMes+=lstR[i].fecha[4];
		fechaMesFinal=stoll(fechaMes,&sz);
		
		if (fechaMesFinal==9){
			cout<<lstR[i].ubi<<" ";
		}

	}
}

	//OCTUBRE MEDITERRANEO
	cout<<endl;
	if (octM or octR){cout<<"oct"<<endl;}
	if (octR){cout<<"m "<<octM<<": ";
	
	for (i=0;i<lstM.size();i++){
		string::size_type sz;
		int fechaMesFinal;
		string fechaMes="";
		fechaMes+=lstM[i].fecha[3];
		fechaMes+=lstM[i].fecha[4];
		fechaMesFinal=stoll(fechaMes,&sz);
		
		if (fechaMesFinal==10){
			cout<<lstM[i].ubi<<" ";
		}

	}
}
	
	
	//OCTUBRE ROJO
	cout<<endl;
	if (octR){cout<<"r "<<octR<<": ";
	for (i=0;i<lstR.size();i++){
		string::size_type sz;
		int fechaMesFinal;
		string fechaMes="";
		fechaMes+=lstR[i].fecha[3];
		fechaMes+=lstR[i].fecha[4];
		fechaMesFinal=stoll(fechaMes,&sz);
		
		if (fechaMesFinal==10){
			cout<<lstR[i].ubi<<" ";
		}

	}
}

	
	
        
        
    };






	//Ordenamiento
	/*
	int i, j;
	for (i = 0; i < lstM.size(); i++){
 
		// Last i elements are already
		// in place
		for (j = 0; j < lstM.size(); j++){
			if (lstM[j] > lstM[j + 1]){
				swap(lstM[j], lstM[j+1]);
			}
		}
	}*/
  


	//cout<<"la cantidad de elementos es de "<<lstR.size()<<" y el prefijo es "<<prefix<<endl;
	
				/*
			//ENERO 
			if(fechaMes=="01"){
				if (jan==0){
					cout<<"jan: "<<endl;
					jan++;
					}
				if (nuevoCanal.punto=="R"){
					
					contaR++;
					cout<<"R "<<contaR<<": "<<nuevoCanal.ubi<<endl;}
				else{
					contaM++;
					cout<<"M "<<contaM<<": "<<nuevoCanal.ubi<<endl;}
				
				} 
			
			//FEBRERO 
			if(fechaMes=="02"){
				if (feb==0){
					cout<<"feb: "<<endl;
					feb++;
					}
				if (nuevoCanal.punto=="R"){
					
					contaR++;
					cout<<"R "<<contaR<<": "<<nuevoCanal.ubi<<endl;}
				else{
					contaM++;
					cout<<"M "<<contaM<<": "<<nuevoCanal.ubi<<endl;}
				
				} */
	
	
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




