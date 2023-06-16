#include <iostream>
#include <string.h>
#include <conio.h>

int modular(int numero);
void mostrar26(char cadena[]);
void rotarClavija(char cadena[]);
void mostrarCaracteres(int largo, char cadena[]);
void retornar26(char cadena[]);//se retorna los numeros despues de escribir debido a q se suma 65 al escribir el numero
void retornarNumeros(int largo, char cadena[]);
using namespace std;

int main(void)
{
	int i;
	int j, k, l,m, h;
	static	int rotor0, rotor1, rotor2,rotor3, rotor4;
	char x[2];
	char charAux[2];
	int  Aux, Iaux; //auxiliares para el recorrido DIRECTO e inverso
	int longitud, longitud1;
	
	char rotorDirecto [5][27]={
	//  posiciones              00 01 02 03 04 05 06 07 08 09 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25
	                           { 4,10,12, 5,11, 6, 3,16,21,25,13,19,14,22,24, 7,23,20,18,15, 0, 8, 1,17, 2, 9},// 0
	                           { 0, 9, 3,10,18, 8,17,20,23, 1,11, 7,22,19,12, 2,16, 6,25,13,15,24, 5,21,14, 4},// 1
	                           { 1, 3, 5, 7, 9,11, 2,15,17,19,23,21,25,13,24, 4, 8,22, 6, 0,10,12,20,18,16,14},// 2
	                           { 4,18,14,21,15,25, 9, 0,24,16,20, 8,17, 7,23,11,13, 5,19, 6,10, 3, 2,12,22,1 },// 3 
	                           {21,25, 1,17, 6, 8,19,24,20,15,18, 3,13, 7,11,23, 0,22,12, 9,16,14, 5, 4, 2,10},// 4
	                          };
	
	char rotorInverso [5][27]={
	//  posiciones              00 01 02 03 04 05 06 07 08 09 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25
							   {20,22,24, 6, 0, 3, 5,15,21,25, 1, 4, 2,10,12,19, 7,23,18,11,17, 8,13,16,14, 9},
	                           { 0, 9,15, 2,25,22,17,11, 5, 1, 3,10,14,19,24,20,16, 6, 4,13, 7,23,12, 8,21,18},
	                           {19, 0, 6, 1,15, 2,18, 3,16, 4,20, 5,21,13,25, 7,24, 8,23, 9,22,11,17,10,14,12},
	                           { 7,25,22,21, 0,17,19,13,11, 6,20,15,23,16, 2, 4, 9,12, 1,18,10, 3,24,14, 8, 5},
	                           {16, 2,25,11,23,22, 4,13, 5,19,25,14,18,12,21, 9,20, 3,10, 6, 8, 0,17,15, 7, 1},
							};
							
							
	//  posiciones              00 01 02 03 04 05 06 07 08 09 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25
	char rotorEspejo[27]=      {24,17,20, 7,16,18,11, 3,15,23,13, 6,14,10,12, 8, 4, 1, 5,25, 2,22,21, 9, 0,19};
	

	//  posiciones              00 01 02 03 04 05 06 07 08 09 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25
	char posIniciales[5][27]= {
	//  posiciones              00 01 02 03 04 05 06 07 08 09 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25
	                           {17,18,19,20,21,22,23,24,25, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9,10,11,12,13,14,15,16},
	                           { 5, 6, 7, 8, 9,10,11,12,13,14,15,16,17,18,16,20,21,22,23,24,25, 0, 1, 2, 3, 4},
	                           {22,23,24,25, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9,10,11,12,13,14,15,16,17,18,19,20,21},
	                           {10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25, 0, 1, 2, 3, 4, 5, 6, 7, 8,9 },
	                           { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25},
							  };
	
	char ubicacion0[27];
	char ubicacion1[27];
	char ubicacion2[27];
	char ubicacion3[27];
	char ubicacion4[27];
	
	char posInicial0[27];
	char posInicial1[27];
	char posInicial2[27];
	char posInicial3[27];
	char posInicial4[27];
	
	char letraDigitada[6];
	
	char texto[100000];
	char textoEncriptado[100000];
	
	cout<<"Explicación: Originalmente se tenían 3 rotores, pero en esta simulacion se pueden usar 5 rotores"<<endl;
	cout<<"EMULADOR MAQUINA ENIGMA V. Najum!!!!!!!!!!!!!!!!!!!!!!!\n\n";
	cout<<"********************************************************"<<endl;
	cout<<"PUEDE SELECIONAR ROTORES"<<endl<<endl;
	cout<<"__________     __________     __________     ___________       ___________"<<endl;
	cout<<"ubicacion5     ubicacion4     ubicacion3     ubicacion 2       ubicacion 1 " <<endl<<endl;
	
	cout<<"Explicación: Se tienen 5 piezas circulares, cada una con 26 contactos eléctricos, uno para cada letra del alfabeto"<<endl;
	cout<<"Cada una tenía un cableado diferente, y se conectaban entre sí de forma que la corriente pasaba de una a otra de forma distinta"<<endl;
	cout<<"Estos '5 rotores' simulan esas piezas circulares, cada uno con un cableado diferente"<<endl<<endl;

	cout<<"selecione rotores del 1 al 5:\n" <<endl;
	cout<<"selecione el rotor para la ubicacion 1: ";
	cin>>rotor0;
	rotor0-=1;
	cout<<endl; 

	cout<<"selecione el rotor para la ubicacion 2: ";
	cin>>rotor1;
	rotor1-=1;
	cout<<endl;
	
	cout<<"selecione el rotor para la  ubicacion 3: ";
	cin>>rotor2;
	rotor2-=1;
	cout<<endl;
	
	cout<<"selecione el rotor para la  ubicacion 4: ";
	cin>>rotor3;
	rotor3-=1;
	cout<<endl;
	
	cout<<"selecione el rotor para la  ubicacion 5: ";
	cin>>rotor4;
	rotor4-=1;
	cout<<endl;
	
	
	for(i=0; i<26; i++)
	{
		ubicacion0[i]=rotorDirecto[rotor0][i];
		posInicial0[i]=posIniciales[rotor0][i];
	}
	mostrar26(ubicacion0);
	retornar26(ubicacion0);
	mostrar26(posInicial0);
	retornar26(posInicial0);
	cout<<i;
	cout<<endl<<endl;

	for(j=0; j<26; j++)
	{
		ubicacion1[j]=rotorDirecto[rotor1][j];
		posInicial1[j]=posIniciales[rotor1][j];
	}
	mostrar26(ubicacion1);
	retornar26(ubicacion1);
	mostrar26(posInicial1);
	retornar26(posInicial1);
	cout<<j;
	cout<<endl<<endl;
	

	for(k=0; k<26; k++)
	{
		ubicacion2[k]=rotorDirecto[rotor2][k];
		posInicial2[k]=posIniciales[rotor2][k];
	}
	mostrar26(ubicacion2);
	retornar26(ubicacion2);
	mostrar26(posInicial2);
	retornar26(posInicial2);

	cout<<k;
	cout<<endl<<endl;
	
	for(l=0; l<26; l++)
	{
		ubicacion3[l]=rotorDirecto[rotor3][l];
		posInicial3[l]=posIniciales[rotor3][l];
	}
	mostrar26(ubicacion3);
	retornar26(ubicacion3);
	mostrar26(posInicial3);
	retornar26(posInicial3);

	cout<<l;
	cout<<endl<<endl;	
	
	for(m=0; m<26; m++)
	{
		ubicacion4[m]=rotorDirecto[rotor4][m];
		posInicial4[m]=posIniciales[rotor4][m];
	}
	mostrar26(ubicacion4);
	retornar26(ubicacion4);
	mostrar26(posInicial4);
	retornar26(posInicial4);

	cout<<m;
	cout<<endl<<endl;
	
	cout<<"Explicación: Los rototes tienen una posicion inicial, que se puede cambiar, para que la maquina encripte de forma distinta"<<endl;
	cout<<"En esta simulacion se puede cambiar la posicion inicial de cada rotor"<<endl<<endl;

	cout<<"Puede selecionar posiciones de A - Z.. ingrese en MAYUSCULAS: \n";
	cout<<"ingrese la posicion inicial 1: ";
	cin>>letraDigitada[0];
	letraDigitada[0]-=65;
	
	cout<<"ingrese la posicion inicial 2: ";
	cin>>letraDigitada[1];
	letraDigitada[1]-=65;	
	
	cout<<"ingrese la posicion inicial 3: ";
	cin>>letraDigitada[2];
	letraDigitada[2]-=65;

	cout<<"ingrese la posicion inicial 4: ";
	cin>>letraDigitada[3];
	letraDigitada[3]-=65;
	
	cout<<"ingrese la posicion inicial 5: ";
	cin>>letraDigitada[4];
	letraDigitada[4]-=65;
	
	cout<<endl;
	mostrarCaracteres(strlen(letraDigitada),letraDigitada);
	retornarNumeros(strlen(letraDigitada),letraDigitada);
	
	mostrarCaracteres(strlen(letraDigitada),letraDigitada);
	retornarNumeros(strlen(letraDigitada),letraDigitada);


	cout<<"\nMostrando pos iniciales antes de rotacion: \n";
	mostrarCaracteres(strlen(letraDigitada),letraDigitada);
	retornarNumeros(strlen(letraDigitada),letraDigitada);
	
	cout<<"i,j,k,l,m:"<<i<<j<<k<<l<<m<<endl;

	cout<<"\nMostrando pos iniciales DESPUES de rotacion: \n";


	//ROTAR HASTA QUE LA POSICION INICIAL SEA IGUAL A LA LETRA DIGITADA
	do
	{
		rotarClavija(posInicial0);
		mostrar26(posInicial0);
		retornar26(posInicial0);
	}
	while(posInicial0[0] != letraDigitada[0]);
	
	cout<<"i,j,k,l,m:"<<i<<j<<k<<l<<m<<endl;
	cout<<"i,j,k,l,m:"<<i<<j<<k<<l<<m<<endl;
	cout<<endl;
	
	do
	{
		rotarClavija(posInicial1);
		mostrar26(posInicial1);
		retornar26(posInicial1);
	}
	while(posInicial1[0] != letraDigitada[1]);
	
	cout<<"i,j,k,l,m:"<<i<<j<<k<<l<<m<<endl;
	cout<<"i,j,k,l,m:"<<i<<j<<k<<l<<m<<endl;
	cout<<endl;
	
	do
	{
		rotarClavija(posInicial2);
		mostrar26(posInicial2);
		retornar26(posInicial2);
	}
	while(posInicial2[0] != letraDigitada[2]);
	
	cout<<"i,j,k,l,m:"<<i<<j<<k<<l<<m<<endl;
	cout<<"i,j,k,l,m:"<<i<<j<<k<<l<<m<<endl;
	cout<<endl;
	
	do
	{
		rotarClavija(posInicial3);
		mostrar26(posInicial3);
		retornar26(posInicial3);
	}
	while(posInicial3[0] != letraDigitada[3]);
	
	cout<<"i,j,k,l,m:"<<i<<j<<k<<l<<m<<endl;
	cout<<"i,j,k,l,m:"<<i<<j<<k<<l<<m<<endl;
	cout<<endl;
	
	do
	{
		rotarClavija(posInicial4);
		mostrar26(posInicial4);
		retornar26(posInicial4);
	}
	while(posInicial4[0] != letraDigitada[4]);
	
	cout<<"i,j,k,l,m:"<<i<<j<<k<<l<<m<<endl;
	cout<<"i,j,k,l,m:"<<i<<j<<k<<l<<m<<endl;
	cout<<endl;
	
	//INICIADO EL ALGORITMO DE ENIGMA
	
	//	*SE TRABAJARA CON:
	//		- ubicacion[0]    
	//		- ubicacion[1]      ***** indican que rotores se estan utilizando
	//		- ubicacion[2]
	//		
	//		- posInicial0[]  P[0]
	//		- posInicial1[]  P[1] ******* indican las posiciones inciales despues de ser rotadas
	//		- posInicial2[]  P[2]
	
	cout<<endl;	
	fflush(stdin);
	cout<<"Ingrese EN MAYUSCULAS Y SIN ESPACIOS: \n";
	cout<<"Ingrese el texto que desea encriptar: ";
	cout<<endl<<endl;
	cout<<"--:> ";
	gets(texto);	
	cout<<endl;
	
	longitud = strlen(texto);
	cout<<"LONGITUD........................."<<longitud;
	getchar();
	cout<<"i,j,k,l,m:"<<i<<j<<k<<l<<m<<endl;
	cout<<"i,j,k,l,m:"<<i<<j<<k<<l<<m<<endl;
	cout<<endl;
	//SE REPETIRA ENIGMA PARA CADA UNO DE LOS CARACTERES DEL TEXTO
	
	for(h=0; h<longitud; h++)
	{
		//el primer digito ingresado gira el rotor 1 vez
		
		mostrar26(posInicial0);
		retornar26(posInicial0);
		
		rotarClavija(posInicial0); //ROTAR PRIMERA RUEDA
		
		mostrar26(posInicial0);
		retornar26(posInicial0);

		cout<<endl<<endl;;
		
		mostrar26(posInicial1);
		retornar26(posInicial1);
		
		
		if(posInicial0[0]==posIniciales[rotor0][0])
			rotarClavija(posInicial1);//ROTAR SEGUNDA RUEDA
	
			mostrar26(posInicial1);
			retornar26(posInicial1);
			cout<<endl;

	
		mostrar26(posInicial2);
		retornar26(posInicial2);
		if(posInicial1[0]==posIniciales[rotor1][0])
			rotarClavija(posInicial2);//ROTAR TERCERA RUEDA
			
			mostrar26(posInicial2);
			retornar26(posInicial2);	
			cout<<endl;
			
		mostrar26(posInicial3);
		retornar26(posInicial3);
		if(posInicial2[0]==posIniciales[rotor2][0])
			rotarClavija(posInicial3);//ROTAR CUARTA RUEDA
			
			mostrar26(posInicial3);
			retornar26(posInicial3);	
			cout<<endl;
		
		mostrar26(posInicial4);
		retornar26(posInicial4);
		if(posInicial3[0]==posIniciales[rotor3][0])
			rotarClavija(posInicial4);//ROTAR QUINTA RUEDA
			
			mostrar26(posInicial4);
			retornar26(posInicial4);	
			cout<<endl;
	
		cout<<"i,j,k,l,m:"<<i<<j<<k<<l<<m<<endl;
		cout<<"i,j,k,l,m:"<<i<<j<<k<<l<<m<<endl;
		cout<<endl;
		
		
		// 1. asignar variable a trabajar
			x[0]=texto[h];
			
			cout<<"VALOR DE LA VAR X: "<<x[0]<<endl;
			
			retornarNumeros(1,x);
			Aux=x[0];
			cout<<"Dato 1er rotor: "<<Aux;
			cout<<endl<<endl;
			
			
	//RECORRIDO DIRECTO
		// 2. Paso por el rotor 1
			// 2.A se incrementa con la nueva posicion inicial de la clavija (despues de rotar)
				cout<<"la posInicial[0]= ";mostrarCaracteres(1,posInicial0);retornarNumeros(1,posInicial0);
				x[0]+= posInicial0[0];
				Aux=x[0];
				Aux=modular(Aux); //el limite es la cantidad de digitos del alfabeto
				x[0]=Aux;
				cout<<"PASO POR 2.A: "<<Aux;
				cout<<endl;
			
			// 2.B permutacion x <- rotorDirecto[rotor1][numeroGeneradoDeLaSuma] 	
				x[0] = rotorDirecto[rotor0][Aux];
				Aux=x[0];
				Aux=modular(Aux); //el limite es la cantidad de digitos del alfabeto
				x[0]=Aux;
				cout<<"PASO POR 2.B: "<<Aux;
				cout<<endl;
		
		  	// 2.C le restamos lo incrementado en el paso 2.A
			  	x[0]-=posInicial0[0]; 
				Aux=x[0];
				Aux=modular(Aux);
				x[0]=Aux;
				cout<<"PASO POR 2.C: "<<Aux;
				cout<<endl;				
			cout<<"i,j,k,l,m:"<<i<<j<<k<<l<<m<<endl;
			cout<<"i,j,k,l,m:"<<i<<j<<k<<l<<m<<endl;
			cout<<endl;
		// 3. Paso por el rotor 2
			// 3.A se incrementa con la nueva posicion inicial de la clavija (despues de rotar)
			cout<<"la posInicial[1]= ";mostrarCaracteres(1,posInicial1);retornarNumeros(1,posInicial1);
				x[0]+= posInicial1[0];
				Aux=x[0];
				Aux=modular(Aux); //el limite es la cantidad de digitos del alfabeto
				x[0]=Aux;
				cout<<"PASO POR 3.A: "<<Aux;
				cout<<endl;
			
			// 3.B permutacion x <- rotorDirecto[rotor1][numeroGeneradoDeLaSuma] 	
				x[0] = rotorDirecto[rotor1][Aux];
				Aux=x[0];
				Aux=modular(Aux); //el limite es la cantidad de digitos del alfabeto
				x[0]=Aux;
				cout<<"PASO POR 3.B: "<<Aux;
				cout<<endl;
		
		  	// 3.C le restamos lo incrementado en el paso 3.A
			  	x[0]-=posInicial1[0]; 
				Aux=x[0];
				Aux=modular(Aux);
				x[0]=Aux;
				cout<<"PASO POR 3C: "<<Aux;
				cout<<endl;	
			cout<<"i,j,k,l,m:"<<i<<j<<k<<l<<m<<endl;
			cout<<"i,j,k,l,m:"<<i<<j<<k<<l<<m<<endl;
			cout<<endl;
					
				
		// 4. Paso por el rotor 3
			// 4.A se incrementa con la nueva posicion inicial de la clavija (despues de rotar)
				cout<<"la posInicial[2]= ";mostrarCaracteres(1,posInicial2);retornarNumeros(1,posInicial2);
				x[0]+= posInicial2[0];
				Aux=x[0];
				Aux=modular(Aux); //el limite es la cantidad de digitos del alfabeto
				x[0]=Aux;
				cout<<"PASO POR 4.A: "<<Aux;
				cout<<endl;
			
			// 4.B permutacion x <- rotorDirecto[rotor1][numeroGeneradoDeLaSuma] 	
				x[0] = rotorDirecto[rotor2][Aux];
				Aux=x[0];
				Aux=modular(Aux); //el limite es la cantidad de digitos del alfabeto
				x[0]=Aux;
				cout<<"PASO POR 4.B: "<<Aux;
				cout<<endl;
		
		  	// 4.C le restamos lo incrementado en el paso 3.A
			  	x[0]-=posInicial2[0]; 
				Aux=x[0];
				Aux=modular(Aux);
				x[0]=Aux;
				cout<<"PASO POR 4.C: : "<<Aux;
				cout<<endl;
		cout<<"i,j,k,l,m:"<<i<<j<<k<<l<<m<<endl;
		cout<<"i,j,k,l,m:"<<i<<j<<k<<l<<m<<endl;
		cout<<endl;			

		// AGREGANDO ROTOR 4
		
		// 4.5. Paso por el rotor 4
			// 4.5.A se incrementa con la nueva posicion inicial de la clavija (despues de rotar)
				cout<<"la posInicial[3]= ";mostrarCaracteres(1,posInicial3);retornarNumeros(1,posInicial3);
				x[0]+= posInicial3[0];
				Aux=x[0];
				Aux=modular(Aux); //el limite es la cantidad de digitos del alfabeto
				x[0]=Aux;
				cout<<"PASO POR 4.5.A: "<<Aux;
				cout<<endl;
			
			// 4.5.B permutacion x <- rotorDirecto[rotor1][numeroGeneradoDeLaSuma] 	
				x[0] = rotorDirecto[rotor3][Aux];
				Aux=x[0];
				Aux=modular(Aux); //el limite es la cantidad de digitos del alfabeto
				x[0]=Aux;
				cout<<"PASO POR 4.5.B: "<<Aux;
				cout<<endl;
		
		  	// 4.5.C le restamos lo incrementado en el paso 3.A
			  	x[0]-=posInicial3[0]; 
				Aux=x[0];
				Aux=modular(Aux);
				x[0]=Aux;
				cout<<"PASO POR 4.5.C: : "<<Aux;
				cout<<endl;
		cout<<"i,j,k,l,m:"<<i<<j<<k<<l<<m<<endl;
		cout<<"i,j,k,l,m:"<<i<<j<<k<<l<<m<<endl;
		cout<<endl;
		
		// 4.5. Paso por el rotor 5
			// 4.6.A se incrementa con la nueva posicion inicial de la clavija (despues de rotar)
				cout<<"la posInicial[4]= ";mostrarCaracteres(1,posInicial4);retornarNumeros(1,posInicial4);
				x[0]+= posInicial4[0];
				Aux=x[0];
				Aux=modular(Aux); //el limite es la cantidad de digitos del alfabeto
				x[0]=Aux;
				cout<<"PASO POR 4.6.A: "<<Aux;
				cout<<endl;
			
			// 4.5.B permutacion x <- rotorDirecto[rotor1][numeroGeneradoDeLaSuma] 	
				x[0] = rotorDirecto[rotor4][Aux];
				Aux=x[0];
				Aux=modular(Aux); //el limite es la cantidad de digitos del alfabeto
				x[0]=Aux;
				cout<<"PASO POR 4.6.B: "<<Aux;
				cout<<endl;
		
		  	// 4.5.C le restamos lo incrementado en el paso 3.A
			  	x[0]-=posInicial4[0]; 
				Aux=x[0];
				Aux=modular(Aux);
				x[0]=Aux;
				cout<<"PASO POR 4.6.C: : "<<Aux;
				cout<<endl;
		cout<<"i,j,k,l,m:"<<i<<j<<k<<l<<m<<endl;
		cout<<"i,j,k,l,m:"<<i<<j<<k<<l<<m<<endl;
		cout<<endl;
		
		// 5. Paso por el rotor espejo:
				x[0] = rotorEspejo[Aux];
				Aux = x[0];
				Aux = modular(Aux);
				x[0]=Aux;
				cout<<"PASO POR 5: rotor espejo:  "<<Aux;
				cout<<endl<<endl;
				
				
	//RECORRIDO INVERSO
		// 4.5. Paso por el rotor 5
			// 4.6.A se incrementa con la nueva posicion inicial de la clavija (despues de rotar)
				cout<<"la posInicial[4]= ";mostrarCaracteres(1,posInicial4);retornarNumeros(1,posInicial4);
				x[0]+= posInicial4[0];
				Iaux=x[0];
				Iaux=modular(Iaux); //el limite es la cantidad de digitos del alfabeto
				x[0]=Iaux;
				cout<<"PASO POR inverso 5.6.A: "<<Iaux;
				cout<<endl;
			
			// 4.5.B permutacion x <- rotorDirecto[rotor1][numeroGeneradoDeLaSuma] 	
				x[0] = rotorInverso[rotor4][Iaux];
				Iaux=x[0];
				Iaux=modular(Iaux); //el limite es la cantidad de digitos del alfabeto
				x[0]=Iaux;
				cout<<"PASO POR inverso 4.6.B: "<<Iaux;
				cout<<endl;
		
		  	// 4.5.C le restamos lo incrementado en el paso 3.A
			  	x[0]-=posInicial4[0]; 
				Iaux=x[0];
				Iaux=modular(Iaux);
				x[0]=Iaux;
				cout<<"PASO POR inverso 4.6.C: : "<<Iaux;
				cout<<endl;
		cout<<"i,j,k,l,m:"<<i<<j<<k<<l<<m<<endl;
		cout<<"i,j,k,l,m:"<<i<<j<<k<<l<<m<<endl;
		cout<<endl;	
		
///////////////////
		// AGREGANDO ROTOR 4
		
		// 4.5. Paso por el rotor 4
			// 4.5.A se incrementa con la nueva posicion inicial de la clavija (despues de rotar)
				cout<<"la posInicial[3]= ";mostrarCaracteres(1,posInicial3);retornarNumeros(1,posInicial3);
				x[0]+= posInicial3[0];
				Iaux=x[0];
				Iaux=modular(Iaux); //el limite es la cantidad de digitos del alfabeto
				x[0]=Iaux;
				cout<<"PASO POR 4.5.A: "<<Iaux;
				cout<<endl;
			
			// 4.5.B permutacion x <- rotorDirecto[rotor1][numeroGeneradoDeLaSuma] 	
				x[0] = rotorInverso[rotor3][Iaux];
				Iaux=x[0];
				Iaux=modular(Iaux); //el limite es la cantidad de digitos del alfabeto
				x[0]=Iaux;
				cout<<"PASO POR 4.5.B: "<<Iaux;
				cout<<endl;
		
		  	// 4.5.C le restamos lo incrementado en el paso 3.A
			  	x[0]-=posInicial3[0]; 
				Iaux=x[0];
				Iaux=modular(Iaux);
				x[0]=Iaux;
				cout<<"PASO POR 4.5.C: : "<<Iaux;
				cout<<endl;
		cout<<"i,j,k,l,m:"<<i<<j<<k<<l<<m<<endl;
		cout<<"i,j,k,l,m:"<<i<<j<<k<<l<<m<<endl;
		cout<<endl;
	
		// 6. Paso por el 3er rotor inverso
			// 6.A se incrementa con la nueva posicion inicial de la clavija (despues de rotar)
				cout<<"la posInicial[2]= ";mostrarCaracteres(1,posInicial2);retornarNumeros(1,posInicial2);
				x[0]+= posInicial2[0];
				Iaux=x[0];
				Iaux=modular(Iaux); //el limite es la cantidad de digitos del alfabeto
				x[0]=Iaux;
				cout<<"Paso por 6.A: "<<Iaux;
				cout<<endl;
			
			// 6.B permutacion x <- rotorInverso[rotor2][numeroGeneradoDeLaSuma] 	
				x[0] = rotorInverso[rotor2][Iaux];
				Iaux=x[0];
				Iaux=modular(Iaux); //el limite es la cantidad de digitos del alfabeto
				x[0]=Iaux;
				cout<<"PASO POR 6.B: "<<Iaux;
				cout<<endl;
		
		  	// 6.C le restamos lo incrementado en el paso 6.A
			  	x[0]-=posInicial2[0]; 
				Iaux=x[0];
				Iaux=modular(Iaux);
				x[0]=Iaux;
				cout<<"PASO POR 6.C: "<<Iaux;
				cout<<endl;
				cout<<"i,j,k:"<<i<<j<<k<<endl;
				cout<<"i,j,k:"<<i<<j<<k<<endl<<endl;
					
		// 7. Paso por el 2do rotor inverso
			// 7.A se incrementa con la nueva posicion inicial de la clavija (despues de rotar)
				cout<<"la posInicial[1]= ";mostrarCaracteres(1,posInicial1);retornarNumeros(1,posInicial1);
				x[0]+= posInicial1[0];
				Iaux=x[0];
				Iaux=modular(Iaux); //el limite es la cantidad de digitos del alfabeto
				x[0]=Iaux;
				cout<<"PASO POR 7.A: "<<Iaux;
				cout<<endl;
			
			// 7.B permutacion x <- rotorInverso[rotor1][numeroGeneradoDeLaSuma] 	
				x[0] = rotorInverso[rotor1][Iaux];
				Iaux=x[0];
				Iaux=modular(Iaux); //el limite es la cantidad de digitos del alfabeto
				x[0]=Iaux;
				cout<<"PASO POR 7.B: "<<Iaux;
				cout<<endl;
		
		  	// 7.C le restamos lo incrementado en el paso 7.A
			  	x[0]-=posInicial1[0]; 
				Iaux=x[0];
				Iaux=modular(Iaux);
				x[0]=Iaux;
				cout<<"PASO POR 7.C: "<<Iaux;
				cout<<endl;
				cout<<"i,j,k:"<<i<<j<<k<<endl;
				cout<<"i,j,k:"<<i<<j<<k<<endl<<endl;
				
				
		// 8. Paso por el 1do rotor inverso
			// 8.A se incrementa con la nueva posicion inicial de la clavija (despues de rotar)
				cout<<"la posInicial[0]= ";mostrarCaracteres(1,posInicial0);retornarNumeros(1,posInicial0);
				x[0]+= posInicial0[0];
				Iaux=x[0];
				Iaux=modular(Iaux); //el limite es la cantidad de digitos del alfabeto
				x[0]=Iaux;
				cout<<"PASO POR 8.A: "<<Iaux;
				cout<<endl;
			
			// 8.B permutacion x <- rotorInverso[rotor1][numeroGeneradoDeLaSuma] 	
				x[0] = rotorInverso[rotor0][Iaux];
				Iaux=x[0];
				Iaux=modular(Iaux); //el limite es la cantidad de digitos del alfabeto
				x[0]=Iaux;
				cout<<"PASO POR 8.B: "<<Iaux;
				cout<<endl;
		
		  	// 8.C le restamos lo incrementado en el paso 8.A
			  	x[0]-=posInicial0[0]; 
				Iaux=x[0];
				Iaux=modular(Iaux);
				x[0]=Iaux;
				cout<<"PASO POR 8.C: "<<Iaux;
				cout<<endl<<endl;
				
				cout<<"....................................................."<<endl;
				Iaux+=65;
				textoEncriptado[h]=Iaux;
				cout<<endl;
		}

		
			cout<<"................."<<h<<endl;		
			cout<<"LA PALABRA ENCRIPTADA ES: -> ";
			
			for(i=0; i<h;i++)
			{
				cout<<textoEncriptado[i];
			}


	

	
	
	cout<<"\n----------------------------------------------"<<endl;
	system ("pause");
	return 0;
}


int modular(int numero)
{
	numero = (numero +26)%26;
	
	return numero;
}

void mostrar26(char cadena[27])
{
	for(int i=0; i<26; i++)
	{
		cadena[i] = cadena[i]+65;
		cout<<cadena[i];
	}
	cout<<endl;
}

void mostrarCaracteres(int largo, char cadena[])
{
	for(int i=0; i<largo; i++)
	{
		cadena[i] = cadena[i]+65;
		cout<<cadena[i];
	}
	cout<<endl;
}

void retornar26(char cadena[])
{
	
	for(int i=0; i<26; i++)
	{
		cadena[i] = cadena[i]-65;
	}
}


void retornarNumeros(int largo, char cadena[])
{
	
	for(int i=0; i<largo; i++)
	{
		cadena[i] = cadena[i]-65;
	}
}

void rotarClavija(char cadena[27])
{
	char aux[27];
	
	aux[0]=cadena[0];
	
	for(int i=0; i<=24; i++)
	{
		cadena[i]=cadena[i+1];
	}
	
	cadena[25]=aux[0];
	
}

