#include <stdlib.h>
#include <stdio.h>
#include <strings.h>
#include "ingredients.h"

void printIngredientsUseCase(){
    int count;
    Ingredient *ingredients = getAllIngredients(&count);
    for (int i =0; i<count; i++) {
        Ingredient ingredient = ingredients[i];
        printf("Ingrediente ID: %d\n", ingredient.id);
        printf("Nome: %s\n", ingredient.name);
        printf("Preço: R$%.2f\n\n", ingredient.extraPrice);
        printf("\n");
    }

    printf("\n");
    free(ingredients);
}

void createIngredientUseCase(){
    while (getchar() != '\n'); 

    Ingredient ingredient;

    printf("Digite o nome do ingredient: ");
    fgets(ingredient.name, NAME_SIZE, stdin);
    ingredient.name[strcspn(ingredient.name, "\n")] = '\0';

    printf("Digite o preço extra do ingredient: \n");
    scanf("%f", &ingredient.extraPrice);
    
    saveIngredient(ingredient);
}

void deleteIngredientUseCase(){
    while (getchar() != '\n');
    char ingredientName[NAME_SIZE];
    printf("Digite o nome do ingredient para deletar: ");
    fgets(ingredientName, NAME_SIZE, stdin);
    ingredientName[strcspn(ingredientName, "\n")] = '\0';
    deleteIngredientByName(ingredientName);
}