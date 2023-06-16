#include <iostream>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <fstream>
#define MAX 9999

using namespace std;

void espacioAxxxx(char texto[MAX])
{
	char baul[MAX];
	int cantidad;
	
	cantidad = strlen(texto);// 
	
	for(int x=0; x<=MAX; x++)
	{
		if(texto[x] == ' ')
		{
			int z=1;
			for(int y=x+1; y<=MAX; y++) //
			{ 
				baul[z] = texto[y];
				z++;
			}
			
			z=1;
			for(int y=(x+4); y<=MAX; y++)//
			{ 
				texto[y] = baul[z];
				z++;
			}
			
			texto[x] = 'x';
			texto[x+1] = 'x';
			texto[x+2] = 'x';
			texto[x+3] = 'x';
		}
		
		else
		{
			//Nada pasa
		}
	}
	
}

void xxxxAespacio(char texto[MAX])
{
	int cantidad;
	cantidad = strlen(texto);
	
	for(int x=0; x<=cantidad; x++)
	{
		if(texto[x] == 'x' || texto[x] == 'X' )
		{
			if(texto[x+1] == 'x' || texto[x+1] == 'X')
			{
				if(texto[x+2] == 'x'|| texto[x+2] == 'X')
				{
					if(texto[x+3] == 'x' || texto[x+3] == 'X')
					{
						texto[x] = ' ';
						for(int y=x+1; y<=cantidad; y++)
						{
							texto[y] = texto[y+3];
						}
					}
					else{
						//Error
					}
				}
				else
				{
					//Error
				}
			}
			else
			{
				//Error
			}
		}
		else
		{
			//Error
		}
	}
	
}

int invertirNumero(int numero)
   {
   	int invertido=0, modulo=0;
      
      while (numero!=0)
      {
          modulo=numero%10;
          invertido=invertido*10+modulo;
          numero=numero/10;
      }    
      
      invertido+=numero;
      
      return invertido;
   }

void no_aceptadoAletras(char texto[])
{
	char baul[MAX];
	int cantidad;
	cantidad = strlen(texto);
	int z=1;
	
	for(int x=0; x<=MAX; x++)
	{
		switch (texto[x])
		{
			case '0':
				z=1;
				for(int y=x+1; y<=MAX; y++) 
				{ 
					baul[z] = texto[y];
					z++;
				}
				
				z=1;
				for(int y=(x+4); y<=MAX; y++)
				{ 
					texto[y] = baul[z];
					z++;
				}
				
				texto[x]   = 'C';
				texto[x+1] = 'C';
				texto[x+2] = 'C';
				texto[x+3] = 'C';
				
				break;
			
			case '1':
				
				z=1;
				for(int y=x+1; y<=MAX; y++) 
				{ 
					baul[z] = texto[y];
					z++;
				}
				
				z=1;
				for(int y=(x+4); y<=MAX; y++)
				{ 
					texto[y] = baul[z];
					z++;
				}
				
				texto[x]   = 'U';
				texto[x+1] = 'U';
				texto[x+2] = 'U';
				texto[x+3] = 'U';
				
				break;
				
			case '2':
				
				z=1;
				for(int y=x+1; y<=MAX; y++) 
				{ 
					baul[z] = texto[y];
					z++;
				}
				
				z=1;
				for(int y=(x+4); y<=MAX; y++)
				{ 
					texto[y] = baul[z];
					z++;
				}
				
				texto[x]   = 'D';
				texto[x+1] = 'D';
				texto[x+2] = 'D';
				texto[x+3] = 'D';
				
				break;
				
			case '3':
				z=1;
				for(int y=x+1; y<=MAX; y++) 
				{ 
					baul[z] = texto[y];
					z++;
				}
				
				z=1;
				for(int y=(x+4); y<=MAX; y++)
				{ 
					texto[y] = baul[z];
					z++;
				}
				
				texto[x]   = 'T';
				texto[x+1] = 'T';
				texto[x+2] = 'T';
				texto[x+3] = 'T';
				
				break;
			
			case '4':
				
				z=1;
				for(int y=x+1; y<=MAX; y++) 
				{ 
					baul[z] = texto[y];
					z++;
				}
				
				z=1;
				for(int y=(x+4); y<=MAX; y++)
				{ 
					texto[y] = baul[z];
					z++;
				}
				
				texto[x]   = 'F';
				texto[x+1] = 'F';
				texto[x+2] = 'F';
				texto[x+3] = 'F';
				
				break;
				
			case '5':
				
				z=1;
				for(int y=x+1; y<=MAX; y++) 
				{ 
					baul[z] = texto[y];
					z++;
				}
				
				z=1;
				for(int y=(x+4); y<=MAX; y++)
				{ 
					texto[y] = baul[z];
					z++;
				}
				
				texto[x]   = 'I';
				texto[x+1] = 'I';
				texto[x+2] = 'I';
				texto[x+3] = 'I';
				
				break;
				
			case '6':
				z=1;
				for(int y=x+1; y<=MAX; y++) 
				{ 
					baul[z] = texto[y];
					z++;
				}
				
				z=1;
				for(int y=(x+4); y<=MAX; y++)
				{ 
					texto[y] = baul[z];
					z++;
				}
				
				texto[x]   = 'S';
				texto[x+1] = 'S';
				texto[x+2] = 'S';
				texto[x+3] = 'S';
				
				break;
			
			case '7':
				
				z=1;
				for(int y=x+1; y<=MAX; y++) 
				{ 
					baul[z] = texto[y];
					z++;
				}
				
				z=1;
				for(int y=(x+4); y<=MAX; y++)
				{ 
					texto[y] = baul[z];
					z++;
				}
				
				texto[x]   = 'V';
				texto[x+1] = 'V';
				texto[x+2] = 'V';
				texto[x+3] = 'V';
				
				break;
				
			case '8':
				
				z=1;
				for(int y=x+1; y<=MAX; y++) 
				{ 
					baul[z] = texto[y];
					z++;
				}
				
				z=1;
				for(int y=(x+4); y<=MAX; y++)
				{ 
					texto[y] = baul[z];
					z++;
				}
				
				texto[x]   = 'O';
				texto[x+1] = 'O';
				texto[x+2] = 'O';
				texto[x+3] = 'O';
				
				break;
				
			case '9':
				z=1;
				for(int y=x+1; y<=MAX; y++) 
				{ 
					baul[z] = texto[y];
					z++;
				}
				
				z=1;
				for(int y=(x+4); y<=MAX; y++)
				{ 
					texto[y] = baul[z];
					z++;
				}
				
				texto[x]   = 'N';
				texto[x+1] = 'N';
				texto[x+2] = 'N';
				texto[x+3] = 'N';
				
				break;						

			case '.':
				z=1;
				for(int y=x+1; y<=MAX; y++) 
				{ 
					baul[z] = texto[y];
					z++;
				}
				
				z=1;
				for(int y=(x+4); y<=MAX; y++)
				{ 
					texto[y] = baul[z];
					z++;
				}
				
				texto[x]   = 'P';
				texto[x+1] = 'P';
				texto[x+2] = 'P';
				texto[x+3] = 'P';
				
				break;	

			case '@':
				z=1;
				for(int y=x+1; y<=MAX; y++) 
				{ 
					baul[z] = texto[y];
					z++;
				}
				
				z=1;
				for(int y=(x+4); y<=MAX; y++)
				{ 
					texto[y] = baul[z];
					z++;
				}
				
				texto[x]   = 'A';
				texto[x+1] = 'A';
				texto[x+2] = 'A';
				texto[x+3] = 'A';
				
				break;

			case '_':
				z=1;
				for(int y=x+1; y<=MAX; y++) 
				{ 
					baul[z] = texto[y];
					z++;
				}
				
				z=1;
				for(int y=(x+4); y<=MAX; y++)
				{ 
					texto[y] = baul[z];
					z++;
				}
				
				texto[x]   = 'G';
				texto[x+1] = 'G';
				texto[x+2] = 'G';
				texto[x+3] = 'G';
				
				break;	

			case '-':
				z=1;
				for(int y=x+1; y<=MAX; y++) 
				{ 
					baul[z] = texto[y];
					z++;
				}
				
				z=1;
				for(int y=(x+4); y<=MAX; y++)
				{ 
					texto[y] = baul[z];
					z++;
				}
				
				texto[x]   = 'J';
				texto[x+1] = 'J';
				texto[x+2] = 'J';
				texto[x+3] = 'J';
				
				break;
			case ',':
				z=1;
				for(int y=x+1; y<=MAX; y++) 
				{ 
					baul[z] = texto[y];
					z++;
				}
				
				z=1;
				for(int y=(x+4); y<=MAX; y++)
				{ 
					texto[y] = baul[z];
					z++;
				}
				
				texto[x]   = 'M';
				texto[x+1] = 'M';
				texto[x+2] = 'M';
				texto[x+3] = 'M';
				
				break;
				
			case ';':
				z=1;
				for(int y=x+1; y<=MAX; y++) 
				{ 
					baul[z] = texto[y];
					z++;
				}
				
				z=1;
				for(int y=(x+4); y<=MAX; y++)
				{ 
					texto[y] = baul[z];
					z++;
				}
				
				texto[x]   = 'Y';
				texto[x+1] = 'Y';
				texto[x+2] = 'Y';
				texto[x+3] = 'Y';
				
				break;

		}
		
		
	}
	
}

void letrasAno_aceptado(char texto[MAX])
{
	int cantidad;
	cantidad = strlen(texto);
	
	for(int x=0; x<=cantidad; x++)
	{
		// 0 : CCCC
		if(texto[x] == 'C')
		{
			if(texto[x+1] == 'C')
			{
				if(texto[x+2] == 'C')
				{
					if(texto[x+3] == 'C')
					{
						texto[x] = '0';
						for(int y=x+1; y<=cantidad; y++)
						{
							texto[y] = texto[y+3];
						}
					}
				
				}
				
			}
			
		}
		
		// 1 : UUUU
		if(texto[x] == 'U')
		{
			if(texto[x+1] == 'U')
			{
				if(texto[x+2] == 'U')
				{
					if(texto[x+3] == 'U')
					{
						texto[x] = '1';
						for(int y=x+1; y<=cantidad; y++)
						{
							texto[y] = texto[y+3];
						}
					}
				
				}
				
			}
			
		}
		
	

		// 2 : DDDD
		if(texto[x] == 'D')
		{
			if(texto[x+1] == 'D')
			{
				if(texto[x+2] == 'D')
				{
					if(texto[x+3] == 'D')
					{
						texto[x] = '2';
						for(int y=x+1; y<=cantidad; y++)
						{
							texto[y] = texto[y+3];
						}
					}
				
				}
				
			}
			
		}
		
		// 3 : TTTT
		if(texto[x] == 'T')
		{
			if(texto[x+1] == 'T')
			{
				if(texto[x+2] == 'T')
				{
					if(texto[x+3] == 'T')
					{
						texto[x] = '3';
						for(int y=x+1; y<=cantidad; y++)
						{
							texto[y] = texto[y+3];
						}
					}
				
				}
				
			}
			
		}
		

		// 4 : FFFF
		if(texto[x] == 'F')
		{
			if(texto[x+1] == 'F')
			{
				if(texto[x+2] == 'F')
				{
					if(texto[x+3] == 'F')
					{
						texto[x] = '4';
						for(int y=x+1; y<=cantidad; y++)
						{
							texto[y] = texto[y+3];
						}
					}
				
				}
				
			}
			
		}
		
		// 5 : IIII
		if(texto[x] == 'I')
		{
			if(texto[x+1] == 'I')
			{
				if(texto[x+2] == 'I')
				{
					if(texto[x+3] == 'I')
					{
						texto[x] = '5';
						for(int y=x+1; y<=cantidad; y++)
						{
							texto[y] = texto[y+3];
						}
					}
				
				}
				
			}
			
		}
		

		// 6 : SSSS
		if(texto[x] == 'S')
		{
			if(texto[x+1] == 'S')
			{
				if(texto[x+2] == 'S')
				{
					if(texto[x+3] == 'S')
					{
						texto[x] = '6';
						for(int y=x+1; y<=cantidad; y++)
						{
							texto[y] = texto[y+3];
						}
					}
				
				}
				
			}
			
		}
		
		// 7 : VVVV
		if(texto[x] == 'V')
		{
			if(texto[x+1] == 'V')
			{
				if(texto[x+2] == 'V')
				{
					if(texto[x+3] == 'V')
					{
						texto[x] = '7';
						for(int y=x+1; y<=cantidad; y++)
						{
							texto[y] = texto[y+3];
						}
					}
				
				}
				
			}
			
		}
		

		// 8 : OOOO
		if(texto[x] == 'O')
		{
			if(texto[x+1] == 'O')
			{
				if(texto[x+2] == 'O')
				{
					if(texto[x+3] == 'O')
					{
						texto[x] = '8';
						for(int y=x+1; y<=cantidad; y++)
						{
							texto[y] = texto[y+3];
						}
					}
				
				}
				
			}
			
		}
		
		// 9 : NNNN
		if(texto[x] == 'N')
		{
			if(texto[x+1] == 'N')
			{
				if(texto[x+2] == 'N')
				{
					if(texto[x+3] == 'N')
					{
						texto[x] = '9';
						for(int y=x+1; y<=cantidad; y++)
						{
							texto[y] = texto[y+3];
						}
					}
				
				}
				
			}
			
		}
		
		// . : PPPP
		if(texto[x] == 'P')
		{
			if(texto[x+1] == 'P')
			{
				if(texto[x+2] == 'P')
				{
					if(texto[x+3] == 'P')
					{
						texto[x] = '.';
						for(int y=x+1; y<=cantidad; y++)
						{
							texto[y] = texto[y+3];
						}
					}
				
				}
				
			}
			
		}
		
		// @ : PPPP
		if(texto[x] == 'A')
		{
			if(texto[x+1] == 'A')
			{
				if(texto[x+2] == 'A')
				{
					if(texto[x+3] == 'A')
					{
						texto[x] = '@';
						for(int y=x+1; y<=cantidad; y++)
						{
							texto[y] = texto[y+3];
						}
					}
				
				}
				
			}
			
		}		
		
	
	
		// _ : GGGG
		if(texto[x] == 'G')
		{
			if(texto[x+1] == 'G')
			{
				if(texto[x+2] == 'G')
				{
					if(texto[x+3] == 'G')
					{
						texto[x] = '_';
						for(int y=x+1; y<=cantidad; y++)
						{
							texto[y] = texto[y+3];
						}
					}
				
				}
				
			}
			
		}
		
		// - : JJJJ
		if(texto[x] == 'J')
		{
			if(texto[x+1] == 'J')
			{
				if(texto[x+2] == 'J')
				{
					if(texto[x+3] == 'J')
					{
						texto[x] = '-';
						for(int y=x+1; y<=cantidad; y++)
						{
							texto[y] = texto[y+3];
						}
					}
				
				}
				
			}
			
		}
		
		// , : MMMM
		if(texto[x] == 'M')
		{
			if(texto[x+1] == 'M')
			{
				if(texto[x+2] == 'M')
				{
					if(texto[x+3] == 'M')
					{
						texto[x] = ',';
						for(int y=x+1; y<=cantidad; y++)
						{
							texto[y] = texto[y+3];
						}
					}
				
				}
				
			}
			
		}
		
		// ; : JJJJ
		if(texto[x] == 'Y')
		{
			if(texto[x+1] == 'Y')
			{
				if(texto[x+2] == 'Y')
				{
					if(texto[x+3] == 'Y')
					{
						texto[x] = ';';
						for(int y=x+1; y<=cantidad; y++)
						{
							texto[y] = texto[y+3];
						}
					}
				
				}
				
			}
			
		}		
		
	}	
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


string codigo_enigma(char texto[], int contraNumero, char contrasenhaLetra[6])
{
	int contrasenhaNumero[6];
	int u, d, c, um, dm;
	int aux;
	
		u            = contraNumero %10;
		contraNumero = contraNumero/10;
		
		d            = contraNumero %10;
		contraNumero = contraNumero/10;
		
		c            = contraNumero %10;
		contraNumero = contraNumero/10;
		
		um           = contraNumero %10;
		contraNumero = contraNumero/10;
		
		dm     = contraNumero %10;
		
		
		contrasenhaNumero[0] = dm;
		
		contrasenhaNumero[1] = um;
		
		contrasenhaNumero[2] = c;
		
		contrasenhaNumero[3] = d;
		
		contrasenhaNumero[4] = u;
	
	int i, j, k,l,m, h;
	int val, preguntar;   //validador
	int  Aux, Iaux; //auxiliares para el recorrido DIRECTO e inverso
	int longitud, longitud1;
	static	int rotor0, rotor1, rotor2, rotor3, rotor4;
	char x[2];
	char charAux[2];
	char validador[2]; // Validar numeros y letras.. para evitar errores de usuario

	
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
	                           {16, 2,24,11,23,22, 4,13, 5,19,25,14,18,12,21, 9,20, 3,10, 6, 8, 0,17,15, 7, 1},
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
	
//	char texto[100000];
	char textoEncriptado[100000];
	
//	do
//	{
//		cout<<"EMULADOR MAQUINA ENIGMA V. Najum!!!!!!!!!!!!!!!!!!!!!!!\n\n";
//		cout<<"********************************************************"<<endl;
//		cout<<"PUEDE SELECIONAR 3 DE 5 ROTORES"<<endl;
//		cout<<"__________     ___________       ___________"<<endl;
//		cout<<"ubicacion2     ubicacion 2       ubicacion 1 " <<endl<<endl;
		
		
//		cout<<"selecione rotores del 1 al 5:\n" <<endl;	
		
		for(val=0; val<1; val++)
		{
		//	cout<<"selecione el rotor para la ubicacion 1: ";
		//	rotor0;
			rotor0 = contrasenhaNumero[0];
			rotor0-=1;

			if(rotor0<0 || rotor0>4)
				val-=1;
		}
		
		for(val=0; val<1; val++)
		{
		//	cout<<"selecione el rotor para la ubicacion 2: ";
		//	cin>>rotor1;
			rotor1 = contrasenhaNumero[1];
			rotor1-=1;
			
			if(rotor1<0 || rotor1>4)
				val-=1;
		}
	
		for(val=0; val<1; val++)
		{
		//	cout<<"selecione el rotor para la ubicacion 3: ";
		//	cin>>rotor2;
			rotor2 = contrasenhaNumero[2];
			rotor2-=1;
			
			if(rotor2<0 || rotor2>4)
				val-=1;
		}
		
		// cuarto rotor
		for(val=0; val<1; val++)
		{
		//	cout<<"selecione el rotor para la ubicacion 4: ";
		//	cin>>rotor3;
			rotor3 = contrasenhaNumero[3];
			rotor3-=1;
			
			if(rotor3<0 || rotor3>4)
				val-=1;
		}
		
		// quinto rotor
		for(val=0; val<1; val++)
		{
		//	cout<<"selecione el rotor para la ubicacion 5: ";
		//	cin>>rotor4;
			rotor4 = contrasenhaNumero[4];
			rotor4-=1;
			
			if(rotor4<0 || rotor4>4)
				val-=1;
		}
		
		cout<<endl;
		cout<<endl;
		
		for(i=0; i<26; i++)
		{
			ubicacion0[i]=rotorDirecto[rotor0][i];
			posInicial0[i]=posIniciales[rotor0][i];
		}
	
		for(j=0; j<26; j++)
		{
			ubicacion1[j]=rotorDirecto[rotor1][j];
			posInicial1[j]=posIniciales[rotor1][j];
		}
	
		for(k=0; k<26; k++)
		{
			ubicacion2[k]=rotorDirecto[rotor2][k];
			posInicial2[k]=posIniciales[rotor2][k];
		}
		
		for(l=0; l<26; l++)
		{
			ubicacion3[l]=rotorDirecto[rotor3][l];
			posInicial3[l]=posIniciales[rotor3][l];
		}

		for(m=0; m<26; m++)
		{
			ubicacion4[m]=rotorDirecto[rotor4][m];
			posInicial4[m]=posIniciales[rotor4][m];
		}
		
		
	//	cout<<"Puede selecionar posiciones de A - Z..: \n\n";
	//	cout<<"ingrese la posicion inicial 1: ";
	//	cin>>letraDigitada[0];
	
		letraDigitada[0] = contrasenhaLetra[0];
		letraDigitada[0]=toupper(letraDigitada[0]);
		letraDigitada[0]-=65;
		
	//	cout<<"ingrese la posicion inicial 2: ";
	//	cin>>letraDigitada[1];
	
		letraDigitada[1] = contrasenhaLetra[1];
		letraDigitada[1]=toupper(letraDigitada[1]);
		letraDigitada[1]-=65;	
		
	//	cout<<"ingrese la posicion inicial 3: ";
	//	cin>>letraDigitada[2];
		letraDigitada[2] = contrasenhaLetra[2];
		letraDigitada[2]=toupper(letraDigitada[2]);
		letraDigitada[2]-=65;
	
	//	cout<<"ingrese la posicion inicial 4: ";
	//	cin>>letraDigitada[3];
		letraDigitada[3] = contrasenhaLetra[3];
		letraDigitada[3]=toupper(letraDigitada[3]);
		letraDigitada[3]-=65;
		
	//	cout<<"ingrese la posicion inicial 5: ";
	//	cin>>letraDigitada[4];
		letraDigitada[4] = contrasenhaLetra[4];
		letraDigitada[4]=toupper(letraDigitada[4]);
		letraDigitada[4]-=65;


		//ROTAR HASTA QUE LA POSICION INICIAL SEA IGUAL A LA LETRA DIGITADA
		do
		{
			rotarClavija(posInicial0);
		}
		while(posInicial0[0] != letraDigitada[0]);
	
		do
		{
			rotarClavija(posInicial1);
		}
		while(posInicial1[0] != letraDigitada[1]);
	
		do
		{
			rotarClavija(posInicial2);
		}
		while(posInicial2[0] != letraDigitada[2]);
		
		do
		{
			rotarClavija(posInicial3);
		}
		while(posInicial3[0] != letraDigitada[3]);
		
		do
		{
			rotarClavija(posInicial4);
		}
		while(posInicial4[0] != letraDigitada[4]);
	
		
		
		
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
	//	cout<<"INGRESE EL TEXTO SIN ESPACIOS: \n";
	//	cout<<"Ingrese el texto que desea encriptar: ";
	//	cout<<endl;
	//	cout<<"------:> ";
	//	gets(texto);	
		
		longitud = strlen(texto);	
		
			
		for(val=0; val<longitud; val++)
		{
			texto[val]=toupper(texto[val]);
		}
		
		//SE REPETIRA ENIGMA PARA CADA UNO DE LOS CARACTERES DEL TEXTO
		
		for(h=0; h<longitud; h++)
		{
			//el primer digito ingresado gira el rotor 1 vez
			
			rotarClavija(posInicial0);
	
			if(posInicial0[0]==posIniciales[rotor0][0])
				rotarClavija(posInicial1);
	
			if(posInicial1[0]==posIniciales[rotor1][0])
				rotarClavija(posInicial2);
				
			if(posInicial2[0]==posIniciales[rotor2][0])
				rotarClavija(posInicial3);
			
			if(posInicial3[0]==posIniciales[rotor3][0])
				rotarClavija(posInicial4);
			
			
			
			// 1. asignar variable a trabajar
				x[0]=texto[h];
				retornarNumeros(1,x);
				Aux=x[0];
	
		//RECORRIDO DIRECTO
			// 2. Paso por el rotor 1
				// 2.A se incrementa con la nueva posicion inicial de la clavija (despues de rotar)
					x[0]+= posInicial0[0];
					Aux=x[0];
					Aux=modular(Aux); //el limite es la cantidad de digitos del alfabeto
					x[0]=Aux;
				
				// 2.B permutacion x <- rotorDirecto[rotor1][numeroGeneradoDeLaSuma] 	
					x[0] = rotorDirecto[rotor0][Aux];
					Aux=x[0];
					Aux=modular(Aux); //el limite es la cantidad de digitos del alfabeto
					x[0]=Aux;
			
			  	// 2.C le restamos lo incrementado en el paso 2.A
				  	x[0]-=posInicial0[0]; 
					Aux=x[0];
					Aux=modular(Aux);
					x[0]=Aux;
	
			// 3. Paso por el rotor 2
				// 3.A se incrementa con la nueva posicion inicial de la clavija (despues de rotar)
					x[0]+= posInicial1[0];
					Aux=x[0];
					Aux=modular(Aux); //el limite es la cantidad de digitos del alfabeto
					x[0]=Aux;
				
				// 3.B permutacion x <- rotorDirecto[rotor1][numeroGeneradoDeLaSuma] 	
					x[0] = rotorDirecto[rotor1][Aux];
					Aux=x[0];
					Aux=modular(Aux); //el limite es la cantidad de digitos del alfabeto
					x[0]=Aux;
			
			  	// 3.C le restamos lo incrementado en el paso 3.A
				  	x[0]-=posInicial1[0]; 
					Aux=x[0];
					Aux=modular(Aux);
					x[0]=Aux;
					
			// 4. Paso por el rotor 3
				// 4.A se incrementa con la nueva posicion inicial de la clavija (despues de rotar)
					x[0]+= posInicial2[0];
					Aux=x[0];
					Aux=modular(Aux); //el limite es la cantidad de digitos del alfabeto
					x[0]=Aux;
	
				// 4.B permutacion x <- rotorDirecto[rotor1][numeroGeneradoDeLaSuma] 	
					x[0] = rotorDirecto[rotor2][Aux];
					Aux=x[0];
					Aux=modular(Aux); //el limite es la cantidad de digitos del alfabeto
					x[0]=Aux;
			
			  	// 4.C le restamos lo incrementado en el paso 3.A
				  	x[0]-=posInicial2[0]; 
					Aux=x[0];
					Aux=modular(Aux);
					x[0]=Aux;
					
				// ROTOR EXTRA 4

			// E.4. Paso por el rotor 4
				// E.4.A se incrementa con la nueva posicion inicial de la clavija (despues de rotar)
					x[0]+= posInicial3[0];
					Aux=x[0];
					Aux=modular(Aux); //el limite es la cantidad de digitos del alfabeto
					x[0]=Aux;
	
				// E.4.B permutacion x <- rotorDirecto[rotor1][numeroGeneradoDeLaSuma] 	
					x[0] = rotorDirecto[rotor3][Aux];
					Aux=x[0];
					Aux=modular(Aux); //el limite es la cantidad de digitos del alfabeto
					x[0]=Aux;
			
			  	// E.4.C le restamos lo incrementado en el paso E.4.A
				  	x[0]-=posInicial3[0]; 
					Aux=x[0];
					Aux=modular(Aux);
					x[0]=Aux;
				
				//ROTOR EXTRA 5
				
			// E.5 Paso por el rotor 5
				// E.5.A se incrementa con la nueva posicion inicial de la clavija (despues de rotar)
					x[0]+= posInicial4[0];
					Aux=x[0];
					Aux=modular(Aux); //el limite es la cantidad de digitos del alfabeto
					x[0]=Aux;
	
				// E.5.B permutacion x <- rotorDirecto[rotor1][numeroGeneradoDeLaSuma] 	
					x[0] = rotorDirecto[rotor4][Aux];
					Aux=x[0];
					Aux=modular(Aux); //el limite es la cantidad de digitos del alfabeto
					x[0]=Aux;
			
			  	// E.5.C le restamos lo incrementado en el paso E.5.A
				  	x[0]-=posInicial4[0]; 
					Aux=x[0];
					Aux=modular(Aux);
					x[0]=Aux;
	
	
	
			// 5. Paso por el rotor espejo:
					x[0] = rotorEspejo[Aux];
					Aux = x[0];
					Aux = modular(Aux);
					x[0]=Aux;
					
		//RECORRIDO INVERSO
		
			// ROTOR INVERSO EXTRA 5	
			
			// E1. Paso por el 5to rotor inverso
				// E1.A se incrementa con la nueva posicion inicial de la clavija (despues de rotar)
					x[0]+= posInicial4[0];
					Iaux=x[0];
					Iaux=modular(Iaux); //el limite es la cantidad de digitos del alfabeto
					x[0]=Iaux;
				
				// E2.B permutacion x <- rotorInverso[rotor2][numeroGeneradoDeLaSuma] 	
					x[0] = rotorInverso[rotor4][Iaux];
					Iaux=x[0];
					Iaux=modular(Iaux); //el limite es la cantidad de digitos del alfabeto
					x[0]=Iaux;
			
			  	// E3.C le restamos lo incrementado en el paso 6.A
				  	x[0]-=posInicial4[0]; 
					Iaux=x[0];
					Iaux=modular(Iaux);
					x[0]=Iaux;
					
			// ROTOR INVERSO EXTRA 4	
			
			// E1. Paso por el 4to rotor inverso
				// E1.A se incrementa con la nueva posicion inicial de la clavija (despues de rotar)
					x[0]+= posInicial3[0];
					Iaux=x[0];
					Iaux=modular(Iaux); //el limite es la cantidad de digitos del alfabeto
					x[0]=Iaux;
				
				// E2.B permutacion x <- rotorInverso[rotor2][numeroGeneradoDeLaSuma] 	
					x[0] = rotorInverso[rotor3][Iaux];
					Iaux=x[0];
					Iaux=modular(Iaux); //el limite es la cantidad de digitos del alfabeto
					x[0]=Iaux;
			
			  	// E3.C le restamos lo incrementado en el paso 6.A
				  	x[0]-=posInicial3[0]; 
					Iaux=x[0];
					Iaux=modular(Iaux);
					x[0]=Iaux;	
		
			
			// 6. Paso por el 3er rotor inverso
				// 6.A se incrementa con la nueva posicion inicial de la clavija (despues de rotar)
					x[0]+= posInicial2[0];
					Iaux=x[0];
					Iaux=modular(Iaux); //el limite es la cantidad de digitos del alfabeto
					x[0]=Iaux;
				
				// 6.B permutacion x <- rotorInverso[rotor2][numeroGeneradoDeLaSuma] 	
					x[0] = rotorInverso[rotor2][Iaux];
					Iaux=x[0];
					Iaux=modular(Iaux); //el limite es la cantidad de digitos del alfabeto
					x[0]=Iaux;
			
			  	// 6.C le restamos lo incrementado en el paso 6.A
				  	x[0]-=posInicial2[0]; 
					Iaux=x[0];
					Iaux=modular(Iaux);
					x[0]=Iaux;
					
			// 7. Paso por el 2do rotor inverso
				// 7.A se incrementa con la nueva posicion inicial de la clavija (despues de rotar)
					x[0]+= posInicial1[0];
					Iaux=x[0];
					Iaux=modular(Iaux); //el limite es la cantidad de digitos del alfabeto
					x[0]=Iaux;
	
				// 7.B permutacion x <- rotorInverso[rotor1][numeroGeneradoDeLaSuma] 	
					x[0] = rotorInverso[rotor1][Iaux];
					Iaux=x[0];
					Iaux=modular(Iaux); //el limite es la cantidad de digitos del alfabeto
					x[0]=Iaux;
	
			  	// 7.C le restamos lo incrementado en el paso 7.A
				  	x[0]-=posInicial1[0]; 
					Iaux=x[0];
					Iaux=modular(Iaux);
					x[0]=Iaux;
	
			// 8. Paso por el 1do rotor inverso
				// 8.A se incrementa con la nueva posicion inicial de la clavija (despues de rotar)
					x[0]+= posInicial0[0];
					Iaux=x[0];
					Iaux=modular(Iaux); //el limite es la cantidad de digitos del alfabeto
					x[0]=Iaux;
	
				// 8.B permutacion x <- rotorInverso[rotor1][numeroGeneradoDeLaSuma] 	
					x[0] = rotorInverso[rotor0][Iaux];
					Iaux=x[0];
					Iaux=modular(Iaux); //el limite es la cantidad de digitos del alfabeto
					x[0]=Iaux;
		
			  	// 8.C le restamos lo incrementado en el paso 8.A
				  	x[0]-=posInicial0[0]; 
					Iaux=x[0];
					Iaux=modular(Iaux);
					x[0]=Iaux;
	
					Iaux+=65;
					textoEncriptado[h]=Iaux;
			}
			
				system("cls");   // LIMPIAR PANTALLA
				cout<<endl;
				cout<<endl;
				cout<<"LA PALABRA ENCRIPTADA ES: -> ";
			/*	
				for(i=0; i<h;i++)
				{
					cout<<textoEncriptado[i];
				}
		
				cout<<endl;
			*/
		
//		cout<<"\n(1). Encriptar/Desencriptar"<<endl;
//		cout<<"\n(2). SALIR "<<endl<<endl;
//		cout<<"----:> ";
//		cin>>preguntar;
//		cout<<endl;
//		cout<<endl;
		
		system("cls");   // LIMPIAR PANTALLA
		/*
				cout<<"\n\n ---------> ";
				
				for(i=0; i<h;i++)
				{
					cout<<textoEncriptado[i];
				}
				cout<<endl<<endl;*/
		
//	}while(preguntar != 2);
	
	//system ("pause");
	return textoEncriptado;
}

void encriptarEnigma(char textoEncriptado[] , char texto[], int contraNumero, char contrasenhaLetra[6])
{
	
	string mensajeS;
	string sToXXX; //Espacio a string
	string XXXtoS; //String a espacios
	char aux[MAX];
	char textoConcatenado[MAX];
	char texto01[MAX];
	char texto02[MAX];
	char texto2[MAX];
	char texto3[MAX];
	static int posiciones[100];
	int longitud, i ,j,k,contarMayusculas;
	
	
		// A: En caso de minusculas guardar minusculas
		
			longitud = strlen(texto);
			
			contarMayusculas=0;
			for(i=0; i<longitud ; i++)
			{				
				if(texto[i]>= 65 && texto[i]<=90)
				{
					posiciones[contarMayusculas] = i;		
					
					contarMayusculas++;
					
				}
			}			
					
			
	
		// B: convertir caracteres no aceptados a aceptados
		
			espacioAxxxx(texto); // transformar espacio a xxxx
	//		cout<<texto;
	//		cout<<endl;
	//		cout<<endl;
			
	//		system("pause");
		
		// C. transformar numeros a letras
			no_aceptadoAletras(texto);	
			
	//		cout<<texto;
	//		cout<<endl;
	//		system("pause");
				
		
	//strcat(textoConcatenado,texto);	
	//------> INGRESANDO DATOS A ENIGMA

	mensajeS = codigo_enigma(texto, contraNumero, contrasenhaLetra);
	
		// P2: retornar caracteres modificados
		strcpy(aux,mensajeS.c_str());
	
		// A. transformar xxxx a espacio
		
			xxxxAespacio(aux);  
			
		// B. transformar letras a numeros
			letrasAno_aceptado(aux);
			
			
		// C.Convertir todo a minusculas
		
			longitud = strlen(aux);
		
			for(j=0; j<longitud; j++)
			{
				aux[j]=tolower(aux[j]);
			}	
			
		// D. Convertir las posicione a mayusculas
	
		for(k=0; k<contarMayusculas; k++)
		{
			
			aux[posiciones[k]] = toupper(aux[posiciones[k]]);
			
		}
	
	strcpy(textoEncriptado,aux);
}

int main(void)
{
	char texto[MAX];
	char textoEncriptado[MAX];	
	int contrasenha1 = 12345;
	char contrasenha2[6];
	int i, caso;
	
	strcpy(contrasenha2,"QWERT");
	
	cout<<"1. Ingresar texto a encriptar"<<endl;
	cout<<"2. desencriptar mensaje"<<endl;
	cout<<"-------> ";
	cin>>caso;
	fflush(stdin);
	
	switch(caso)
	{
		case 1:
			cout<<"ingrese el texto a encriptar: ";
			cout<<endl;
			gets(texto);
			fflush(stdin);
			break;
			
		case 2:
			ifstream leer_fich;
			
			leer_fich.open("enigma.txt"); //ifstream ---> lectura de datos)
	
			
			leer_fich>>texto; //asumelo cono un cin>> 
							   //es decir ingresan que mostrar� los datos del .txt
			
			leer_fich.close();
				
			break;
			
	}
	
	encriptarEnigma(textoEncriptado, texto, contrasenha1, contrasenha2);
	
	cout<<"texto encriptado/desencriptado \n----> "<<textoEncriptado;
	cout<<endl;
	
	ofstream archivo;
				
	archivo.open("enigma.txt");
	
	archivo<<textoEncriptado;
	
	archivo.close();
	
	cout<<endl;
	system("pause");
	return 0;
}


