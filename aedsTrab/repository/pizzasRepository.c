#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "pizzasRepository.h"

Pizza* getAllPizzas(int* count) {
    FILE *f;
    f = fopen(PIZZA_FILE_NAME, "r");
    if (f == NULL) {
        perror("Error opening file");
        exit(1);
    }

    int numberOfPizzas = getNumberOfPizzas();
    (*count) = numberOfPizzas;

    Pizza *pizzas = (Pizza*)malloc(sizeof(Pizza)*numberOfPizzas);
    if (pizzas == NULL) {
        perror("Memory allocation failed");
        exit(1);
    }

    char line[MAX_LINE_LENGTH];
    int i=0;
    while (fgets(line, sizeof(line), f) != NULL) {
        line[strcspn(line, "\n")] = 0;

        char *token = strtok(line, ";");
        pizzas[i].id = atoi(token);

        token = strtok(NULL, ";");
        pizzas[i].price=atof(token);

        token = strtok(NULL, ";");
        strncpy(pizzas[i].flavor, token, NAME_SIZE);

        token = strtok(NULL, ";");
        pizzas[i].ingredientsSize = atoi(token);

        token = strtok(NULL, ";");
        char ingredientsIds[MAX_INGREDIENTS_LINE_LENGTH];
        strncpy(ingredientsIds, token, MAX_INGREDIENTS_LINE_LENGTH);

        char *ingredientsToken = strtok(ingredientsIds, ",");
        int ingredientsCount = 0;
        while (ingredientsToken != NULL) {
            pizzas[i].ingredients[ingredientsCount] = atoi(ingredientsToken);
            ingredientsToken = strtok(NULL, ",");
            ingredientsCount++;
        }
        i++;
    }
    
    fclose(f);

    return pizzas;
}
void savePizza(Pizza pizza) {
    Index index = readIndex();
    index.pizzaId++;
    writeNewIndex(index);
    FILE *f = fopen(PIZZA_FILE_NAME, "a");
    if (f == NULL) {
        perror("Error opening file");
        exit(1);
    }

    char ingredientsLine[MAX_INGREDIENTS_LINE_LENGTH] = "";
    for(int i=0; i<pizza.ingredientsSize; i++){
        int size = MAX_INGREDIENTS_LINE_LENGTH - strlen(ingredientsLine) - 1;
        char ingredientId[2];
        snprintf(ingredientId, sizeof(ingredientId), "%d", pizza.ingredients[i]);
        strncat(ingredientsLine, ingredientId, size);
        if (i!=pizza.ingredientsSize-1) {
            strncat(ingredientsLine, ",", size);
        }
    }

    fprintf(f, "%d;%.2f;%s;%d;%s\n", index.pizzaId, pizza.price, pizza.flavor, pizza.ingredientsSize,ingredientsLine);

    fclose(f);
}

void savePizzas(Pizza* pizzas, int count) {
    FILE *f = fopen(PIZZA_FILE_NAME, "w");
    if (f == NULL) {
        perror("Error opening file");
        exit(1);
    }

    for (int i = 0; i < count; i++) {
        char ingredientsLine[MAX_INGREDIENTS_LINE_LENGTH] = "";
        for(int j=0; j<pizzas[i].ingredientsSize; j++){
            int size = MAX_INGREDIENTS_LINE_LENGTH - strlen(ingredientsLine) - 1;
            char ingredientId[2];
            snprintf(ingredientId, sizeof(ingredientId), "%d", pizzas[i].ingredients[j]);
            strncat(ingredientsLine, ingredientId, size);
            if (i!=pizzas[i].ingredientsSize-1) {
                strncat(ingredientsLine, ",", size);
            }
        }
        fprintf(f, "%d;%.2f;%s;%d;%s\n", pizzas[i].id, pizzas[i].price, pizzas[i].flavor, pizzas[i].ingredientsSize,ingredientsLine);
    }

    fclose(f);
}

void deletePizzaByFlavor(char flavor[]){
    int count;
    Pizza *pizzas = getAllPizzas(&count);
    
    int found = 0;
    int newCount = 0;
    
    for (int i = 0; i < count; i++) {
        if (strcmp(pizzas[i].flavor, flavor) == 0) {
            found = 1;
        } else {
            pizzas[newCount] = pizzas[i];
            newCount++;
        }
    }

    if (found) {
        printf("Pizza '%s' excluído com sucesso!\n", flavor);
        savePizzas(pizzas, newCount);
    } else {
        printf("Pizza '%s' não encontrado!\n", flavor);
    }

    free(pizzas);
}

// void deletePizzaById(int id) {

// }
// void updatePizza(Pizza pizza) {

// }
// Pizza getPizzaById(int id) {

// }
// int getLastPizzaId(){

// }
// Pizza* searchPizzaByFlavor(char flavor[]){

// }

int getNumberOfPizzas() {
    return countItemsOnAFile(PIZZA_FILE_NAME);
}

