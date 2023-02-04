
#include<iostream>

using namespace std;

int main ()

{

    int vetor1[10], vetor2[10], vetor3[10];

    for(int index=0; index<=9; index++)

    {

        cout<<"Digite um valor:"<<"\n";

        cin>>vetor1[index];

    }

    for(int index=0; index<=9; index++)

    {

        cout<<"Digite um valor:"<<"\n";

        cin>>vetor2[index];

    }

    for(int index=0; index<=9; index++)

    {

        vetor3[index]=vetor1[index]+vetor2[index];

        cout<<"A soma é: "<<vetor3[index]<<endl;

    }

    return 0;

}
