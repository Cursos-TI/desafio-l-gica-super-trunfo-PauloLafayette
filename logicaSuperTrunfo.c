#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    //32 variáveis de cada pois são 32 cidades, e 8 de estado.
    //nomes com espaço não estão funcionando, para que funcione recomendo o uso de "-", por exemplo: São-Paulo, Rio-de-Janeiro
    
        char estado, estado2, estado3, estado4, estado5, estado6, estado7, estado8;
        char codigo[50],codigo2[50],codigo3[50],codigo4[50],codigo5[50],codigo6[50],codigo7[50],codigo8[50],codigo9[50],codigo10[50],codigo11[50],codigo12[50],codigo13[50],codigo14[50],codigo15[50],codigo16[50],codigo17[50],codigo18[50],codigo19[50],codigo20[50],codigo21[50],codigo22[50],codigo23[50],codigo24[50],codigo25[50],codigo26[50],codigo27[50],codigo28[50],codigo29[50],codigo30[50],codigo31[50],codigo32[50];
        char nome[50],nome2[50],nome3[50],nome4[50],nome5[50],nome6[50],nome7[50],nome8[50],nome9[50],nome10[50],nome11[50],nome12[50],nome13[50],nome14[50],nome15[50],nome16[50],nome17[50],nome18[50],nome19[50],nome20[50],nome21[50],nome22[50],nome23[50],nome24[50],nome25[50],nome26[50],nome27[50],nome28[50],nome29[50],nome30[50],nome31[50],nome32[50];
        int populacao,populacao2,populacao3,populacao4,populacao5,populacao6,populacao7,populacao8,populacao9,populacao10,populacao11,populacao12,populacao13,populacao14,populacao15,populacao16,populacao17,populacao18,populacao19,populacao20,populacao21,populacao22,populacao23,populacao24,populacao25,populacao26,populacao27,populacao28,populacao29,populacao30,populacao31,populacao32;
        double area, area2,area3,area4,area5,area6,area7,area8,area9,area10,area11,area12,area13,area14,area15,area16,area17,area18,area19,area20,area21,area22,area23,area24,area25,area26,area27,area28,area29,area30,area31,area32;
        double pib, pib2,pib3,pib4,pib5,pib6,pib7,pib8,pib9,pib10,pib11,pib12,pib13,pib14,pib15,pib16,pib17,pib18,pib19,pib20,pib21,pib22,pib23,pib24,pib25,pib26,pib27,pib28,pib29,pib30,pib31,pib32;
        int pt, pt2,pt3,pt4,pt5,pt6,pt7,pt8,pt9,pt10,pt11,pt12,pt13,pt14,pt15,pt16,pt17,pt18,pt19,pt20,pt21,pt22,pt23,pt24,pt25,pt26,pt27,pt28,pt29,pt30,pt31,pt32;
        double pibpercap,pibpercap2, pibpercap3, pibpercap4, pibpercap5, pibpercap6, pibpercap7, pibpercap8, pibpercap9, pibpercap10, pibpercap11, pibpercap12, pibpercap13, pibpercap14, pibpercap15, pibpercap16, pibpercap17, pibpercap18, pibpercap19, pibpercap20, pibpercap21, pibpercap22, pibpercap23, pibpercap24, pibpercap25, pibpercap26, pibpercap27, pibpercap28, pibpercap29, pibpercap30, pibpercap31, pibpercap32;
        double densidade,densidade2,densidade3,densidade4,densidade5,densidade6,densidade7,densidade8,densidade9,densidade10,densidade11,densidade12,densidade13,densidade14,densidade15,densidade16,densidade17,densidade18,densidade19,densidade20,densidade21,densidade22,densidade23,densidade24,densidade25,densidade26,densidade27,densidade28,densidade29,densidade30,densidade31,densidade32;
        double superpoder,superpoder2,superpoder3,superpoder4,superpoder5,superpoder6,superpoder7,superpoder8,superpoder9,superpoder10,superpoder11,superpoder12,superpoder13,superpoder14,superpoder15,superpoder16,superpoder17,superpoder18,superpoder19,superpoder20,superpoder21,superpoder22,superpoder23,superpoder24,superpoder25,superpoder26,superpoder27,superpoder28,superpoder29,superpoder30,superpoder31,superpoder32;
        int escolha, escolha2, escolhac;
        //funções para os cadastros das cidades
       
        printf("Cadastro 1\n");
        printf("Qual o estado ? ");
        scanf("%c", &estado);
        printf("Qual o código da cidade ? ");
        scanf("%s", &codigo);
        printf("Qual o nome da cidade ? ");
        scanf("%s", &nome);
        printf("Qual a população da cidade ? ");
        scanf("%d", &populacao);
        printf("Qual a área da cidade? ");
        scanf("%lf", &area);
        printf("Qual o PIB da cidade em bilhoes ? ");
        scanf("%lf", &pib);
        printf("Quantos pontos turísticos tem na cidade ? ");
        scanf("%d", &pt);
    
        //função para calcular PIB per capita, Densidade populacional e o Super poder
        
        pibpercap = (pib * 1e9) / populacao;
        densidade = populacao / area;
        superpoder = densidade + pibpercap + pib + area + populacao + pt;
        printf(" \nEstado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %d habitantes\n Área da cidade: %.2f kilometros quadrados\n PIB da cidade: %.2f bilhões de R$\n Quantidade de pontos turísticos: %d\n",estado, codigo, nome, populacao, area, pib, pt);
        printf(" PIB per capita: %.2f\n", pibpercap);
        printf(" Densidade populacional: %.2f\n", densidade);
        printf(" Super poder: %.2f\n", superpoder);
    
        printf("\nNovo Cadastro 2\n");
        printf("Qual o estado ? ");
        scanf(" %c", &estado);
        printf("Qual o código da cidade ? ");
        scanf(" %s", &codigo2);
        printf("Qual o nome da cidade ? ");
        scanf("%s", &nome2);
        printf("Qual a população da cidade ? ");
        scanf("%d", &populacao2);
        printf("Qual a área da cidade? ");
        scanf("%lf", &area2);
        printf("Qual o PIB da cidade ? ");
        scanf("%lf", &pib2);
        printf("Quantos pontos turísticos tem na cidade ? ");
        scanf("%d", &pt2);
    
        pibpercap2 = (pib2 * 1e9) / populacao2;
        densidade2 = populacao2 / area2;
        superpoder2 = densidade2 + pibpercap2 + pib2 + area2 + populacao2 + pt2;
        
        printf(" \nEstado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %d habitantes\n Área da cidade: %.2f kilometros quadrados\n PIB da cidade: %.2f bilhões de R$\n Quantidade de pontos turísticos: %d\n",estado, codigo2, nome2, populacao2, area2, pib2, pt2);
        printf(" PIB per capita: %.2f\n", pibpercap2);
        printf(" Densidade populacional: %.2f\n", densidade2);
        printf(" Super poder: %.2f\n", superpoder2);
    
        printf("\nNovo Cadastro 3\n");
        printf("Qual o estado ? ");
        scanf(" %c", &estado);
        printf("Qual o código da cidade ? ");
        scanf("%s", &codigo3);
        printf("Qual o nome da cidade ? ");
        scanf("%s", &nome3);
        printf("Qual a população da cidade ? ");
        scanf("%d", &populacao3);
        printf("Qual a área da cidade? ");
        scanf("%lf", &area3);
        printf("Qual o PIB da cidade ? ");
        scanf("%lf", &pib3);
        printf("Quantos pontos turísticos tem na cidade ? ");
        scanf("%d", &pt3);
    
        pibpercap3 = (pib3 * 1e9) / populacao3;
        densidade3 = populacao3 / area3;
        superpoder3 = densidade3 + pibpercap3 + pib3 + area3 + populacao3 + pt3;
    
        printf(" \nEstado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %d habitantes\n Área da cidade: %.2f kilometros quadrados\n PIB da cidade: %.2f bilhões de R$\n Quantidade de pontos turísticos: %d\n",estado, codigo3, nome3, populacao3, area3, pib3, pt3);
        printf(" PIB per capita: %.2f\n", pibpercap3);
        printf("Densidade populacional: %.2f\n", densidade3);
        printf(" Super poder: %.2f\n", superpoder3);
    
        printf("\nNovo Cadastro 4\n");
        printf("Qual o estado ? ");
        scanf(" %c", &estado);
        printf("Qual o código da cidade ? ");
        scanf("%s", &codigo4);
        printf("Qual o nome da cidade ? ");
        scanf("%s", &nome4);
        printf("Qual a população da cidade ? ");
        scanf("%d", &populacao4);
        printf("Qual a área da cidade? ");
        scanf("%lf", &area4);
        printf("Qual o PIB da cidade ? ");
        scanf("%lf", &pib4);
        printf("Quantos pontos turísticos tem na cidade ? ");
        scanf("%d", &pt4);
    
        pibpercap4 = (pib4 * 1e9) / populacao4;
        densidade4 = populacao4 / area4;
        superpoder4 = densidade4 + pibpercap4 + pib4 + area4 + populacao4 + pt4;
    
        printf(" \nEstado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %d habitantes\n Área da cidade: %.2f kilometros quadrados\n PIB da cidade: %.2f bilhões de R$\n Quantidade de pontos turísticos: %d\n",estado, codigo4, nome4, populacao4, area4, pib4, pt4);
        printf(" PIB per capita: %.2f\n", pibpercap4);
        printf("Densidade populacional: %.2f\n", densidade4);
        printf(" Super poder: %.2f\n", superpoder4);
    
        printf("\nNovo Cadastro 5\n");
        printf("Qual o estado ? ");
        scanf(" %c", &estado2);
        printf("Qual o código da cidade ? ");
        scanf("%s", &codigo5);
        printf("Qual o nome da cidade ? ");
        scanf("%s", &nome5);
        printf("Qual a população da cidade ? ");
        scanf("%d", &populacao5);
        printf("Qual a área da cidade? ");
        scanf("%lf", &area5);
        printf("Qual o PIB da cidade ? ");
        scanf("%lf", &pib5);
        printf("Quantos pontos turísticos tem na cidade ? ");
        scanf("%d", &pt5);
    
        pibpercap5 = (pib5 * 1e9) / populacao5;
        densidade5 = populacao5 / area5;
        superpoder5 = densidade5 + pibpercap5 + pib5 + area5 + populacao5 + pt5;
    
        printf(" \nEstado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %d habitantes\n Área da cidade: %.2f kilometros quadrados\n PIB da cidade: %.2f bilhões de R$\n Quantidade de pontos turísticos: %d\n",estado2, codigo5, nome5, populacao5, area5, pib5, pt5);
        printf(" PIB per capita: %.2f\n", pibpercap5);
        printf("Densidade populacional: %.2f\n", densidade5);
        printf(" Super poder: %.2f\n", superpoder5);
        printf("\nNovo Cadastro 6\n");
        printf("Qual o estado ? ");
        scanf(" %c", &estado2);
        printf("Qual o código da cidade ? ");
        scanf("%s", &codigo6);
        printf("Qual o nome da cidade ? ");
        scanf("%s", &nome6);
        printf("Qual a população da cidade ? ");
        scanf("%d", &populacao6);
        printf("Qual a área da cidade? ");
        scanf("%lf", &area6);
        printf("Qual o PIB da cidade ? ");
        scanf("%lf", &pib6);
        printf("Quantos pontos turísticos tem na cidade ? ");
        scanf("%d", &pt6);
    
        pibpercap6 = (pib6 * 1e9) / populacao6;
        densidade6 = populacao6 / area6;
        superpoder6 = densidade6 + pibpercap6 + pib6 + area6 + populacao6 + pt6;
    
        printf(" \nEstado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %d habitantes\n Área da cidade: %.2f kilometros quadrados\n PIB da cidade: %.2f bilhões de R$\n Quantidade de pontos turísticos: %d\n",estado2, codigo6, nome6, populacao6, area6, pib6, pt6);
        printf(" PIB per capita: %.2f\n", pibpercap6);
        printf("Densidade populacional: %.2f\n", densidade6);
        printf(" Super poder: %.2f\n", superpoder6);
        printf("\nNovo Cadastro 7\n");
        printf("Qual o estado ? ");
        scanf(" %c", &estado2);
        printf("Qual o código da cidade ? ");
        scanf("%s", &codigo7);
        printf("Qual o nome da cidade ? ");
        scanf("%s", &nome7);
        printf("Qual a população da cidade ? ");
        scanf("%d", &populacao7);
        printf("Qual a área da cidade? ");
        scanf("%lf", &area7);
        printf("Qual o PIB da cidade ? ");
        scanf("%lf", &pib7);
        printf("Quantos pontos turísticos tem na cidade ? ");
        scanf("%d", &pt7);
    
        pibpercap7 = (pib7 * 1e9) / populacao7;
        densidade7 = populacao7 / area7;
        superpoder7 = densidade7 + pibpercap7 + pib7 + area7 + populacao7 + pt7;
    
        printf(" \nEstado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %d habitantes\n Área da cidade: %.2f kilometros quadrados\n PIB da cidade: %.2f bilhões de R$\n Quantidade de pontos turísticos: %d\n",estado2, codigo7, nome7, populacao7, area7, pib7, pt7);
        printf(" PIB per capita: %.2f\n", pibpercap7);
        printf("Densidade populacional: %.2f\n", densidade7);
        printf(" Super poder: %.2f\n", superpoder7);
        printf("\nNovo Cadastro 8\n");
        printf("Qual o estado ? ");
        scanf(" %c", &estado2);
        printf("Qual o código da cidade ? ");
        scanf("%s", &codigo8);
        printf("Qual o nome da cidade ? ");
        scanf("%s", &nome8);
        printf("Qual a população da cidade ? ");
        scanf("%d", &populacao8);
        printf("Qual a área da cidade? ");
        scanf("%lf", &area8);
        printf("Qual o PIB da cidade ? ");
        scanf("%lf", &pib8);
        printf("Quantos pontos turísticos tem na cidade ? ");
        scanf("%d", &pt8);
    
        pibpercap8 = (pib8 * 1e9) / populacao8;
        densidade8 = populacao8 / area8;
        superpoder8 = densidade8 + pibpercap8+ pib8 + area8 + populacao8 + pt8;
    
        printf(" \nEstado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %d habitantes\n Área da cidade: %.2f kilometros quadrados\n PIB da cidade: %.2f bilhões de R$\n Quantidade de pontos turísticos: %d\n",estado2, codigo8, nome8, populacao8, area8, pib8, pt8);
        printf(" PIB per capita: %.2f\n", pibpercap8);
        printf("Densidade populacional: %.2f\n", densidade8);
        printf(" Super poder: %.2f\n", superpoder8);
    
        printf("\nNovo Cadastro 9\n");    
        printf("Qual o estado ? ");
        scanf(" %c", &estado3);
        printf("Qual o código da cidade ? ");
        scanf("%s", &codigo9);
        printf("Qual o nome da cidade ? ");
        scanf("%s", &nome9);
        printf("Qual a população da cidade ? ");
        scanf("%d", &populacao9);
        printf("Qual a área da cidade? ");
        scanf("%lf", &area9);
        printf("Qual o PIB da cidade ? ");
        scanf("%lf", &pib9);
        printf("Quantos pontos turísticos tem na cidade ? ");
        scanf("%d", &pt9);
        
        pibpercap9 = (pib9 * 1e9) / populacao9;
        densidade9 = populacao9 / area9;
        superpoder9 = densidade9 + pibpercap9 + pib9 + area9 + populacao9 + pt9;
    
        printf(" \nEstado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %d habitantes\n Área da cidade: %.2f kilometros quadrados\n PIB da cidade: %.2f bilhões de R$\n Quantidade de pontos turísticos: %d\n",estado3, codigo9, nome9, populacao9, area9, pib9, pt9);
        printf(" PIB per capita: %.2f\n", pibpercap9);
        printf("Densidade populacional: %.2f\n", densidade9);
        printf(" Super poder: %.2f\n", superpoder9);
    
        printf("\nNovo Cadastro 10\n");
        printf("Qual o estado ? ");
        scanf(" %c", &estado3);
        printf("Qual o código da cidade ? ");
        scanf("%s", &codigo10);
        printf("Qual o nome da cidade ? ");
        scanf("%s", &nome10);
        printf("Qual a população da cidade ? ");
        scanf("%d", &populacao10);
        printf("Qual a área da cidade? ");
        scanf("%lf", &area10);
        printf("Qual o PIB da cidade ? ");
        scanf("%lf", &pib10);
        printf("Quantos pontos turísticos tem na cidade ? ");
        scanf("%d", &pt10);
    
        pibpercap10 = (pib10 * 1e9) / populacao10;
        densidade10 = populacao10 / area10;
        superpoder10 = densidade10 + pibpercap10 + pib10 + area10 + populacao10 + pt10;
    
        printf(" \nEstado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %d habitantes\n Área da cidade: %.2f kilometros quadrados\n PIB da cidade: %.2f bilhões de R$\n Quantidade de pontos turísticos: %d\n",estado3, codigo10, nome10, populacao10, area10, pib10, pt10);
        printf(" PIB per capita: %.2f\n", pibpercap10);
        printf("Densidade populacional: %.2f\n", densidade10);
        printf(" Super poder: %.2f\n", superpoder10);
    
        printf("\nNovo Cadastro 11\n");
        printf("Qual o estado ? ");
        scanf(" %c", &estado3);
        printf("Qual o código da cidade ? ");
        scanf("%s", &codigo11);
        printf("Qual o nome da cidade ? ");
        scanf("%s", &nome11);
        printf("Qual a população da cidade ? ");
        scanf("%d", &populacao11);
        printf("Qual a área da cidade? ");
        scanf("%lf", &area11);
        printf("Qual o PIB da cidade ? ");
        scanf("%lf", &pib11);
        printf("Quantos pontos turísticos tem na cidade ? ");
        scanf("%d", &pt11);
    
        pibpercap11 = (pib11 * 1e9) / populacao11;
        densidade11 = populacao11 / area11;
        superpoder11 = densidade11 + pibpercap11 + pib11 + area11 + populacao11 + pt11;
    
        printf(" \nEstado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %d habitantes\n Área da cidade: %.2f kilometros quadrados\n PIB da cidade: %.2f bilhões de R$\n Quantidade de pontos turísticos: %d\n",estado3, codigo11, nome11, populacao11, area11, pib11, pt11);
        printf(" PIB per capita: %.2f\n", pibpercap11);
        printf("Densidade populacional: %.2f\n", densidade11);
        printf(" Super poder: %.2f\n", superpoder11);
    
        printf("\nNovo Cadastro 12\n");
        printf("Qual o estado ? ");
        scanf(" %c", &estado3);
        printf("Qual o código da cidade ? ");
        scanf("%s", &codigo12);
        printf("Qual o nome da cidade ? ");
        scanf("%s", &nome12);
        printf("Qual a população da cidade ? ");
        scanf("%d", &populacao12);
        printf("Qual a área da cidade? ");
        scanf("%lf", &area12);
        printf("Qual o PIB da cidade ? ");
        scanf("%lf", &pib12);
        printf("Quantos pontos turísticos tem na cidade ? ");
        scanf("%d", &pt12);
    
        pibpercap12 = (pib12 * 1e9) / populacao12;
        densidade12 = populacao12 / area12;
        superpoder12 = densidade12 + pibpercap12 + pib12 + area12 + populacao12 + pt12;
    
        printf(" \nEstado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %d habitantes\n Área da cidade: %.2f kilometros quadrados\n PIB da cidade: %.2f bilhões de R$\n Quantidade de pontos turísticos: %d\n",estado3, codigo12, nome12, populacao12, area12, pib12, pt12);
        printf(" PIB per capita: %.2f\n", pibpercap12);
        printf("Densidade populacional: %.2f\n", densidade12);
        printf(" Super poder: %.2f\n", superpoder12);
    
        printf("\nNovo Cadastro 13\n");
        printf("Qual o estado ? ");
        scanf(" %c", &estado4);
        printf("Qual o código da cidade ? ");
        scanf("%s", &codigo13);
        printf("Qual o nome da cidade ? ");
        scanf("%s", &nome13);
        printf("Qual a população da cidade ? ");
        scanf("%i", &populacao13);
        printf("Qual a área da cidade? ");
        scanf("%lf", &area13);
        printf("Qual o PIB da cidade ? ");
        scanf("%lf", &pib13);
        printf("Quantos pontos turísticos tem na cidade ? ");
        scanf("%i", &pt13);
    
        pibpercap13 = (pib13 * 1e9) / populacao13;
        densidade13 = populacao13 / area13;
        superpoder13 = densidade13 + pibpercap13 + pib13 + area13 + populacao13 + pt13;
    
        printf(" \nEstado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %d habitantes\n Área da cidade: %.2f kilometros quadrados\n PIB da cidade: %.2f bilhões de R$\n Quantidade de pontos turísticos: %d\n",estado4, codigo13, nome13, populacao13, area13, pib13, pt13);
        printf(" PIB per capita: %.2f\n", pibpercap13);
        printf("Densidade populacional: %.2f\n", densidade13);
        printf(" Super poder: %.2f\n", superpoder13);
    
        printf("\nNovo Cadastro 14\n");
        printf("Qual o estado ? ");
        scanf(" %c", &estado4);
        printf("Qual o código da cidade ? ");
        scanf("%s", &codigo14);
        printf("Qual o nome da cidade ? ");
        scanf("%s", &nome14);
        printf("Qual a população da cidade ? ");
        scanf("%i", &populacao14);
        printf("Qual a área da cidade? ");
        scanf("%lf", &area14);
        printf("Qual o PIB da cidade ? ");
        scanf("%lf", &pib14);
        printf("Quantos pontos turísticos tem na cidade ? ");
        scanf("%i", &pt14);
    
        pibpercap14 = (pib14 * 1e9) / populacao14;
        densidade14 = populacao14 / area14;
        superpoder14 = densidade14 + pibpercap14 + pib14 + area14 + populacao14 + pt14;
        printf(" \nEstado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %d habitantes\n Área da cidade: %.2f kilometros quadrados\n PIB da cidade: %.2f bilhões de R$\n Quantidade de pontos turísticos: %d\n",estado4, codigo14, nome14, populacao14, area14, pib14, pt14);
        printf(" PIB per capita: %.2f\n", pibpercap14);
        printf("Densidade populacional: %.2f\n", densidade14);
        printf(" Super poder: %.2f\n", superpoder14);
    
        printf("\nNovo Cadastro 15\n");
        printf("Qual o estado ? ");
        scanf(" %c", &estado4);
        printf("Qual o código da cidade ? ");
        scanf("%s", &codigo15);
        printf("Qual o nome da cidade ? ");
        scanf("%s", &nome15);
        printf("Qual a população da cidade ? ");
        scanf("%i", &populacao15);
        printf("Qual a área da cidade? ");
        scanf("%lf", &area15);
        printf("Qual o PIB da cidade ? ");
        scanf("%lf", &pib15);
        printf("Quantos pontos turísticos tem na cidade ? ");
        scanf("%i", &pt15);
    
        pibpercap15 = (pib15 * 1e9) / populacao15;
        densidade15 = populacao15 / area15;
        superpoder15 = densidade15 + pibpercap15 + pib15 + area15 + populacao15 + pt15;
    
        printf(" \nEstado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %d habitantes\n Área da cidade: %.2f kilometros quadrados\n PIB da cidade: %.2f bilhões de R$\n Quantidade de pontos turísticos: %d\n",estado4, codigo15, nome15, populacao15, area15, pib15, pt15);
        printf(" PIB per capita: %.2f\n", pibpercap15);
        printf("Densidade populacional: %.2f\n", densidade15);
        printf(" Super poder: %.2f\n", superpoder15);
    
        printf("\nNovo Cadastro 16\n");
        printf("Qual o estado ? ");
        scanf(" %c", &estado4);
        printf("Qual o código da cidade ? ");
        scanf("%s", &codigo16);
        printf("Qual o nome da cidade ? ");
        scanf("%s", &nome16);
        printf("Qual a população da cidade ? ");
        scanf("%i", &populacao16);
        printf("Qual a área da cidade? ");
        scanf("%lf", &area16);
        printf("Qual o PIB da cidade ? ");
        scanf("%lf", &pib16);
        printf("Quantos pontos turísticos tem na cidade ? ");
        scanf("%i", &pt16);
    
        pibpercap16 = (pib16 * 1e9) / populacao16;
        densidade16 = populacao16 / area16;
        superpoder16 = densidade16 + pibpercap16 + pib16 + area16 + populacao16 + pt16;
    
        printf(" \nEstado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %d habitantes\n Área da cidade: %.2f kilometros quadrados\n PIB da cidade: %.2f bilhões de R$\n Quantidade de pontos turísticos: %d\n",estado4, codigo16, nome16, populacao16, area16, pib16, pt16);
        printf(" PIB per capita: %.2f\n", pibpercap16);
        printf("Densidade populacional: %.2f\n", densidade16);
        printf(" Super poder: %.2f\n", superpoder16);
    
        printf("\nNovo Cadastro 17\n");
        printf("Qual o estado ? ");
        scanf(" %c", &estado5);
        printf("Qual o código da cidade ? ");
        scanf("%s", &codigo17);
        printf("Qual o nome da cidade ? ");
        scanf("%s", &nome17);
        printf("Qual a população da cidade ? ");
        scanf("%i", &populacao17);
        printf("Qual a área da cidade? ");
        scanf("%lf", &area17);
        printf("Qual o PIB da cidade ? ");
        scanf("%lf", &pib17);
        printf("Quantos pontos turísticos tem na cidade ? ");
        scanf("%i", &pt17);
    
        pibpercap17 = (pib17 * 1e9) / populacao17;
        densidade17 = populacao17 / area17;
        superpoder17 = densidade17 + pibpercap17 + pib17 + area17 + populacao17 + pt17;
        printf(" \nEstado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %d habitantes\n Área da cidade: %.2f kilometros quadrados\n PIB da cidade: %.2f bilhões de R$\n Quantidade de pontos turísticos: %d\n",estado5, codigo17, nome17, populacao17, area17, pib17, pt17);
        printf(" PIB per capita: %.2f\n", pibpercap17);
        printf("Densidade populacional: %.2f\n", densidade17);
        printf(" Super poder: %.2f\n", superpoder17);
    
        printf("\nNovo Cadastro 18\n");
        printf("Qual o estado ? ");
        scanf(" %c", &estado5);
        printf("Qual o código da cidade ? ");
        scanf("%s", &codigo18);
        printf("Qual o nome da cidade ? ");
        scanf("%s", &nome18);
        printf("Qual a população da cidade ? ");
        scanf("%i", &populacao18);
        printf("Qual a área da cidade? ");
        scanf("%lf", &area18);
        printf("Qual o PIB da cidade ? ");
        scanf("%lf", &pib18);
        printf("Quantos pontos turísticos tem na cidade ? ");
        scanf("%i", &pt18);
    
        pibpercap18 = (pib18 * 1e9) / populacao18;
        densidade18 = populacao18 / area18;
        superpoder18 = densidade18 + pibpercap18 + pib18 + area18 + populacao18 + pt18;
        printf(" \nEstado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %d habitantes\n Área da cidade: %.2f kilometros quadrados\n PIB da cidade: %.2f bilhões de R$\n Quantidade de pontos turísticos: %d\n",estado5, codigo18, nome18, populacao18, area18, pib18, pt18);
        printf(" PIB per capita: %.2f\n", pibpercap18);
        printf("Densidade populacional: %.2f\n", densidade18);
        printf(" Super poder: %.2f\n", superpoder18);
    
        printf("\nNovo Cadastro 19\n");
        printf("Qual o estado ? ");
        scanf(" %c", &estado5);
        printf("Qual o código da cidade ? ");
        scanf("%s", &codigo19);
        printf("Qual o nome da cidade ? ");
        scanf("%s", &nome19);
        printf("Qual a população da cidade ? ");
        scanf("%i", &populacao19);
        printf("Qual a área da cidade? ");
        scanf("%lf", &area19);
        printf("Qual o PIB da cidade ? ");
        scanf("%lf", &pib19);
        printf("Quantos pontos turísticos tem na cidade ? ");
        scanf("%i", &pt19);
    
        pibpercap19 = (pib19 * 1e9) / populacao19;
        densidade19 = populacao19 / area19;
        superpoder19 = densidade19 + pibpercap19 + pib19 + area19 + populacao19 + pt19;
        printf(" \nEstado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %d habitantes\n Área da cidade: %.2f kilometros quadrados\n PIB da cidade: %.2f bilhões de R$\n Quantidade de pontos turísticos: %d\n",estado5, codigo19, nome19, populacao19, area19, pib19, pt19);
        printf(" PIB per capita: %.2f\n", pibpercap19);
        printf("Densidade populacional: %.2f\n", densidade19);
        printf(" Super poder: %.2f\n", superpoder19);
    
        printf("\nNovo Cadastro 20\n");
        printf("Qual o estado ? ");
        scanf(" %c", &estado5);
        printf("Qual o código da cidade ? ");
        scanf("%s", &codigo20);
        printf("Qual o nome da cidade ? ");
        scanf("%s", &nome20);
        printf("Qual a população da cidade ? ");
        scanf("%i", &populacao20);
        printf("Qual a área da cidade? ");
        scanf("%lf", &area20);
        printf("Qual o PIB da cidade ? ");
        scanf("%lf", &pib20);
        printf("Quantos pontos turísticos tem na cidade ? ");
        scanf("%i", &pt20);
    
        pibpercap20 = (pib20 * 1e9) / populacao20;
        densidade20 = populacao20 / area20;
        superpoder20 = densidade20 + pibpercap20 + pib20 + area20 + populacao20 + pt20;
        printf(" \nEstado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %d habitantes\n Área da cidade: %.2f kilometros quadrados\n PIB da cidade: %.2f bilhões de R$\n Quantidade de pontos turísticos: %d\n",estado5, codigo20, nome20, populacao20, area20, pib20, pt20);
        printf(" PIB per capita: %.2f\n", pibpercap20);
        printf("Densidade populacional: %.2f\n", densidade20);
        printf(" Super poder: %.2f\n", superpoder20);
    
        printf("\nNovo Cadastro 21\n");
        printf("Qual o estado ? ");
        scanf(" %c", &estado6);
        printf("Qual o código da cidade ? ");
        scanf("%s", &codigo21);
        printf("Qual o nome da cidade ? ");
        scanf("%s", &nome21);
        printf("Qual a população da cidade ? ");
        scanf("%i", &populacao21);
        printf("Qual a área da cidade? ");
        scanf("%lf", &area21);
        printf("Qual o PIB da cidade ? ");
        scanf("%lf", &pib21);
        printf("Quantos pontos turísticos tem na cidade ? ");
        scanf("%i", &pt21);
    
        pibpercap21 = (pib21 * 1e9) / populacao21;
        densidade21 = populacao21 / area21;
        superpoder21 = densidade21 + pibpercap21 + pib21 + area21 + populacao21 + pt21;
        printf(" \nEstado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %d habitantes\n Área da cidade: %.2f kilometros quadrados\n PIB da cidade: %.2f bilhões de R$\n Quantidade de pontos turísticos: %d\n",estado6, codigo21, nome21, populacao21, area21, pib21, pt21);
        printf(" PIB per capita: %.2f\n", pibpercap21);
        printf("Densidade populacional: %.2f\n", densidade21);
        printf(" Super poder: %.2f\n", superpoder21);
    
        printf("\nNovo Cadastro 22\n");
        printf("Qual o estado ? ");
        scanf(" %c", &estado6);
        printf("Qual o código da cidade ? ");
        scanf("%s", &codigo22);
        printf("Qual o nome da cidade ? ");
        scanf("%s", &nome22);
        printf("Qual a população da cidade ? ");
        scanf("%i", &populacao22);
        printf("Qual a área da cidade? ");
        scanf("%lf", &area22);
        printf("Qual o PIB da cidade ? ");
        scanf("%lf", &pib22);
        printf("Quantos pontos turísticos tem na cidade ? ");
        scanf("%i", &pt22);
    
        pibpercap22 = (pib22 * 1e9) / populacao22;
        densidade22 = populacao22 / area22;
        superpoder22 = densidade22 + pibpercap22 + pib22 + area22 + populacao22 + pt22;
        printf(" \nEstado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %d habitantes\n Área da cidade: %.2f kilometros quadrados\n PIB da cidade: %.2f bilhões de R$\n Quantidade de pontos turísticos: %d\n",estado6, codigo22, nome22, populacao22, area22, pib22, pt22);
        printf(" PIB per capita: %.2f\n", pibpercap22);
        printf("Densidade populacional: %.2f\n", densidade22);
        printf(" Super poder: %.2f\n", superpoder22);
    
        printf("\nNovo Cadastro 23\n");
        printf("Qual o estado ? ");
        scanf(" %c", &estado6);
        printf("Qual o código da cidade ? ");
        scanf("%s", &codigo23);
        printf("Qual o nome da cidade ? ");
        scanf("%s", &nome23);
        printf("Qual a população da cidade ? ");
        scanf("%i", &populacao23);
        printf("Qual a área da cidade? ");
        scanf("%lf", &area23);
        printf("Qual o PIB da cidade ? ");
        scanf("%lf", &pib23);
        printf("Quantos pontos turísticos tem na cidade ? ");
        scanf("%i", &pt23);
    
        pibpercap23 = (pib23 * 1e9) / populacao23;
        densidade23 = populacao23 / area23;
        superpoder23 = densidade23 + pibpercap23 + pib23 + area23 + populacao23 + pt23;
        printf(" \nEstado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %d habitantes\n Área da cidade: %.2f kilometros quadrados\n PIB da cidade: %.2f bilhões de R$\n Quantidade de pontos turísticos: %d\n",estado6, codigo23, nome23, populacao23, area23, pib23, pt23);
        printf(" PIB per capita: %.2f\n", pibpercap23);
        printf("Densidade populacional: %.2f\n", densidade23);
        printf(" Super poder: %.2f\n", superpoder23);
    
        printf("\nNovo Cadastro 24\n");
        printf("Qual o estado ? ");
        scanf(" %c", &estado6);
        printf("Qual o código da cidade ? ");
        scanf("%s", &codigo24);
        printf("Qual o nome da cidade ? ");
        scanf("%s", &nome24);
        printf("Qual a população da cidade ? ");
        scanf("%i", &populacao24);
        printf("Qual a área da cidade? ");
        scanf("%lf", &area24);
        printf("Qual o PIB da cidade ? ");
        scanf("%lf", &pib24);
        printf("Quantos pontos turísticos tem na cidade ? ");
        scanf("%i", &pt24);
    
        pibpercap24 = (pib24 * 1e9) / populacao24;
        densidade24 = populacao24 / area24;
        superpoder24 = densidade24 + pibpercap24 + pib24 + area24 + populacao24 + pt24;
        printf(" \nEstado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %d habitantes\n Área da cidade: %.2f kilometros quadrados\n PIB da cidade: %.2f bilhões de R$\n Quantidade de pontos turísticos: %d\n",estado6, codigo24, nome24, populacao24, area24, pib24, pt24);
        printf(" PIB per capita: %.2f\n", pibpercap24);
        printf("Densidade populacional: %.2f\n", densidade24);
        printf(" Super poder: %.2f\n", superpoder24);
    
        printf("\nNovo Cadastro 25\n");
        printf("Qual o estado ? ");
        scanf(" %c", &estado7);
        printf("Qual o código da cidade ? ");
        scanf("%s", &codigo25);
        printf("Qual o nome da cidade ? ");
        scanf("%s", &nome25);
        printf("Qual a população da cidade ? ");
        scanf("%i", &populacao25);
        printf("Qual a área da cidade? ");
        scanf("%lf", &area25);
        printf("Qual o PIB da cidade ? ");
        scanf("%lf", &pib25);
        printf("Quantos pontos turísticos tem na cidade ? ");
        scanf("%i", &pt25);
    
        pibpercap25 = (pib25 * 1e9) / populacao25;
        densidade25 = populacao25 / area25;
        superpoder25 = densidade25 + pibpercap25 + pib25 + area25 + populacao25 + pt25;
        printf(" \nEstado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %d habitantes\n Área da cidade: %.2f kilometros quadrados\n PIB da cidade: %.2f bilhões de R$\n Quantidade de pontos turísticos: %d\n",estado7, codigo25, nome25, populacao25, area25, pib25, pt25);
        printf(" PIB per capita: %.2f\n", pibpercap25);
        printf("Densidade populacional: %.2f\n", densidade25);
        printf(" Super poder: %.2f\n", superpoder25);
    
        printf("\nNovo Cadastro 26\n");
        printf("Qual o estado ? ");
        scanf(" %c", &estado7);
        printf("Qual o código da cidade ? ");
        scanf("%s", &codigo26);
        printf("Qual o nome da cidade ? ");
        scanf("%s", &nome26);
        printf("Qual a população da cidade ? ");
        scanf("%i", &populacao26);
        printf("Qual a área da cidade? ");
        scanf("%lf", &area26);
        printf("Qual o PIB da cidade ? ");
        scanf("%lf", &pib26);
        printf("Quantos pontos turísticos tem na cidade ? ");
        scanf("%i", &pt26);
    
        pibpercap26 = (pib26 * 1e9) / populacao26;
        densidade26 = populacao26 / area26;
        superpoder26 = densidade26 + pibpercap26 + pib26 + area26 + populacao26 + pt26;
        printf(" \nEstado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %d habitantes\n Área da cidade: %.2f kilometros quadrados\n PIB da cidade: %.2f bilhões de R$\n Quantidade de pontos turísticos: %d\n",estado7, codigo26, nome26, populacao26, area26, pib26, pt26);
        printf(" PIB per capita: %.2f\n", pibpercap26);
        printf("Densidade populacional: %.2f\n", densidade26);
        printf(" Super poder: %.2f\n", superpoder26);
    
        printf("\nNovo Cadastro 27\n");
        printf("Qual o estado ? ");
        scanf(" %c", &estado7);
        printf("Qual o código da cidade ? ");
        scanf("%s", &codigo27);
        printf("Qual o nome da cidade ? ");
        scanf("%s", &nome27);
        printf("Qual a população da cidade ? ");
        scanf("%i", &populacao27);
        printf("Qual a área da cidade? ");
        scanf("%lf", &area27);
        printf("Qual o PIB da cidade ? ");
        scanf("%lf", &pib27);
        printf("Quantos pontos turísticos tem na cidade ? ");
        scanf("%i", &pt27);
    
        pibpercap27 = (pib27 * 1e9) / populacao27;
        densidade27 = populacao27 / area27;
        superpoder27 = densidade27 + pibpercap27 + pib27 + area27 + populacao27 + pt27;
        printf(" \nEstado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %d habitantes\n Área da cidade: %.2f kilometros quadrados\n PIB da cidade: %.2f bilhões de R$\n Quantidade de pontos turísticos: %d\n",estado7, codigo27, nome27, populacao27, area27, pib27, pt27);
        printf(" PIB per capita: %.2f\n", pibpercap27);
        printf("Densidade populacional: %.2f\n", densidade27);
        printf(" Super poder: %.2f\n", superpoder27);
    
        printf("\nNovo Cadastro 28\n");
        printf("Qual o estado ? ");
        scanf(" %c", &estado7);
        printf("Qual o código da cidade ? ");
        scanf("%s", &codigo28);
        printf("Qual o nome da cidade ? ");
        scanf("%s", &nome28);
        printf("Qual a população da cidade ? ");
        scanf("%i", &populacao28);
        printf("Qual a área da cidade? ");
        scanf("%lf", &area28);
        printf("Qual o PIB da cidade ? ");
        scanf("%lf", &pib28);
        printf("Quantos pontos turísticos tem na cidade ? ");
        scanf("%i", &pt28);
    
        pibpercap28 = (pib28 * 1e9) / populacao28;
        densidade28 = populacao28 / area28;
        superpoder28 = densidade28 + pibpercap28 + pib28 + area28 + populacao28 + pt28;
        printf(" \nEstado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %d habitantes\n Área da cidade: %.2f kilometros quadrados\n PIB da cidade: %.2f bilhões de R$\n Quantidade de pontos turísticos: %d\n",estado7, codigo28, nome28, populacao28, area28, pib28, pt28);
        printf(" PIB per capita: %.2f\n", pibpercap28);
        printf("Densidade populacional: %.2f\n", densidade28);
        printf(" Super poder: %.2f\n", superpoder28);
    
        printf("\nNovo Cadastro 29\n");
        printf("Qual o estado ? ");
        scanf(" %c", &estado8);
        printf("Qual o código da cidade ? ");
        scanf("%s", &codigo29);
        printf("Qual o nome da cidade ? ");
        scanf("%s", &nome29);
        printf("Qual a população da cidade ? ");
        scanf("%i", &populacao29);
        printf("Qual a área da cidade? ");
        scanf("%lf", &area29);
        printf("Qual o PIB da cidade ? ");
        scanf("%lf", &pib29);
        printf("Quantos pontos turísticos tem na cidade ? ");
        scanf("%i", &pt29);
    
        pibpercap29 = (pib29 * 1e9) / populacao29;
        densidade29 = populacao29 / area29;
        superpoder29 = densidade29 + pibpercap29 + pib29 + area29 + populacao29 + pt29;
        printf(" \nEstado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %d habitantes\n Área da cidade: %.2f kilometros quadrados\n PIB da cidade: %.2f bilhões de R$\n Quantidade de pontos turísticos: %d\n",estado8, codigo29, nome29, populacao29, area29, pib29, pt29);
        printf(" PIB per capita: %.2f\n", pibpercap29);
        printf("Densidade populacional: %.2f\n", densidade29);
        printf(" Super poder: %.2f\n", superpoder29);
    
        printf("\nNovo Cadastro 30\n");
        printf("Qual o estado ? ");
        scanf(" %c", &estado8);
        printf("Qual o código da cidade ? ");
        scanf("%s", &codigo30);
        printf("Qual o nome da cidade ? ");
        scanf("%s", &nome30);
        printf("Qual a população da cidade ? ");
        scanf("%i", &populacao30);
        printf("Qual a área da cidade? ");
        scanf("%lf", &area30);
        printf("Qual o PIB da cidade ? ");
        scanf("%lf", &pib30);
        printf("Quantos pontos turísticos tem na cidade ? ");
        scanf("%i", &pt30);
    
        pibpercap30 = (pib30 * 1e9) / populacao30;
        densidade30 = populacao30 / area30;
        superpoder30 = densidade30 + pibpercap30 + pib30 + area30 + populacao30 + pt30;
        printf(" \nEstado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %d habitantes\n Área da cidade: %.2f kilometros quadrados\n PIB da cidade: %.2f bilhões de R$\n Quantidade de pontos turísticos: %d\n",estado8, codigo30, nome30, populacao30, area30, pib30, pt30);
        printf(" PIB per capita: %.2f\n", pibpercap30);
        printf("Densidade populacional: %.2f\n", densidade30);
        printf(" Super poder: %.2f\n", superpoder30);
    
        printf("\nNovo Cadastro 31\n");
        printf("Qual o estado ? ");
        scanf(" %c", &estado8);
        printf("Qual o código da cidade ? ");
        scanf("%s", &codigo31);
        printf("Qual o nome da cidade ? ");
        scanf("%s", &nome31);
        printf("Qual a população da cidade ? ");
        scanf("%i", &populacao31);
        printf("Qual a área da cidade? ");
        scanf("%lf", &area31);
        printf("Qual o PIB da cidade ? ");
        scanf("%lf", &pib31);
        printf("Quantos pontos turísticos tem na cidade  ? ");
        scanf("%i", &pt31);
    
        pibpercap31 = (pib31 * 1e9) / populacao31;
        densidade31 = populacao31 / area31;
        superpoder31 = densidade31 + pibpercap31 + pib31 + area31 + populacao31 + pt31;
        printf(" \nEstado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %d habitantes\n Área da cidade: %.2f kilometros quadrados\n PIB da cidade: %.2f bilhões de R$\n Quantidade de pontos turísticos: %d\n",estado8, codigo31, nome31, populacao31, area31, pib31, pt31);
        printf(" PIB per capita: %.2f\n", pibpercap31);
        printf("Densidade populacional: %.2f\n", densidade31);
        printf(" Super poder: %.2f\n", superpoder31);
    
        printf("\nÚltimo Cadastro\n");
        printf("Qual o estado ? ");
        scanf(" %c", &estado8);
        printf("Qual o código da cidade ? ");
        scanf("%s", &codigo32);
        printf("Qual o nome da cidade ? ");
        scanf("%s", &nome32);
        printf("Qual a população da cidade ? ");
        scanf("%i", &populacao32);
        printf("Qual a área da cidade? ");
        scanf("%lf", &area32);
        printf("Qual o PIB da cidade ? ");
        scanf("%lf", &pib32);
        printf("Quantos pontos turísticos tem na cidade ? ");
        scanf("%i", &pt32);
    
        pibpercap32 = (pib32 * 1e9) / populacao32;
        densidade32 = populacao32 / area32;
        superpoder32 = densidade32 + pibpercap32 + pib32 + area32 + populacao32 + pt32;
        printf(" \nEstado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %d habitantes\n Área da cidade: %.2f kilometros quadrados\n PIB da cidade: %.2f bilhões de R$\n Quantidade de pontos turísticos: %d\n",estado8, codigo32, nome32, populacao32, area32, pib32, pt32);
        printf(" PIB per capita: %.2f\n", pibpercap32);
        printf("Densidade populacional: %.2f\n", densidade32);
        printf(" Super poder: %.2f\n", superpoder32);
        
        printf("Escolha uma cidade pelo seu número de cadastro para a comparação: "); //função para selecionar a cidade
        scanf("%i", &escolha);
        
        if (escolha == 1){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao, area, pib, pt, pibpercap, densidade, superpoder);
        }
        if (escolha == 2){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao2, area2, pib2, pt2, pibpercap2, densidade2, superpoder2);
        }
        if (escolha == 3){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao3, area3, pib3, pt3, pibpercap3, densidade3, superpoder3);
        }
        if (escolha == 4){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao4, area4, pib4, pt4, pibpercap4, densidade4, superpoder4);
        }
        if (escolha == 5){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao5, area5, pib5, pt5, pibpercap5, densidade5, superpoder5);
        }
        if (escolha == 6){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao6, area6, pib6, pt6, pibpercap6, densidade6, superpoder6);
        }
        if (escolha == 7){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao7, area7, pib7, pt7, pibpercap7, densidade7, superpoder7);
        }
        if (escolha == 8){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao8, area8, pib8, pt8, pibpercap8, densidade8, superpoder8);
        }
        if (escolha == 9){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao9, area9, pib9, pt9, pibpercap9, densidade9, superpoder9);
        }
        if (escolha == 10){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao10, area10, pib10, pt10, pibpercap10, densidade10, superpoder10);
        }
        if (escolha == 11){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao11, area11, pib11, pt11, pibpercap11, densidade11, superpoder11);
        }
        if (escolha == 12){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao12, area12, pib12, pt12, pibpercap12, densidade12, superpoder12);
        }
        if (escolha == 13){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao13, area13, pib13, pt13, pibpercap13, densidade13, superpoder13);
        }
        if (escolha == 14){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao14, area14, pib14, pt14, pibpercap14, densidade14, superpoder14);
        }
        if (escolha == 15){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao15, area15, pib15, pt15, pibpercap15, densidade15, superpoder15);
        }
        if (escolha == 16){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao16, area16, pib16, pt16, pibpercap16, densidade16, superpoder16);
        }
        if (escolha == 17){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao17, area17, pib17, pt17, pibpercap17, densidade17, superpoder17);
        }
        if (escolha == 18){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao18, area18, pib18, pt18, pibpercap18, densidade18, superpoder18);
        }
        if (escolha == 19){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao19, area19, pib19, pt19, pibpercap19, densidade19, superpoder19);
        }
        if (escolha == 20){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao20, area20, pib20, pt20, pibpercap20, densidade20, superpoder20);
        }
        if (escolha == 21){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao21, area21, pib21, pt21, pibpercap21, densidade21, superpoder21);
        }
        if (escolha == 22){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao22, area22, pib22, pt22, pibpercap22, densidade22, superpoder22);
        }
        if (escolha == 23){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao23, area23, pib23, pt23, pibpercap23, densidade23, superpoder23);
        }
        if (escolha == 24){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao24, area24, pib24, pt24, pibpercap24, densidade24, superpoder24);
        }
        if (escolha == 25){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao25, area25, pib25, pt25, pibpercap25, densidade25, superpoder25);
        }
        if (escolha == 26){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao26, area26, pib26, pt26, pibpercap26, densidade26, superpoder26);
        }
        if (escolha == 27){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao27, area27, pib27, pt27, pibpercap27, densidade27, superpoder27);
        }
        if (escolha == 28){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao28, area28, pib28, pt28, pibpercap28, densidade28, superpoder28);
        }
        if (escolha == 29){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao29, area29, pib29, pt29, pibpercap29, densidade29, superpoder29);
        }
        if (escolha == 30){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao30, area30, pib30, pt30, pibpercap30, densidade30, superpoder30);
        }
        if (escolha == 31){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao31, area31, pib31, pt31, pibpercap31, densidade31, superpoder31);
        }
        if (escolha == 32){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao32, area32, pib32, pt32, pibpercap32, densidade32, superpoder32);
        }
    
        printf("Escolha outra cidade pelo seu número de cadastro para a comparação(não utilize a mesma cidade da primeira opção): "); 
        scanf("%i", &escolha2);               
        
        if (escolha2 == 1){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao, area, pib, pt, pibpercap, densidade, superpoder);
        }
        if (escolha2 == 2){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao2, area2, pib2, pt2, pibpercap2, densidade2, superpoder2);
        }
        if (escolha2 == 3){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao3, area3, pib3, pt3, pibpercap3, densidade3, superpoder3);
        }
        if (escolha2 == 4){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao4, area4, pib4, pt4, pibpercap4, densidade4, superpoder4);
        }
        if (escolha2 == 5){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao5, area5, pib5, pt5, pibpercap5, densidade5, superpoder5);
        }
        if (escolha2 == 6){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao6, area6, pib6, pt6, pibpercap6, densidade6, superpoder6);
        }
        if (escolha2 == 7){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao7, area7, pib7, pt7, pibpercap7, densidade7, superpoder7);
        }
        if (escolha2 == 8){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao8, area8, pib8, pt8, pibpercap8, densidade8, superpoder8);
        }
        if (escolha2 == 9){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao9, area9, pib9, pt9, pibpercap9, densidade9, superpoder9);
        }
        if (escolha2 == 10){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao10, area10, pib10, pt10, pibpercap10, densidade10, superpoder10);
        }
        if (escolha2 == 11){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao11, area11, pib11, pt11, pibpercap11, densidade11, superpoder11);
        }
        if (escolha2 == 12){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao12, area12, pib12, pt12, pibpercap12, densidade12, superpoder12);
        }
        if (escolha2 == 13){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao13, area13, pib13, pt13, pibpercap13, densidade13, superpoder13);
        }
        if (escolha2 == 14){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao14, area14, pib14, pt14, pibpercap14, densidade14, superpoder14);
        }
        if (escolha2 == 15){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao15, area15, pib15, pt15, pibpercap15, densidade15, superpoder15);
        }
        if (escolha2 == 16){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao16, area16, pib16, pt16, pibpercap16, densidade16, superpoder16);
        }
        if (escolha2 == 17){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao17, area17, pib17, pt17, pibpercap17, densidade17, superpoder17);
        }
        if (escolha2 == 18){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao18, area18, pib18, pt18, pibpercap18, densidade18, superpoder18);
        }
        if (escolha2 == 19){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao19, area19, pib19, pt19, pibpercap19, densidade19, superpoder19);
        }
        if (escolha2 == 20){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao20, area20, pib20, pt20, pibpercap20, densidade20, superpoder20);
        }
        if (escolha2 == 21){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao21, area21, pib21, pt21, pibpercap21, densidade21, superpoder21);
        }
        if (escolha2 == 22){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao22, area22, pib22, pt22, pibpercap22, densidade22, superpoder22);
        }
        if (escolha2 == 23){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao23, area23, pib23, pt23, pibpercap23, densidade23, superpoder23);
        }
        if (escolha2 == 24){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao24, area24, pib24, pt24, pibpercap24, densidade24, superpoder24);
        }
        if (escolha2 == 25){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao25, area25, pib25, pt25, pibpercap25, densidade25, superpoder25);
        }
        if (escolha2 == 26){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao26, area26, pib26, pt26, pibpercap26, densidade26, superpoder26);
        }
        if (escolha2 == 27){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao27, area27, pib27, pt27, pibpercap27, densidade27, superpoder27);
        }
        if (escolha2 == 28){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao28, area28, pib28, pt28, pibpercap28, densidade28, superpoder28);
        }
        if (escolha2 == 29){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao29, area29, pib29, pt29, pibpercap29, densidade29, superpoder29);
        }
        if (escolha2 == 30){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao30, area30, pib30, pt30, pibpercap30, densidade30, superpoder30);
        }
        if (escolha2 == 31){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao31, area31, pib31, pt31, pibpercap31, densidade31, superpoder31);
        }
        if (escolha2 == 32){
            printf("Dados da cidade selecionada: \nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %i\n PIB per capita %.2f\n Densidade: %.2f\n Super poder: %.2f\n", populacao32, area32, pib32, pt32, pibpercap32, densidade32, superpoder32);
        }
        
        printf("Escolha o atributo a ser comparado: 1-populacao\n 2-área\n 3-PIB\n 4-pontos turísticos\n 5-pib per capita\n 6-densidade populacional\n 7-super poder\n (digite o número usadao para o atributo)");
        scanf("%d", &escolhac);
    }

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    