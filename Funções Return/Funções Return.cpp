#include<iostream>
#include<conio.h>
using namespace std;
int fncSoma(int A, int B);//2-Protótipo (declara a função) com 2 parâmetros e retorno Inteiro
int fncSub(int A, int B);
int fncMulti(int A, int B);
int fncDiv(int A, int B);
int main()
{
    int num1,num2,x;
    int resultado=0;
    cout<<"Calculando a soma... \n";
    cout<<"\n Digite o primeiro numero: ";
    cin>>num1;
    cout<<"\n Digite o segundo numero: ";
    cin>>num2;
    cout<<"Digite:\n 1 para soma;\n 2 para subtracao;\n 3 para multiplicacao;\n 4 para divisao;"<<endl;
    cin>>x;
    switch (x)
    {
    case 1:
    resultado=fncSoma(num1,num2);//3-Executa a função passando 2 parâmetros: num1 e num2 e retornando um valor inteiro.
    cout<<"\n A soma e: "<<resultado;
    break;
    case 2:
    resultado=fncSub(num1,num2);//3-Executa a função passando 2 parâmetros: num1 e num2 e retornando um valor inteiro.
    cout<<"\n A subtracao e: "<<resultado;
    break;
    case 3:
    resultado=fncMulti(num1,num2);//3-Executa a função passando 2 parâmetros: num1 e num2 e retornando um valor inteiro.
    cout<<"\n A multiplicacao e: "<<resultado;
    break;
    case 4:
        if (num2==0)
        {
            cout<<"Nao ha divisao com este "<<num2<<" valor";
        }
        else
        {
            resultado=fncDiv(num1,num2);//3-Executa a função passando 2 parâmetros: num1 e num2 e retornando um valor inteiro.
            cout<<"\n A divisao e: "<<resultado;
        }
    break;
    default: cout<<"Opcao invalida";
    }
    return 0;
}
int fncSoma(int A, int B)//1-Cria a função com 2 parâmetros e com retorno Inteiro
{
    return A+B;
}
int fncSub(int A, int B)//1-Cria a função com 2 parâmetros e com retorno Inteiro
{
    return A-B;
}
int fncMulti(int A, int B)//1-Cria a função com 2 parâmetros e com retorno Inteiro
{
    return A*B;
}
int fncDiv(int A, int B)//1-Cria a função com 2 parâmetros e com retorno Inteiro
{
    return A/B;
}
