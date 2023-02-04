#include<iostream>
#include<conio.h>
using namespace std;
void fcmsg(); //2-DECLARAR A FUNÇÃO
void fcsoma(float a,float b);
void fcsubtracao(float a,float b);
void fcmultiplicacao(float a,float b);
void fcdivisao(float a,float b);
int main(float a,float b)
{
    float n1,n2;
    int x;
    fcmsg();
    cout<<"\nDigite o primeiro numero: ";
    cin>>n1;
    cout<<"\nDigite o segundo numero: ";
    cin>>n2;
    cout<<"Digite:\n 1 para soma;\n 2 para subtracao;\n 3 para multiplicacao;\n 4 para divisao;"<<endl;
    cin>>x;
    switch (x)
    {
    case 1:
    cout<<"\n Soma: ";
    fcsoma(n1,n2);
    break;
    case 2:
    cout<<"\n Subtracao: ";
    fcsubtracao(n1,n2);
    break;
    case 3:
    cout<<"\n Multiplicacao: ";
    fcmultiplicacao(n1,n2);
    break;
    case 4:
        if (n2==0)
        {
            cout<<"Nao ha divisao com este "<<n2<<" valor";
        }
        else
        {
            cout<<"\n Divisao: ";
            fcdivisao(n1,n2);
        }
    break;
    default: cout<<"Opcao invalida";
    }
}
//1 - CRIAR A FUNÇÃO
void fcmsg()
{
    cout<<"SEJA BEM VINDO AO IFSP.";
}
void fcsoma(float a,float b)
{
    cout<<a+b;
}
void fcsubtracao(float a,float b)
{
    cout<<a-b;
}
void fcmultiplicacao(float a,float b)
{
    cout<<a*b;
}
void fcdivisao(float a,float b)
{
    cout<<a/b;
}
