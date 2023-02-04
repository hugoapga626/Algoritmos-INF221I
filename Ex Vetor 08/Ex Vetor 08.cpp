#include<iostream>
using namespace std;
int main()
{
    int n[100], v;
    for(int i=0; i<10;i++)
    {
        n[i]=0;
    }
    cout<<"Digite o valor inicial:"<<endl;
    cin>>v;
    n[0]=v;
    if(v<=50 &&  v>2)
    {
        for(int i=0; i<100; i++)
        {
            cout<<"N["<<i<<"] = "<<n[i]<<endl;
            n[i+1]=n[i]-1;
        }
    }
    else
    {
        cout<<"Valor nao aceito!!";
    }
    return 0;
}
