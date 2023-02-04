#include<iostream>

#include<conio.h>

using namespace std;

int main()

{

    int idade;

    cout<<"Digite sua idade: ";

    cin>>idade;

    if(idade<16)

    {

        cout<<"Voce ainda nao pode votar";

    }

    else if(idade==16)

        {

            cout<<"Voce pode votar, mas nao e obrigatorio";

        }

         else

        {

            cout<<"Voce pode votar, e e obrigatorio";

        }

}

