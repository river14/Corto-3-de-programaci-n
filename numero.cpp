#include "iostream"
#include "cmath"
#include "cstdlib"

using namespace std;

int main ()
{
int numero = 35;
bool fin = false;
int intentos = 4;
int s;

do
{
cout<<"ADIVINE EL NUMERO! INTRODUZCA UN NUMERO DEL 1 AL 100: ";
cin>>numero;
cout<<endl;

if (numero == 35 )
{
    fin =true;
}
else if (numero == 34 || numero == 36 )
{
    cout<<"PODRIA SER UN NUMERO MAS O UN NUMERO MENOS!" <<endl;
    cout<<"NUMERO DE INTENTOS RESTANTES: " <<intentos -- <<endl;
    cout<<endl;
    cout<<"SI DESEA CONTINUAR PRESIONE 0, SI DESEA SALIR 1: ";
    cin>>s;
    cout<<endl;
    if (s == 0)
    {
        fin == false;
    }
    else if (s != 0)
    {
        exit (EXIT_FAILURE);
    }
}
else if (numero >= 30 && numero < 34)
{
    cout<<"CERCA, PERO MUY CERCA!, EL NUMERO QUE BUSCAS ES MAYOR" <<endl;
    cout<<"NUMERO DE INTENTOS RESTANTES: " <<intentos -- <<endl;
    cout<<endl;
    cout<<"SI DESEA CONTINUAR PRESIONE 0, SI DESEA SALIR PRESIONE 1: ";
    cin>>s;
    cout<<endl;
    if (s == 0)
    {
        fin == false;
    }
    else if (s != 0)
    {
        exit (EXIT_FAILURE);
    }
}
else if (numero <= 40 && numero > 36)
{
    cout<<"CERCA, PERO MUY CERCA!, EL NUMERO QUE BUSCAS ES MENOR" <<endl;
    cout<<"NUMERO DE INTENTOS RESTANTES: " <<intentos -- <<endl;
    cout<<endl;
    cout<<"SI DESEA CONTINUAR PRESIONE 0, SI DESEA SALIR PRESIONE 1: ";
    cin>>s;
    cout<<endl;
    if (s == 0)
    {
        fin == false;
    }
    else if (s != 0)
    {
        exit (EXIT_FAILURE);
    }
}
else if (numero <= 29 || numero >= 41)
{
    cout<<"DEMASIADO LEJOS!" <<endl;
    cout<<"NUMERO DE INTENTOS RESTANTES: "<<intentos -- <<endl;
    cout<<endl;
    cout<<"SI DESEA CONTINUAR PRESIONE 0, SI DESEA SALIR PRESIONE CUALQUIER NUMERO: ";
    cin>>s;
    cout<<endl;
    if (s == 0)
    {
        fin == false;
    }
    else if (s != 0)
    {
        exit (EXIT_FAILURE);
    }
}
} 
while (fin == false && intentos > -1);

if (fin == false)
{
    cout<<"NO HA PODIDO ADIVINAR EL NUMERO :(" <<endl;
}
else
{
    cout<<"FELICIDADES, HA ADIVINADO EL NUMERO!" <<endl;
}
system("pause") ;
return 0;
}




    
    

    












