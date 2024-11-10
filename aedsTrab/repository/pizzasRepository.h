#ifndef PIZZAREPOSITORY_H
#define PIZZAREPOSITORY_H

#include "indexRepository.h"
#include "ingredientsRepository.h"

#define PIZZA_FILE_NAME "./db/pizza.csv"
#define MAX_INGREDIENTS_LINE_LENGTH 140
#define INGREDIENTS_SIZE 50

typedef struct Pizza{
    int id;
    float price;
    char flavor[NAME_SIZE];
    int ingredients[INGREDIENTS_SIZE];
    int ingredientsSize;
} Pizza;

Pizza* getAllPizzas(int* count);
void savePizza(Pizza pizza);
void deletePizzaByFlavor(char flavor[]);
// void updatePizza(Pizza pizza);
int getNumberOfPizzas();

#endif