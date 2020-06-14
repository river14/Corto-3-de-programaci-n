#include "iostream"
#include "cmath"
#include "cstdlib"

using namespace std;

int main ()
{
    
    int horas;
    int extras;
    float hora =  1.75;
    float extra = 2.50;
    bool fin = false;

    do
    {
    cout<<endl;
    cout<<"CALCULE SU SALARIO" <<endl <<endl;

    cout<<"Introduzca el total de horas trabajadas: " ;
    cin>>horas;
    cout<<endl <<endl;

    cout<<"Introduzca sus horas extra: " ;
    cin>>extras;
    cout<<endl<<endl;

    int salario = (horas*hora) + (extras*extra);

    cout<<"Su salario total es: " << salario <<"$";
    cout<<endl <<endl;

    float seguro = salario * 0.04;

    float afp = salario * 0.0625;

    float renta = salario * 0.10;

    if (salario >= 500)
    {
        cout<<"Su salario real es: " << (salario - seguro - afp - renta) <<"$";
        cout<<endl;
        fin == false;
    }

    else
    {
        cout<<"Su salario real es: " << (salario - seguro - afp) <<"$";
        cout<<endl;
        fin == false;
    }
    } while (fin == false);
    

    system ("pause");
    return 0;
    
}
