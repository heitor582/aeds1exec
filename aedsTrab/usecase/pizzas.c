#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
#include "ingredients.h"
#include "pizzas.h"

void printPizzasUseCase() {
    int count;
    Pizza *pizzas = getAllPizzas(&count);
    for (int i =0; i<count; i++) {
        Pizza pizza = pizzas[i];
        printf("Pizza ID: %d\n", pizza.id);
        printf("Sabor: %s\n", pizza.flavor);
        printf("Preço: R$%.2f\n\n", pizza.price);
        printf("Com ingredientes: \n");
        Ingredient *ingredients = getAllIngredientsByIdIn(pizza.ingredients, pizza.ingredientsSize);
        for (int i =0; i<pizza.ingredientsSize; i++) {
            printf("\t%s\n", ingredients[i].name);
        }
        free(ingredients);
        printf("\n");
    }
    
    printf("\n");
    free(pizzas);
}

void createPizzaUseCase() {
    while (getchar() != '\n'); 
    Pizza pizza;

    printf("Digite o sabor da pizza: ");
    fgets(pizza.flavor, NAME_SIZE, stdin);
    pizza.flavor[strcspn(pizza.flavor, "\n")] = '\0';

    printf("Digite o preço da pizza: ");
    scanf("%f", &pizza.price);
    printf("\n");

    printf("Escreva o id do ingrediente que você quer adicionar na pizza ou digite 0 para sair: \n");
    printIngredientsUseCase();

    int value;
    printf("Ingrediente ID: ");
    scanf("%d", &value);
    while (value != 0) {
        pizza.ingredients[pizza.ingredientsSize]=value;
        pizza.ingredientsSize++;

        printf("Ingrediente ID: ");
        scanf("%d", &value);
    }
    
    savePizza(pizza);
}

void deletePizzaUseCase() {
    while (getchar() != '\n');
    char flavorForDelete[NAME_SIZE];
    printf("Digite o sabor da pizza que quer deletar: ");
    fgets(flavorForDelete, NAME_SIZE, stdin);
    flavorForDelete[strcspn(flavorForDelete, "\n")] = '\0';
    deletePizzaByFlavor(flavorForDelete);
}

// void updatePizzaUseCase() {
//     char flavorForUpdate[NAME_SIZE];
//     printf("Digite o sabor da pizza que quer alterar: ");
//     fgets(flavorForUpdate, NAME_SIZE, stdin);
//     //TODO: remove /n on p.name
//     Pizza *pizza = searchPizzaByFlavor(flavorForUpdate);

//     if(pizza == NULL){
//         printf("Pizza de sabor %s não encontrada", flavorForUpdate);
//         free(pizza);
//         return;
//     }

//     int value;
//     scanf("%d", &value);
//     do{
//         switch(value) {
//             case 0:
//                 printf("Saindo da atualização da pizza...\n");
//                 break;
//             case 1:
//                 printf("Opção selecionada: Atualizar sabor da pizza.\n");
//                 char newFlavor[NAME_SIZE];
//                 printf("Digite o sabor da pizza: ");
//                 fgets(pizza->flavor, NAME_SIZE, stdin);
//                 printf("\n");
//                 break;
//             case 2:
//                 printf("Opção selecionada: Atualizar valor da pizza.\n");
//                 printf("Digite o preço da pizza: ");
//                 scanf("%f", &pizza->price);
//                 printf("\n");
//                 break;
//             case 3:
//                 printf("Opção selecionada: Adicionar ingredientes à pizza.\n");
                
//                 printf("\n");
//                 break;
//             case 4:
//                 printf("Opção selecionada: Remover ingredientes da pizza.\n");
                
//                 printf("\n");
//                 break;
//             default:
//                 printf("Opção inválida. Tente novamente.\n");
//         }
//     } while(value != 0);


//     updatePizza(*pizza);
//     free(pizza);
// }