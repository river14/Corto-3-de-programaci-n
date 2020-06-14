#include "iostream"
#include "cstdlib"
#include "cmath"

using namespace std;

int main ()
{
    int year;
    int prueba;
    int ndprueba;
    int rdprueba;
    bool fin = false;

    do
    {
    cout<<endl;
    cout<<"COMPRUEBE SI UN YEAR ES BISIESTO O NO";
    cout<<endl <<endl;

    cout<<"INTRODUZCA EL YEAR: ";
    cin>>year;
    cout<<endl;

    prueba = (year % 400);

    ndprueba = (year % 4);

    rdprueba = (year % 100);

    if (prueba == 0 )
    {
        cout<<"EL YEAR QUE INTRODUJO ES BISIESTO";
        fin == false;
        cout<<endl;
    }

    else if ( ndprueba == 0 && rdprueba != 0)
    {
        cout<<"EL YEAR QUE INTRODUJO ES BISIESTO";
        fin == false;
        cout<<endl;
    }
    else
    {
        cout<<"EL YEAR QUE INTRODUJO NO ES BISIESTO";
        fin == false;
        cout<<endl;
    }
    
    } while (fin == false);
    
    system("pause");
    return 0;
    
}