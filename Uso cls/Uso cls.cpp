#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int op,rep=1;
    float n1,n2,resultado;
    while(rep==1)
    {
        cout<<"Digite um valor: ";
        cin>>n1;
        cout<<"\nDigite outro valor: ";
        cin>>n2;
        cout<<"\nDigite um numero de 1 a 4 sendo que: \n1 e ADICAO\n2 e SUBTRACAO\n3 e MULTIPLICACAO\n4 e DIVISAO\n: ";
        cin>>op;
        switch(op)
        {
            case 1:
                resultado=n1+n2;
                cout<<"A soma dos numeros e: "<<resultado;
            break;
            case 2:
                resultado=n1-n2;
                cout<<"A subtracao dos numeros e: "<<resultado;
            break;
            case 3:
                resultado=n1*n2;
                cout<<"A multiplicacao dos numeros e: "<<resultado;
            break;
            case 4:
                if(n2!=0)
                    {
                        resultado=n1/n2;
                        cout<<"A divisao dos numeros e: "<<resultado;
                    }
                else
                    {
                        cout<<"Nao existe divisao por 0.";
                        cout<<" Mas pode tentar se quiser!";
                    }
            break;
            default:
                cout<<"Nao ha operacao neste caso";
        }
        cout<<"\nDeseja continuar?\n1=SIM\n2=NAO\n";
        cin>>rep;
        system("cls");
    }
}
