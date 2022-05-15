#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <conio.h>

#include "all_libraries.h"

//VARIAVEIS
int saude=50,felicidade=50,i,j;
int saude_Semana,felicidade_Semana;
char menu;

//PONTEIRO
FILE *healthlife; 
FILE *boy;
FILE *girl;

//MATRIZ DO FLUXO GERAL
                    //  cf al lc  jt
int diada_Semana[7][4]={10,20,30,40,  //segunda
                        11,21,31,41,  //terca
                        12,22,32,42,  //quarta
                        13,23,33,43,  //quinta
                        14,24,34,44,  //sexta
                        15,25,35,45,  //sabado
                        16,26,36,46}; //domingo

//FUNCOES
void principal(void){
    healthlife = fopen("txts//healthlife.txt","r");
    boy = fopen("txts//boy.txt","r");
    girl = fopen("txts//girl.txt","r");
        while( fgets(ascii,1000,healthlife) != NULL)
                printf("%s",ascii);
                fclose(healthlife);

printf("\t\t     1-INICIAR\n\n\t\t     2-CRÉDITOS\n\n\t\t     3-SAIR\n");

menu=getch();
system("pause");
system("cls");
               

switch (menu)
{
    case '1':
        tectec("Esse é um jogo com intuito de melhorar seus habitos alimentares e \nmostrar para vocês que cuidar da sua alimentacao não é tão dificil.\n\t     Aproveitem o game!!!\n");
        system("pause");
        system("cls");
        perguntas_Iniciais();
        if(usuario.sexo_Usuario==1){
            tectec("Você é um garotinho de 10 anos que precisa emagrecer pois comeceu a ter problemas de saúde devido ao sobrepeso\n"); 
            tectec("a sua missão nesse jogo é conseguir emagrecer e ao mesmo tempo não\n");
            tectec("ficar paranoico ao ponto de não comer coisa gostosas de vez em quando para aproveitar a vida.\n");
            while( fgets(ascii,1000,boy) != NULL)
                printf("%s",ascii);
                fclose(boy);
                printf("\n");
            system("pause");
            system("cls");
        }
        if(usuario.sexo_Usuario==2){
            tectec("Você é uma garotinha de 10 anos que precisa emagrecer pois comeceu a ter problemas de saúde devido ao sobrepeso\n"); 
            tectec("a sua missão nesse jogo é conseguir emagrecer e ao mesmo tempo não\n");
            tectec("ficar paranoica ao ponto de não comer coisa gostosas de vez em quando para aproveitar a vida.\n");
            while( fgets(ascii,1000,girl) != NULL)
                printf("%s",ascii);
                fclose(girl);
                printf("\n");
            system("pause");
            system("cls");
        }
        for(j=0;j<7;j++){
            for(i=0;i<4;i++){  
            if(diada_Semana[j][i]==10){
                printf("\t\t\t        SEGUNDA\n\n") ; 
                cafe_Da_Manha();
            }
            else if (diada_Semana[j][i]==20){
                almoco();
            }
            else if(diada_Semana[j][i]==30){
                lanche();
            }
            else if(diada_Semana[j][i]==40){
                janta(); 
                resultado();  
            }
            if(diada_Semana[j][i]==11){
                printf("\t\t\t         TERÇA\n\n") ; 
                cafe_Da_Manha();
            }
            else if (diada_Semana[j][i]==21){
                almoco();
            }
            else if(diada_Semana[j][i]==31){
                lanche();
            }
            else if(diada_Semana[j][i]==41){
                janta();
                resultado();
            }
            if(diada_Semana[j][i]==12){
                printf("\t\t\t         QUARTA\n\n") ; 
                cafe_Da_Manha();
            }
            else if (diada_Semana[j][i]==22){
                almoco();
            }
            else if(diada_Semana[j][i]==32){
                lanche();
            }
            else if(diada_Semana[j][i]==42){
                janta();
                resultado();
            } 
            if(diada_Semana[j][i]==13){
                printf("\t\t\t         QUINTA\n\n") ; 
                cafe_Da_Manha();
            }
            else if (diada_Semana[j][i]==23){
                almoco();
            }
            else if(diada_Semana[j][i]==33){
                lanche();
            }
            else if(diada_Semana[j][i]==43){
                janta();
                resultado();
            }
            if(diada_Semana[j][i]==14){
                printf("\t\t\t         SEXTA\n\n") ; 
                cafe_Da_Manha();
            }
            else if (diada_Semana[j][i]==24){
                almoco();
            }
            else if(diada_Semana[j][i]==34){
                lanche();
            }
            else if(diada_Semana[j][i]==44){
                sair_Finaldesemana();
                resultado();
            }
            if(diada_Semana[j][i]==15){
                printf("\t\t\t         SÁBADO\n\n") ; 
                cafe_Final();
            }
            else if (diada_Semana[j][i]==25){
                almoco_Final();
            }
            else if(diada_Semana[j][i]==35){
                lanche();
            }
            else if(diada_Semana[j][i]==45){
                sair_Finaldesemana();
                resultado();
            }
            if(diada_Semana[j][i]==16){
                printf("\t\t\t         DOMINGO\n\n") ; 
                cafe_Final();
            }
            else if (diada_Semana[j][i]==26){
                almoco_Final();
            }
            else if(diada_Semana[j][i]==36){
                lanche();
            }
            else if(diada_Semana[j][i]==46){
                janta();
                resultado();
            }
            }
        }
        resultado_Semanal();
    break;
    case '2':
        printf("Este jogo foi criado no ano de 2022 por:\n");
        printf("Joao Victor Vieira e Silva, Breno Morais Gonçalves, Álex Gabriel Januario dos Santos, Arthur Degasperi de Freitas Elias e Emilly Neves Vermelue,\n");
        printf("como produto provisório de um trabalho de conclusão do primeiro módulo do curso\n");
        printf("de desenvolvimento de sistemas e deve ser utilizado como ferramenta educacional.\n");
        system("pause");
        system("cls");
        principal();
    break;
    case '3':
        printf("Saindo...\n");
        exit(0);
    break;    
    default:
        printf("Opção Invalida.\n");
        system("pause");
        system("cls");
        principal();
    break;
}
}

        
int main(){
    healthlife = fopen("txts//healthlife.txt","r");
	UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    printf("Qual seu nome?\n:");
    fgets(usuario.nome_Usuario,50,stdin);
    system("pause");
    system("cls");
    
        principal();


system("pause");
return 0;
SetConsoleOutputCP(CPAGE_DEFAULT);
}

