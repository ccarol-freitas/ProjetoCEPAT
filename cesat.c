

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <time.h>

typedef struct
{
    char nome[50];
    char dataN[11];
    char rg[14];
    char email[50];
    int status;
} cadastro;
int main()
{
    setlocale(LC_ALL, "Portuguese");
    cadastro visitante[300];
    int op, op1, opvis, i, respexcluir, nassento, especial, convidado, mailseat, ocupado;
    int qvis = 0;
    int pulaCadeira;

    for (i = 1; i <= 300; i++)
    {
        visitante[i].status = 0;
    }

    while (op != 4)
    {
        printf("\t\tCEPAT - CONTROLE DE CADEIRAS\n\n");
        printf("1-Gerenciar Visitante\n");
        printf("2-Realizar sorteio\n");
        printf("3-Enviar comunicado por email\n");
        printf("4-Sair\n\n");
        printf("Escolha uma opção: \n");
        scanf("%d", &op);

        switch (op)
        {
            while (opvis != 6)
            {
            case 1:

                system("cls");
                printf("1-Incluir Visitante\n");
                printf("2-Excluir Visitante\n");
                printf("3-Listar Lugares Livres\n");
                printf("4-Listar lugares ocupados\n");
                printf("5-Mostrar Todos os Lugares\n");
                printf("6-Retornar ao menu inicial\n\n");
                printf("Escolha uma opção:\n");
                scanf("%d", &opvis);

                switch (opvis)
                {
                case 1:
                    system("cls");

                    printf("\n\nO visitante necessita de assento especial?\n\n Se sim digite '1', se não digite '2': ");
                    scanf("%d", &especial);

                    if (especial == 1)
                    {

                        printf("Escolha o assento: \n\n");
                        do
                        {
                            for (i = 1; i <= 15; i++)
                            {
                                if (visitante[i].status == 0)
                                {
                                    // mostra os lugares
                                    printf("| %d", i);
                                }
                                else
                                {
                                    printf("| X ");
                                }
                            }
                            printf("\n\nEscolha o assento:");
                            scanf("%d", &nassento);

                            for (i = 1; i <= 300; i++)
                            {
                                if (nassento == i)
                                {
                                    if (visitante[i].status == 1)
                                    {
                                        ocupado = 1;
                                        printf("Assento ocupado \n");
                                        printf("APERTE ENTER PARA ESCOLHER OUTRO ASSENTO!");
                                        getch();
                                        system("cls");
                                        printf("Escolha outro assento:\n\n");
                                    }
                                    else
                                    {
                                        ocupado = 0;
                                    }
                                }
                            }
                        } while (ocupado == 1);
                        printf("\n\nPreencha as informações para cadastro: \n");

                        for (i = 1; i <= 15; i++)
                        {
                            if (nassento == i)
                            {
                                //formulario
                                printf("Nome: ");
                                fflush(stdin);
                                gets(visitante[i].nome);
                                printf("Data de Nascimento: ");
                                gets(visitante[i].dataN);
                                printf("RG: ");
                                gets(visitante[i].rg);
                                printf("E-mail: ");
                                gets(visitante[i].email);
                                visitante[i].status = 1;
                                qvis++;

                                printf("\nVisitante cadastrado com sucesso!");
                                printf("\n%s\n", visitante[i].nome);
                                printf("%s\n", visitante[i].dataN);
                                printf("%s\n", visitante[i].rg);
                                printf("%s\n", visitante[i].email);
                                printf("Assento reservado: %d", i);
                                printf("\n\nAPERTE A TECLA ENTER PARA VOLTAR AO MENU!");
                                getch();

                            } //2if
                        }     //2for
                    }
                    else
                    {
                        system("cls");
                        printf("\n\nO visitante é um convidado?\n\n Se sim digite '1', se não digite '2': ");
                        scanf("%d", &convidado);
                        if (convidado == 1)
                        {

                            do
                            {
                                for (i = 16; i <= 25; i++)
                                {
                                    if (visitante[i].status == 0)
                                    {
                                        // mostra os lugares
                                        printf("| %d", i);
                                    } //if
                                    else
                                    {
                                        printf("| X ");
                                    } //else

                                } //for

                                printf("\n\nQual o assento: ");
                                scanf("%d", &nassento);

                                for (i = 1; i <= 300; i++)
                                {
                                    if (nassento == i)
                                    {
                                        if (visitante[i].status == 1)
                                        {
                                            ocupado = 1;
                                            printf("Assento ocupado \n\n");
                                            printf("APERTE ENTER PARA ESCOLHER OUTRO ASSENTO!!!!! \n\n");
                                            getch();
                                            system("cls");

                                            printf("Escolha outro assento:\n\n");
                                        } //if
                                        else
                                        {
                                            ocupado = 0;
                                        } //else
                                    }     //if
                                }         //for
                            }             //do
                            while (ocupado == 1);
                            printf("\n\nPreencha as informações para cadastro: \n");

                            for (i = 16; i <= 25; i++)
                            {
                                if (nassento == i)
                                {
                                    //formulario
                                    printf("Nome: ");
                                    fflush(stdin);
                                    gets(visitante[i].nome);
                                    printf("Data de Nascimento: ");
                                    gets(visitante[i].dataN);
                                    printf("RG: ");
                                    gets(visitante[i].rg);
                                    printf("E-mail: ");
                                    gets(visitante[i].email);
                                    visitante[i].status = 1;
                                    qvis++;

                                    printf("\nVisitante cadastrado com sucesso!");
                                    printf("\n%s\n", visitante[i].nome);
                                    printf("%s\n", visitante[i].dataN);
                                    printf("%s\n", visitant e[i].rg);
                                    printf("%s\n", visitant e[i].email);
                                    printf("Assento reservado: %d", i);
                                    printf("\n\nAPERTE A TECLA ENTER PARA VOLTAR AO MENU!");
                                    getch();

                                } //2if
                            }     //2for
                        }         //if
                        else
                        {
                            system("cls");
                            pulaCadeira = 50;
                            do
                            {
                                for (i = 26; i <= 300; i++)
                                {
                                    if (visitante[i].status == 0)
                                    {
                                        // mostra os lugares
                                        if (i > 9 && i < 100)
                                        {
                                            printf("| %d", i);
                                        }
                                        else
                                        {
                                            printf("|%d", i);
                                        }
                                    } //if
                                    else
                                    {
                                        printf("| X ");
                                    } //else

                                    if (i == pulaCadeira)
                                    {
                                        printf("\n");
                                        pulaCadeira += 25;
                                    }

                                } //for
                                pulaCadeira = 0;

                                printf("\n\nQual o assento: ");
                                scanf("%d", &nassento);

                                for (i = 1; i <= 300; i++)
                                {
                                    if (nassento == i)
                                    {
                                        if (visitante[i].status == 1)
                                        {
                                            ocupado = 1;
                                            printf("Assento ocupado \n\n");
                                            printf("APERTE ENTER PARA ESCOLHER OUTRO ASSENTO!!!!! \n\n");
                                            getch();
                                            system("cls");

                                            printf("Escolha outro assento:\n\n");
                                        } //if
                                        else
                                        {
                                            ocupado = 0;
                                        } //else
                                    }     //if
                                }         //for
                            }             //do
                            while (ocupado == 1);

                            printf("\n\nPreencha as informações para cadastro: \n");

                            for (i = 26; i <= 300; i++)
                            {
                                if (nassento == i)
                                {
                                    //formulario
                                    printf("Nome: ");
                                    fflush(stdin);
                                    gets(visitante[i].nome);
                                    printf("Data de Nascimento: ");
                                    gets(visitante[i].dataN);
                                    printf("RG: ");
                                    gets(visitante[i].rg);
                                    printf("E-mail: ");
                                    gets(visitante[i].email);
                                    visitante[i].status = 1;
                                    qvis++;

                                    printf("\nVisitante cadastrado com sucesso!");
                                    printf("\n%s\n", visitante[i].nome);
                                    printf("%s\n", visitante[i].dataN);
                                    printf("%s\n", visitante[i].rg);
                                    printf("%s\n", visitante[i].email);
                                    printf("Assento reservado: %d", i);
                                    printf("\n\nAPERTE A TECLA ENTER PARA VOLTAR AO MENU!");
                                    getch();
                                } //2if
                            }     //2for
                        }
                    }
                    break;

                case 2:
                    system("cls");
                    //Exclusão do Visitante
                    printf("Assentos e visitante: \n");

                    for (i = 1; i <= 300; i++)
                    {
                        if (visitante[i].status == 1)
                        {

                            printf("Número do assento: %d |Nome do visitante: %s\n\n", i, visitante[i].nome);
                        }
                    }

                    printf("Qual assento deseja liberar?\n\n ");
                    scanf("%d", &respexcluir);

                    for (i = 1; i <= 300; i++)
                    {
                        if (respexcluir == i)
                        {
                            visitante[i].status = 0;
                        }
                    }

                    printf("Visitante excluido com sucesso!");
                    getch();
                    break;
                case 3:
                    system("cls");
                    printf("Lugares Livres:\n\n");
                    pulaCadeira = 25;
                    for (i = 1; i <= 300; i++)
                    {
                        if (visitante[i].status == 0)
                        {
                            if (i < 10)
                            {
                                printf("|  %d", i);
                            }
                            else if (i > 9 && i < 100)
                            {
                                printf("| %d", i);
                            }
                            else
                            {
                                printf("|%d", i);
                            }

                            if (i == pulaCadeira)
                            {
                                printf("\n");
                                pulaCadeira += 25;
                            }
                        }
                    }
                    pulaCadeira = 0;
                    printf("\n\nAPERTE A TECLA ENTER PARA VOLTAR AO MENU!");
                    getch();
                    break;
                case 4:
                    system("cls");
                    printf("Lugares Ocupados:\n\n");
                    for (i = 1; i <= 300; i++)
                    {
                        if (visitante[i].status == 1)
                        {
                            if (i < 10)
                            {
                                printf("|  %d", i);
                            }
                            else if (i > 9 && i < 100)
                            {
                                printf("| %d", i);
                            }
                            else
                            {
                                printf("|%d", i);
                            }
                        }
                    }
                    printf("\n\nAPERTE A TECLA ENTER PARA VOLTAR AO MENU!");
                    getch();
                    break;
                case 5:
                    system("cls");
                    printf("Todos os Assentos:\n\n");
                    pulaCadeira = 25;
                    for (i = 1; i <= 300; i++)
                    {
                        if (visitante[i].status == 0)
                        {
                            if (i < 10)
                            {
                                printf("|  %d", i);
                            }
                            else if (i > 9 && i < 100)
                            {
                                printf("| %d", i);
                            }
                            else
                            {
                                printf("|%d", i);
                            }
                        }
                        else
                        {
                            printf("| X ");
                        }

                        if (i == pulaCadeira)
                        {
                            printf("\n");
                            pulaCadeira += 25;
                        }
                    }
                    pulaCadeira = 0;
                    printf("\n\nLugares com | X | já estão ocupados!");
                    printf("\n\nAPERTE A TECLA ENTER PARA VOLTAR AO MENU!");
                    getch();
                    break;
                case 6:
                    break;
                default:
                    printf("Opção invalida!!!");
                    getch();
                    break;
                }
            }
            system("cls");
            break;

        case 2:
            system("cls");
            printf("Realizar Sorteio\n");

            srand(time(NULL));
            printf("%d\n", rand() % 300);

            printf("\n\nAPERTE A TECLA ENTER PARA VOLTAR AO MENU!");
            getch();
            system("cls");
            break;

        case 3:
            system("cls");

            printf("1-Enviar para e-mail especifico.\n");
            printf("2-Enviar para todos os Visitantes\n");
            printf("3-Retornar ao menu inicial\n");
            scanf("%d", &op1);

            if (op1 == 1)
            {
                printf("Informe o assento do visitante:\n\n");
                scanf("%d", &mailseat);
                for (i = 1; i <= 300; i++)
                {
                    if (mailseat == i)
                    {
                        printf("E-mail enviado para %s com sucesso!", visitante[i].email);
                    }
                }
            }

            if (op1 == 2)
            {
                printf("E-mail enviado para todos com sucesso!");
            }
            if (op1 == 3)
            {
                system("cls");
                break;
            }
            printf("\n\nAPERTE A TECLA ENTER PARA VOLTAR AO MENU!");
            getch();
            system("cls");
            break;

        case 4:
            break;
        }
    }
}
