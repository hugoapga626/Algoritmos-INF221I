#include<iostream>

#include<conio.h>

#include<math.h>

using namespace std;

int main()

{

    float a,b,c,del,x1,x2;

    cout<<"Digite a incognita A ";

    cin>>a;

    cout<<"Digite a incognita B ";

    cin>>b;

    cout<<"Digite a incognita C ";

    cin>>c;

    del=pow(b,2)-4*a*c;

    if(del>=0)

    {

        x1=(-(b)-sqrt(del))/2*a;

        x2=(-(b)+sqrt(del))/2*a;

        if(x1!=x2)

        {

            cout<<"Seu x1 deu "<<x1<<", e seu x2 e "<<x2;

        }

        else

        {

            cout<<"O valor de ambos deu "<<x1;

        }

    }

    else

    {

        cout<<"Nao admite solucao real";

    }

}
