#include<iostream>

using namespace std;

int main ()

{

    int vetor[10], par=0;

    for(int index=0; index<=9; index++)

    {

        cout<<"Digite um valor:"<<"\n";

        cin>>vetor[index];

    }

    for(int index=0; index<=9; index++)

    {

        if(vetor[index]%2==0)

        cout<<"Os valores pares sao: "<<vetor[index]<<endl;

    }

    return 0;

}


