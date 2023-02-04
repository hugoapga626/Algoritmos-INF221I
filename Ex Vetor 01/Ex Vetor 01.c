#include<iostream>

using namespace std;

int main ()

{

    int vetor[10];

    for(int index=0; index<=9; index++)

    {

        cout<<"Digite um valor:"<<"\n";

        cin>>vetor[index];

    }

    for(int index=9; index>=0; index--)

    {

        cout<<vetor[index]<<endl;

    }

    return 0;

}
