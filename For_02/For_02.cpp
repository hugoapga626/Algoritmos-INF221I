#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,c,soma=0;
    for (c=1; c<=4; c++)
        {
            cout<<"Digite um numero inteiro: ";
            cin>>n;
            soma=soma+n;
        }
    cout<<"\nA soma dos quatro numeros e: "<<soma;
}
