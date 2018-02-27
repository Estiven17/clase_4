#include <iostream> // biblioteca de entrada y salida

using namespace std; //palabras clave    cout y cin

int main()    //aqui empieza el algoritmo
{
    int time=0 ;
    float value=0.0, inc=0.0;
    char categoria = 'o';
    cout<<"ingrese sueldo : ";
    cin>> value;
    cout<<"ingrese tiempo en años : ";
    cin>> time;
    if (time>20&&time<=30)
    {
        categoria= 'A';
    }
    else
    {
        if (time>15&&time<=20 )

        {
            categoria='B' ;
        }
        else
        {
            if (time>10&&time<=15)
            {
                categoria='C';
            }
            else
            {
                if (time>0&&time<=10)
                {

                    categoria='D';
                }
            }
        }



    }

    switch (categoria)
    {

    case 'A' :

        inc=value*0.15;
        break;
    case 'B':
        inc=value*0.12;
        break;
    case 'C' :
        inc=value*0.10;
        break;
    case 'D' :
        inc=value*0.5;
        break;
    }

    cout<<" categoria = "<< categoria<< endl;
    cout<<" aumento = " << inc;






    return 0;
}
