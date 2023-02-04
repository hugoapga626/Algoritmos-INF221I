#include<iostream>
using namespace std;
int main()
{
    float n[100];
    int x;
    for(int i=0; i<100;i++)
    {
        n[i]=0;
    }
    cout<<"Digite o valor inicial:"<<endl;
    cin>>x;
    n[0]=x;
    if(x>=0)
    {
        for(int i=0; i<100; i++)
        {
            cout<<"N["<<i<<"] = "<<n[i]<<endl;
            n[i+1]=n[i]/2;
        }
    }
    else
    {
        cout<<"Valor nao aceito!!";
    }
    return 0;
}
