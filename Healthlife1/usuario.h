#include <stdio.h>
#ifndef _usuarioH_
#define _usuarioH_

int saude_Semana,felicidade_Semana;
struct personal
{
    int sexo_Usuario;
    int estudo_Usuario;
    char nome_Usuario[50][50];
    int esporte_Usuario;
};

struct personal usuario;

struct refeicoes
{
    int cafeda_Manha;
    int almoco;
    int lancheda_Tarde;
    int jantar;
    int sair;
    int consumo;
};
struct refeicoes alimentos;
#endif

