#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,res=0,m;
    cout<<"Digite um numero: ";
    cin>>n;
    for (m=0; m<=10; m++)
        {
            res=n*m;
            cout<<n<<" x "<<m<<" = "<<res<<"\n";
        }
}
