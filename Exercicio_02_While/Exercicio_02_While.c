#include<iostream>

#include<conio.h>

using namespace std;

int main()

{

    int n,res=0,m=0;

    cout<<"Digite um numero: ";

    cin>>n;

    while(m<10)

        {

            m=m+1;

            res=n*m;

            cout<<n<<" x "<<m<<" = "<<res<<"\n";

        }

}
