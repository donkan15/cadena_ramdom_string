#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
//#include <cstdlib.h>
#include <time.h>

using namespace std;

void GenerarRamdom(string nom[30][30]){
    char ram;
    int i=0,j=0,h=0;
    string cadena="";
    for(i=0;i<30;i++){ // llenar por fila

        for(j=0;j<30;j++){ // llenar por columnas
            srand(time(NULL)); //semilla
            ram = (char)rand()%90 + 65; // ver codigo ascii
            for(h=0;h<6;h++){ // llenar la cadena por caracter

                cadena = cadena + ram;
                srand(time(NULL)); //semilla
                ram = (char)rand()%90 + 65;

            }
            nom[i][j]=cadena;
            cout<<cadena<<endl;
            cadena="";

        }
    }
    /*srand(time(NULL)); //semilla
    ram = (char)rand()%90 + 65;*/
    cout<<cadena<<endl;
}

int main(){

    string nom[30][30];
    GenerarRamdom(nom);

    return 1;
}
