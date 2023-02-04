#include<iostream>
#include<conio.h>
using namespace std;
float PESOIDEAL (float ALTURA, float SEXO);
float IMC (float PESO, float ALTURA);
void TABELA (float PESOIDEAL, float IMC);
int main ()
{
    float peso, altura;
    int sexo;
    cout<<"Digite o teu peso em quilogramas (coloque ponto para separar as casas decimais): ";
    cin>>peso;
    cout<<"Digite a tua altura em metros (coloque ponto para separar as casas decimais): ";
    cin>>altura;
    cout<<"Digite 1 se for do sexo masculino e 2 se for do sexo feminino: ";
    cin>>sexo;
    if (sexo==1 || sexo==2)
    {
        TABELA (PESOIDEAL (altura, sexo), IMC (peso, altura));
    }
    else
    {
        cout<<"Resposta para o sexo nao aceita";
    }
}
float PESOIDEAL (float ALTURA, float SEXO)
{
    if (SEXO=1)
    {
        return (72.7*ALTURA)-58;
    }
    else
    {
        return (62.1*ALTURA)-44.7;
    }
}
float IMC (float PESO, float ALTURA)
{
    return PESO/(ALTURA*ALTURA);
}
void TABELA (float PESOIDEAL, float IMC)
{
    cout<<"O teu peso ideal seria : "<<PESOIDEAL<<endl;
    cout<<"O teu indice de massa corporal e: "<<IMC<<endl;
    if(IMC<17)
    {
        cout<<"Voce esta muito abaixo do peso";
    }
    else if(IMC<=18.49)
    {
        cout<<"Voce esta abaixo do peso";
    }
    else if(IMC<=24.99)
    {
        cout<<"Voce esta no peso normal";
    }

    else if(IMC<=29.99)
    {
        cout<<"Voce esta acima do peso";
    }
    else if(IMC<=34.99)
    {
        cout<<"Voce esta na obesidade 1";
    }
    else if(IMC<=39.99)
    {
        cout<<"Voce esta na obesidade 2(severa)";
    }
    else
    {
        cout<<"Voce esta na obesidade 3(morbida)";
    }
}
