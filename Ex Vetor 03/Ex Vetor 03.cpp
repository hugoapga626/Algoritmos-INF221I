#include<iostream>

using namespace std;

int main()

{

    int vetor[10], maior=0;

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

    for(int i=0; i<10; i++)

    {

        if(vetor[i]>maior)

        {

        maior=vetor[i];

        }

    }

    cout<<"O maior numero e: "<<maior;

    return 0;

}
