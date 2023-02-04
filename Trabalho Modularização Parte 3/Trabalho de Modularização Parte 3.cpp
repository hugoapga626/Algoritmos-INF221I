#include<iostream>
#include<conio.h>
using namespace std;
float SALARIO20 (float SALARIO);
int TEMPODESERVICO (int ANO1, int ANOATUAL);
void COMPARACOES (float PARCELA, float SALARIO20, int TEMPODESERVICO);
int main()
{
    float parcela, salario;
    int ano,  anoatual;
    cout<<"Digite o teu salario: ";
    cin>>salario;
    cout<<"Digite o ano em que foi contratado: ";
    cin>>ano;
    cout<<"Digite o valor que desejas fazer da parcela do emprestimo (em reais): ";
    cin>>parcela;
    anoatual=2022;
    if (salario >0 && ano >1900 && parcela >0 && ano <=2022)
    {
        COMPARACOES (parcela, SALARIO20 (salario), TEMPODESERVICO (anoatual, ano));
    }
    else
    {
        cout<<"Valores incorretos";
    }
    return 0;
}
float SALARIO20 (float SALARIO)
{
    return SALARIO*20/100;
}
int TEMPODESERVICO (int ANOATUAL, int ANOCONTRATACAO)
{
    return ANOATUAL-ANOCONTRATACAO;
}
void COMPARACOES (float PARCELA, float SALARIO20, int TEMPODESERVICO)
{
    if (TEMPODESERVICO > 5 &&  PARCELA<SALARIO20)
    {
        cout<<"Emprestimo concedido";
    }
    else if (TEMPODESERVICO <= 5 &&  PARCELA>=SALARIO20)
    {
        cout<<"Emprestimo negado por conta da parcela estar acima de 20 por cento do teu salario e por voce nao ter o tempo de registro suficiente";
    }
    else if (TEMPODESERVICO <= 5)
    {
        cout<<"Emprestimo negado por nao ter o tempo de registro suficiente";
    }
    else
    {
        cout<<"Emprestimo negado pela parcela estar acima de 20 por cento do salario";
    }
}
