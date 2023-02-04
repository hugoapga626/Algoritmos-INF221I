#include<iostream>

#include<conio.h>

using namespace std;

int main()

{

    string nome;

    float nota1,nota2,nota3,nota4,media;

    cout<<"Digite o nome dos aluno: \n";

    cin>>nome;

    cout<<"Digite a primeira nota: \n";

    cin>>nota1;

    cout<<"Digite a segunda nota: \n";

    cin>>nota2;

    cout<<"Digite a terceira nota: \n";

    cin>>nota3;

    cout<<"Digite a quarta nota: \n";

    cin>>nota4;

    media=(nota1+nota2+nota3+nota4)/4;

    if(media<4)

    {

        cout<<"O(A) aluno(a) "<<nome<<", ficou com media "<<media<<", conceito final E, portanto esta REPROVADO.";

    }

    else if(media>=6)

        {

            if(media<7.5)

                {

                    cout<<"O(A) aluno(a) "<<nome<<", ficou com media "<<media<<", conceito final C, portanto esta APROVADO.";

                }

            else if(media<9)

                {

                    cout<<"O(A) aluno(a) "<<nome<<", ficou com media "<<media<<", conceito final B, portanto esta APROVADO.";

                }

                    else

                        {

                            cout<<"O(A) aluno(a) "<<nome<<", ficou com media "<<media<<", conceito final A, portanto esta APROVADO.";

                        }

        }

        else

        {

            cout<<"O(A) aluno(a) "<<nome<<", ficou com media "<<media<<", conceito final D, portanto esta REPROVADO.";

        }

}

