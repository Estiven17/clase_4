#include <iostream> // biblioteca de entrada y salida

using namespace std; //palabras clave    cout y cin

int main()    //aqui empieza el algoritmo
{  //declaracion de variables
    int time=0 ;
    float value=0.0, inc=0.0;
    char categoria = 'o';
   //ingresar datos
    cout<<"ingrese sueldo : ";
    cin>> value;
    cout<<"ingrese tiempo en a�os : ";
    cin>> time;
    //declaracion de condiciones y posibilidades
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
        // declaracion de casos
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
        //se muestran los datos
        cout<<" categoria = "<< categoria<< endl;
        cout<<" aumento = " << inc<<endl;

        return 0;
    }
}
