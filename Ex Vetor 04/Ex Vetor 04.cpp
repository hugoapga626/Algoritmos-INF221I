#include<iostream>
using namespace std;
int main()
{
    int vetor[10], x=0, da=0;
    //inicialização
    for(int i=0; i<10;i++)
    {
        vetor[i]=0;
    }
    //
    for(int i=0; i<10; i++)
    {
        cout<<"Digite o valor:"<<endl;
        cin>>vetor[i];
    }
    cout<<"Digite o valor a ser encontrado:"<<endl;
    cin>>x;
    for(int i=0; i<10; i++)
    {
        if(x==vetor[i])
        {
            cout<<"A posicao do numero e: "<<i<<endl;
            da=da+1;
        }
    }
    if(da==0)
    {
        cout<<"A posicao do numero e -1"<<endl;
    }
    return 0;
}
