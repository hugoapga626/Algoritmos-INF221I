#include<iostream>
using namespace std;
int main()
{
    float vetor[20];
    int c=0;
    for(int i=0; i<20;i++)
    {
        vetor[i]=0;
    }
    for(int i=0; i<20; i++)
    {
        cout<<"Digite o valor:"<<endl;
        cin>>vetor[i];
    }
    cout<<endl<<endl<<"Valores menores ou iguais a dez:"<<endl;
    for(int i=0; i<20; i++)
    {
        if(vetor[i]<=10)
        {
            cout<<"A posicao dele e "<<i<<", sendo ele "<<vetor[i]<<endl;
            c=c+1;
        }
    }
    if(c==0)
    {
        cout<<"Nao ha valores menores que dez";
    }
    return 0;
}
