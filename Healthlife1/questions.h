#include <stdio.h>
#include "usuario.h"
#ifndef _questionsH_
#define _questionsH_

//Variaveis
int saude,felicidade;
char ascii[1000];

//PONTEIROS
FILE *banana;
FILE *cake;
FILE *sandwich;
FILE *breakfast;
FILE *plate;
FILE *hamburguer;  
FILE *pasta;   
FILE *lunch;
FILE *apple;
FILE *batatafri;  
FILE *sandjuice;   
FILE *lanche_Pon;
FILE *plate2;
FILE *pizza;
FILE *vitamina;
FILE *dinner;
FILE *mac;
FILE *subway;
FILE *icecream;
FILE *final_Desemana;
FILE *status_Final;


//FUNCOES
void mostrar_Telacafe(int caminho){
banana = fopen("txts//banana.txt","r");
cake = fopen("txts//cake.txt","r");
sandwich = fopen("txts//sandwich.txt", "r");
    
    if(caminho==1){
        while( fgets(ascii,1000,banana) != NULL)
                printf("%s",ascii);
                fclose(banana);
    }else if(caminho==2){
        while( fgets(ascii,1000,cake) != NULL)
                printf("%s",ascii);
                fclose(cake);
    }else if(caminho==3){
        while( fgets(ascii,1000,sandwich) != NULL)
                printf("%s",ascii);
                fclose(sandwich);
    }
}
void mostrar_Telaalmoco(int caminho){
plate = fopen("txts//plate.txt","r");
hamburguer = fopen("txts//hamburguer.txt","r");
pasta = fopen("txts//pasta.txt", "r");
    
    if(caminho==1){
        while( fgets(ascii,1000,plate) != NULL)
                printf("%s",ascii);
                fclose(plate);
    }else if(caminho==2){
        while( fgets(ascii,1000,hamburguer) != NULL)
                printf("%s",ascii);
                fclose(hamburguer);
    }else if(caminho==3){
        while( fgets(ascii,1000,pasta) != NULL)
                printf("%s",ascii);
                fclose(pasta);
    }
}
void mostrar_Telalanche(int caminho){
apple = fopen("txts//apple.txt","r");
batatafri = fopen("txts//batatafri.txt","r");
sandjuice = fopen("txts//sandjuice.txt", "r");
    
    if(caminho==1){
        while( fgets(ascii,1000,apple) != NULL)
                printf("%s",ascii);
                fclose(apple);
    }else if(caminho==2){
        while( fgets(ascii,1000,batatafri) != NULL)
                printf("%s",ascii);
                fclose(batatafri);
    }else if(caminho==3){
        while( fgets(ascii,1000,sandjuice) != NULL)
                printf("%s",ascii);
                fclose(sandjuice);
    }
}
void mostrar_Teladinner(int caminho){
plate2 = fopen("txts//plate2.txt","r");
pizza = fopen("txts//pizza.txt","r");
vitamina = fopen("txts//vitamina.txt", "r");
    
    if(caminho==1){
        while( fgets(ascii,1000,plate2) != NULL)
                printf("%s",ascii);
                fclose(plate2);
    }else if(caminho==2){
        while( fgets(ascii,1000,pizza) != NULL)
                printf("%s",ascii);
                fclose(pizza);
    }else if(caminho==3){
        while( fgets(ascii,1000,vitamina) != NULL)
                printf("%s",ascii);
                fclose(vitamina);
    }
}
void mostrar_Telafinal(int caminho){
mac = fopen("txts//mac.txt","r");
subway = fopen("txts//subway.txt","r");
icecream = fopen("txts//icecream.txt", "r");
    
    if(caminho==1){
        while( fgets(ascii,1000,mac) != NULL)
                printf("%s",ascii);
                fclose(mac);
    }else if(caminho==2){
        while( fgets(ascii,1000,subway) != NULL)
                printf("%s",ascii);
                fclose(subway);
    }else if(caminho==3){
        while( fgets(ascii,1000,icecream) != NULL)
                printf("%s",ascii);
                fclose(icecream);
    }
}
void perguntas_Iniciais(void){
    printf("----------------------------HEALTHLIFE-----------------------------\n");
    
        
        while(usuario.sexo_Usuario!=1 && usuario.sexo_Usuario!=2)
        {
            printf("Voce e um garoto ou uma garota.(1 para garoto/2 para garota)\nR:");
            scanf("%i",&usuario.sexo_Usuario);
                switch (usuario.sexo_Usuario)               //sexo == 1 para garoto 2 para garota
                {
                    case 1:
                        break;
                    case 2:
                        break;
                    default:
                        printf("\tOpcao invalida.\n\tDigite novamente.\n");
                    break;
                }
        }
 
    

        while(usuario.estudo_Usuario!=1 && usuario.estudo_Usuario!=2)
        {
            printf("Você estuda de manhã ou a tarde?(1-Manhã|2-Tarde)\n:");
            scanf("%i",&usuario.estudo_Usuario);
                switch (usuario.estudo_Usuario)               //estudo == 1 para manha 2 para tarde
                {
                    case 1:
                        break;
                    case 2:
                        break;
                    default:
                        printf("\tOpcao invalida.\n\tDigite novamente.\n");
                        
                    break;
                }
        }
        
        while(usuario.esporte_Usuario!=1 && usuario.esporte_Usuario!=2 && usuario.esporte_Usuario !=3)
        {
            printf("Escolha um esporte para auxiliar no emagrecimento:\n1-Futebol.\n2-Vôlei.\n3-Basquete.\nR:");
            scanf("%i",&usuario.esporte_Usuario);
                switch (usuario.esporte_Usuario)               //esporte == 1 para futebol/ 2 para volei /3 para basquete
                {
                    case 1:
                        break;
                    case 2:
                        break;
                    case 3:
                        break;    
                    default:
                        printf("\tOpcao invalida.\n\tDigite novamente.\n");
                        break;
                }
        }
        system("cls");    
}    
void cafe_Da_Manha(void){
breakfast = fopen("txts//breakfast.txt", "r");
    saude=50;
    felicidade=50;
    if(usuario.estudo_Usuario ==2)
    {
        printf("-----------------------------Café da Manhã------------------------------\n");
        printf("Bom dia!!!\n");
        printf("Você está em casa essa amanhã.");
        printf("Você tem 3 opções de café da manhã hoje:\n1-Banana\n2-Bolo de chocolate\n3-Pão com manteiga.\n");
        
         while( fgets(ascii,1000,breakfast) != NULL)
                printf("%s",ascii);
                printf("\n");
                fclose(breakfast);

        printf("Qual você vai escolhe para comer hoje?\nR:");
        scanf("%i",&alimentos.cafeda_Manha);
            switch (alimentos.cafeda_Manha)
            {
                case 1:
                    saude+=15;                   // 1-Banana
                    felicidade+=4;               // 2-Bolo de chocolate
                break;                           // 3-Pao cm manteiga
                case 2: 
                    saude-=10;
                    felicidade+=15;
                break;
                case 3:
                    saude+=8;
                    felicidade+=2;
                break;
                default:
                    printf("\tOpcao invalida.\n\tDigite novamente.\n");
                    cafe_Da_Manha();
                break;
            }
     }
     if(usuario.estudo_Usuario ==1 )
    {
        printf("-----------------------------Café da Manhã------------------------------\n");
        printf("Bom dia!!!\n");
        printf("Você está na escola essa amanhã.");
        printf("Você tem 3 opções de café da manhã hoje:\n1-Banana\n2-Bolo de chocolate\n3-Pão com manteiga.\n");

       while( fgets(ascii,1000,breakfast) != NULL)
                printf("%s",ascii);
                printf("\n");
                fclose(breakfast);

        printf("Qual você vai escolher para comer hoje?\nR:");
        scanf("%i",&alimentos.cafeda_Manha);
            switch (alimentos.cafeda_Manha)
            {
                case 1:
                    saude+=15;                   // 1-maçã
                    felicidade+=4;               // 2-Bolo de morango
                break;                           // 3-Sanduiche de peito de peru
                case 2: 
                    saude-=10;
                    felicidade+=15;
                break;
                case 3:
                    saude+=8;
                    felicidade+=2;
                break;
                default:
                    printf("\tOpcao invalida.\n\tDigite novamente.\n");
                    cafe_Da_Manha();
                break;
            }
    } 

     system("cls");
}
void almoco(void){
    lunch = fopen("txts//lunch.txt", "r");
    if(usuario.estudo_Usuario==1){
        printf("-----------------------------Almoço------------------------------\n");
        printf("Hora do almoço!!!\n");
        printf("Você está em casa nesta tarde.");
        printf("Você tem 3 opções de almoço hoje:\n1-Prato tipico\n2-Hambúrguer\n3-Macarrão.\n");
        while( fgets(ascii,1000,lunch) != NULL)
                printf("%s",ascii);
                printf("\n");
                fclose(lunch);
        printf("Qual você vai escolhe para comer hoje?\nR:");
        scanf("%i",&alimentos.almoco);
            switch (alimentos.almoco)
            {
                    case 1:
                        saude+=12;                                  // 1-Prato tipico
			            felicidade+=5;                              // 2-hamburguer
                    break;                                          // 3-macarrao
                    case 2: 
                        saude-=15;
				        felicidade+=13;
                    break;
                    case 3:
                        saude+=8;
					    felicidade-=5;
                    break;
                    default:
                        printf("\tOpcao invalida.\n\tDigite novamente.\n");
                        almoco();
                    break;
				
			}   
    }
    if(usuario.estudo_Usuario==2){
        printf("-----------------------------Almoço------------------------------\n");
        printf("Hora do almoço!!!\n");
        printf("Você está na escola nesta tarde.");
        printf("Você tem 3 opções de almoço hoje:\n1-Prato tipico\n2-Hambúrguer\n3-Macarrão.\n");
         while( fgets(ascii,1000,lunch) != NULL)
                printf("%s",ascii);
                printf("\n");
                fclose(lunch);
        printf("Qual você vai escolhe para comer hoje?\nR:");
        scanf("%i",&alimentos.almoco);
            switch (alimentos.almoco)
            {
                    case 1:
                        saude+=12;                                  // 1-Prato tipico
			            felicidade+=5;                              // 2-hamburguer
                    break;                                          // 3-macarrao
                    case 2: 
                        saude-=15;
				        felicidade+=13;
                    break;
                    case 3:
                        saude+=8;
					    felicidade-=5;
                    break;
                    default:
                        printf("\tOpcao invalida.\n\tDigite novamente.\n");
                        almoco();
                    break;
				
			}
    }
    
      system("cls");
              
}
void lanche(void){
    lanche_Pon = fopen("txts//lanche.txt", "r");
	if(usuario.esporte_Usuario==1){
        printf("-----------------------------Lanche da Tarde------------------------------\n");
	    printf("Hora do lanche!!!\n");
        printf("Voce está no Futebol agora.\nVai comecar o intervalo.\n");
        printf("1-Maçã.\n2-batata frita e refrigerante.\n3-Sanduiche natural e suco.\n");
        while( fgets(ascii,1000,lanche_Pon) != NULL)
                printf("%s",ascii);
                printf("\n");
                fclose(lanche_Pon);
        
        printf("O que vai comer:\nR:");
        scanf("%i",&alimentos.lancheda_Tarde);
            switch (alimentos.lancheda_Tarde)
            {
                    case 1:
                        saude+=13;
			            felicidade-=3;                                      // 1-sanduiche natural e suco
                    break;                                                  // 2-coxinha e refrigerante
                    case 2:                                                 // 3-pao de queijo e achocolatado
                        saude-=13;
				        felicidade+=12;
                    break;
                    case 3:
                        saude+=5;
					    felicidade+=7;
                    break;
                    default:
                        printf("\tOpcao invalida.\n\tDigite novamente.\n");
                        lanche();
                    break;
				
			}
    }	
    if(usuario.esporte_Usuario==2){
        printf("-----------------------------Lanche da Tarde------------------------------\n");
	    printf("Hora do lanche!!!\n");
        printf("Voce está no Vôlei agora.\nVai comecar o intervalo.\n");
        printf("1-Maçã.\n2-batata frita e refrigerante.\n3-Sanduiche natural e suco.\n");
        while( fgets(ascii,1000,lanche_Pon) != NULL)
                printf("%s",ascii);
                printf("\n");
                fclose(lanche_Pon);

        printf("O que vai comer:\nR:");        
        scanf("%i",&alimentos.lancheda_Tarde);
            switch (alimentos.lancheda_Tarde)
            {
                    case 1:
                        saude+=13;
			            felicidade-=3;                                      // 1-sanduiche natural e suco
                    break;                                                  // 2-coxinha e refrigerante
                    case 2:                                                 // 3-pao de queijo e achocolatado
                        saude-=13;
				        felicidade+=12;
                    break;
                    case 3:
                        saude+=5;
					    felicidade+=7;
                    break;
                    default:
                        printf("\tOpcao invalida.\n\tDigite novamente.\n");
                        lanche();
                    break;
				
			}
    }	
    if(usuario.esporte_Usuario==3){
        printf("-----------------------------Lanche da Tarde------------------------------\n");
	    printf("Hora do lanche!!!\n");
        printf("Voce está no Basquete agora.\nVai comecar o intervalo.\n");
        printf("1-Maçã.\n2-batata e refrigerante.\n3-Sanduiche natural e suco.\n");
        while( fgets(ascii,1000,lanche_Pon) != NULL)
                printf("%s",ascii);
                printf("\n");
                fclose(lanche_Pon);

        printf("O que vai comer:\nR:");        
        scanf("%i",&alimentos.lancheda_Tarde);
            switch (alimentos.lancheda_Tarde)
            {
                    case 1:
                        saude+=13;
			            felicidade-=3;                                      // 1-sanduiche natural e suco
                    break;                                                  // 2-coxinha e refrigerante
                    case 2:                                                 // 3-pao de queijo e achocolatado
                        saude-=13;
				        felicidade+=12;
                    break;
                    case 3:
                        saude+=5;
					    felicidade+=7;
                    break;
                    default:
                        printf("\tOpcao invalida.\n\tDigite novamente.\n");
                        lanche();
                    break;
				
			}
    }
    system("cls");
}
void janta(void){
	    dinner = fopen("txts//dinner.txt", "r");
        printf("-----------------------------Jantar------------------------------\n");
	    printf("Hora de jantar!!!\n");
        printf("Você tem 3 opções de jantar hoje:\n1-Prato tipico 2.\n2-Pizza.\n3-Vitamina de banana.\n");
        while( fgets(ascii,1000,dinner) != NULL)
                printf("%s",ascii);
                printf("\n");
                fclose(dinner);
        printf("Qual você vai escolher para comer hoje?\nR:");
        scanf("%i",&alimentos.jantar);
            switch (alimentos.jantar)
            {
                    case 1:
                        saude+=10;
			            felicidade+=2;                                          // 1-Prato tipico
                    break;                                                      // 2-Pizza
                    case 2:                                                     // 3-Vitamina de Banana
                        saude-=12;
				        felicidade+=11;
                    break;
                    case 3:
                        saude+=13;
					    felicidade-=6;
                    break;
                    default:
                        printf("\tOpcao invalida.\n\tDigite novamente.\n");
                        janta();
                    break;
				
			}
    	
     system("cls");	
}
void resultado(void){
    
    felicidade_Semana+=felicidade;
    saude_Semana+=saude;
    printf("-----------------------------Status Diário------------------------------\n");
    printf("Vamos ver o seus status diario %s\n", usuario.nome_Usuario);
	    printf("Felicidade: %i\n",felicidade);
	
    if(felicidade<1){
		printf("Voce está com depressão!\n Procure ajuda!!!\n\n");
			}else if(felicidade<25){
			    printf("Voce está triste.\nAproveite mais a vida!!!\n");
                printf("Isso afeta a sua saúde mental.\nTome cuidado!\n");
				}else if(felicidade<=50){
			        printf("Você está bem proximo do equilibrio\nParabéns\n");
					}else if(felicidade>50){
			            printf("Você está feliz.\nContinue assim, mas não esqueca a sua saúde!!!\n");
						}
		
		printf("Saúde: %i\n",saude);
		
	if(saude<1){
		printf("Você morreu!!!\n");
        exit(0);
			}else if(saude<25){
		        printf("Voce não esta muito saudável.\nCuide da sua saúde!!!\n");
				}else if(saude<=50){
			        printf("Você está bem proximo do equilibrio\nParabéns\n");
				    }else if(saude>50){
			            printf("Voce está muito saudavel.\nContinue assim, mas não esqueça de aproveitar a vida!!!\n");
					    }
        system("pause");
        system("cls");                
        printf("Alimentos que você consumiu no dia de hoje:\n");                
        mostrar_Telacafe(alimentos.cafeda_Manha);
        printf("\n");
        mostrar_Telaalmoco(alimentos.almoco);
        printf("\n");
        mostrar_Telalanche(alimentos.lancheda_Tarde);
        printf("\n");
        if(alimentos.sair!=3){
        mostrar_Teladinner(alimentos.jantar);
        printf("\n"); 
        }
        if(alimentos.sair==3){
        mostrar_Telafinal(alimentos.consumo);
        printf("\n");          
        }     

    system("pause");
    system("cls");
       			
}
void resultado_Semanal(void){
status_Final = fopen("txts//status_Final.txt", "r");
         while( fgets(ascii,1000,status_Final) != NULL)
                printf("%s",ascii);
                printf("\n");
                fclose(status_Final);
    printf("Vamos ver o seus status no final dessa semana!\n");
	printf("Felicidade: %i\n",felicidade_Semana);
	
    if(felicidade_Semana<70){
		printf("Você está com a felicidade baixissima se cuide melhor\n\n");
			}else if(felicidade_Semana<210){
			    printf("Voce está triste.\nAproveite mais a vida!!!\n");
				}else if(felicidade_Semana<=350){
			        printf("Você está bem proximo do equilibrio\n");
					}else if(felicidade_Semana>350){
			            printf("Você está feliz.\nContinue assim, mas não esqueca a sua saúde!!!\n");
						}
		
		printf("Saúde: %i\n",saude_Semana);
		
	if(saude_Semana<70){
		printf("Você está se cuidando muito mal, melhore por favor!!!\n");
        
			}else if(saude_Semana<210){
		        printf("Voce não esta muito saudável.\nCuide melhor da sua saúde!!!\n");
				}else if(saude_Semana>=300 && saude_Semana<=350){
			        printf("Você está bem proximo do equilibrio.\n");
                    printf("Você conseguiu emagrecer a sua meta semanal, Parábens!!!\n");
				    }else if(saude_Semana>350){
			            printf("Voce está muito saudavel.\nContinue assim, mas não esqueça de aproveitar a vida!!!\n");
                        printf("Você conseguiu emagrecer a sua meta semanal, Parábens!!!\n");
					    }
}
void sair_Finaldesemana(void){
    final_Desemana = fopen("txts//finaldesemana.txt", "r");
    printf("De noite em um final de Semana, vai fazer o que hoje:\n1-Ficar em casa.\n2-Jogar video game e não comer nada.\n3-Sair para comer.\nR:");
    scanf("%d",&alimentos.sair);

    switch (alimentos.sair)
    {
    case 1:
    janta();
        break;
   
    case 2:
        saude-=12;
        felicidade+=15;  
        system("pause");  
        system("cls");          
    break;
    
    case 3:
      fastfood();
      break;
    default:
        printf("\tOpcao invalida.\n\tDigite novamente.\n");
        sair_Finaldesemana();
        break;
    }




}
void tectec(char vetor[]){
    int i;

    for(i = 0; i < size_of(vetor); i++){
        printf("%c", vetor[i]);
        _sleep(10); // Você muda o tempo de espera pra quando quiser
    }
}
int size_of(char vetor[]){
    int i, size = 0;

    for(i = 0; i < 1000; i++){
        if(vetor[i] != '\0'){
            size++;
        }
        else{
            break;
        }
    }

    return size;
}
void fastfood(void){
   while( fgets(ascii,1000,final_Desemana) != NULL)
                printf("%s",ascii);
                fclose(final_Desemana);
                 printf("\n");
        printf("Quer comer aonde:\n1-MacDonalds.\n2-Subway.\n3-Sorvete.\nR:");
        
        scanf("%d",&alimentos.consumo);
           switch(alimentos.consumo)
           {
                case 1:saude-=12;
                    felicidade+=11;
                break;
                
                case 2:
                    saude+=13;
                    felicidade+=2; 
                break;

                case 3:
                    saude-=1;
                    felicidade-=9;
                break;
                default:
                    printf("\tOpcao invalida.\n\tDigite novamente.\n");
                    sair_Finaldesemana();
                break;
           }
        system("pause");
        system("cls");
}
void cafe_Final(void){
        breakfast = fopen("txts//breakfast.txt", "r");
      printf("-----------------------------Café da Manhã------------------------------\n");
        printf("Bom dia!!!\n");
        printf("Você está em casa, é final de semana.");
        printf("Você tem 3 opções de café da manhã hoje:\n1-Banana\n2-Bolo de chocolate\n3-Pão com manteiga.\n");

       while( fgets(ascii,1000,breakfast) != NULL)
                printf("%s",ascii);
                printf("\n");
                fclose(breakfast);

        printf("Qual você vai escolher para comer hoje?\nR:");
        scanf("%i",&alimentos.cafeda_Manha);
            switch (alimentos.cafeda_Manha)
            {
                case 1:
                    saude+=15;                   // 1-maçã
                    felicidade+=4;               // 2-Bolo de morango
                break;                           // 3-Sanduiche de peito de peru
                case 2: 
                    saude-=10;
                    felicidade+=15;
                break;
                case 3:
                    saude+=8;
                    felicidade+=2;
                break;
                default:
                    printf("\tOpcao invalida.\n\tDigite novamente.\n");
                    cafe_Final();
                break;
            }  
     system("pause");
    system("cls");
    

}
void almoco_Final(void){
    lunch = fopen("txts//lunch.txt", "r");
       printf("-----------------------------Almoço------------------------------\n");
        printf("Hora do almoço!!!\n");
        printf("Você está em casa, é final de semana.");
        printf("Você tem 3 opções de almoço hoje:\n1-Prato tipico\n2-Hambúrguer\n3-Macarrão.\n");
        while( fgets(ascii,1000,lunch) != NULL)
                printf("%s",ascii);
                printf("\n");
                fclose(lunch);
        printf("Qual você vai escolhe para comer hoje?\nR:");
        scanf("%i",&alimentos.almoco);
            switch (alimentos.almoco)
            {
                    case 1:
                        saude+=12;                                  // 1-Prato tipico
			            felicidade+=5;                              // 2-hamburguer
                    break;                                          // 3-macarrao
                    case 2: 
                        saude-=15;
				        felicidade+=13;
                    break;
                    case 3:
                        saude+=8;
					    felicidade-=5;
                    break;
                    default:
                        printf("\tOpcao invalida.\n\tDigite novamente.\n");
                        almoco_Final();
                    break;
				}   
   system("pause");
   system("cls");              
}
#endif