#include <locale.h>
#include <stdio.h>

#include "../base_exercicios/util.h"

#define MAX_STRING 100
#define QTD_MENU 2
#define MAX_CONTAS 100

typedef struct
{
    int dia;
    int mes;
    int ano;
} data;

typedef struct
{
    int numero;
    char nomeCliente[MAX_STRING];
    double saldo;
    data ultimaOperacao;
} conta;

void main()
{
    setlocale(LC_ALL, "Portuguese");

    conta listaContas[MAX_CONTAS];
    char *menu[QTD_MENU] = {"Nova conta", "Listar contas"};
    int dec, indice = 0;

    do
    {

    } while (dec < QTD_MENU);
}
