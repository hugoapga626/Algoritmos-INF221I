#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
float INSS(float A);
float IRPF(float A);
void SALLIQUI(float A, float B, float C);
int main()
{
    float sal=0, inss=0,irpf=0, desconto=0, salliqui=0;
    cout<<setprecision(2)<<fixed;
    cout<<"Digite teu salario: RS ";
    cin>>sal;
    if (sal>=0)
    {
    inss=INSS(sal);
    irpf=IRPF(sal);
    SALLIQUI(sal, inss,irpf);
    }
    else {
        cout<<"\n\nNao e possivel calcular os valores\n\n";
    }
    return 0;
}
float INSS(float A)
{
    if(A<= 1500.00)
    {
        return 0.08*A;
    }
    else if (A>1500.00 && A<=2000.00)
        {
            return 0.09*A;
        }
        else
        {
            return 0.11*A;
        }
}
float IRPF(float A)
{
    if (A<=2000.00)
    {
        return 0;
    }
    else if (A>2000.00 && A<=3000.00)
        {
            return 0.1*A;
        }
        else
        {
            return 0.15*A;
        }
}
void SALLIQUI(float A, float B, float C)
{
    cout<<endl;
    cout<<"PROVENTOS\nSALARIO BASE...........: RS "<<A<<endl;
    cout<<"-----------------------------------------------"<<endl<<endl;
    cout<<"DESCONTOS\nINSS...........: RS "<<B<<endl;
    cout<<"IRPF..........: RS "<<C<<endl;
    cout<<"-----------------------------------------------"<<endl;
    float desconto=B+C;
    cout<<"TOTAL DE DESCONTOS..........: RS "<<desconto<<endl<<endl<<endl;
    float salliqui=A-(B+C);
    cout<<"SALARIO LIQUIDO..........: RS "<<salliqui;
}
