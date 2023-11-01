#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct car {
  char carName[30];
  int id;
  int cost;
  struct car *next;
};

// Creating a node
struct car *createNode(char carName[30], int id, int cost) {
  struct car *newCar = (struct car *)(malloc(sizeof(struct car)));
  strcpy(newCar->carName, carName);
  newCar->next = NULL;
  newCar->cost = cost;
  newCar->id = id;

  return newCar;
}

struct car *newCar(struct car *front, char carName[30], int id, int cost) {
  if (!front) {
    return createNode(carName, id, cost);
  } else {
    struct car *ptr = front;
    while (ptr->next) {
      ptr = ptr->next;
    }
    ptr->next = createNode(carName, id, cost);
  }
  return front;
}

struct car *carOver(struct car *front) {
  if (!front) {
    printf("\nNo more cars to wash\n");
    return front;
  }
  struct car *temp = front;
  front = front->next;
  free(temp);
  return front;
}

void viewCars(struct car *front) {
  if (!front) {
    return;
  }
  printf("%d, ", front->id);
  printf("%s, ", front->carName);
  printf("%d \n", front->cost);
  viewCars(front->next);
}

void maxCost(struct car *front) {
  if (!front) {
    printf("\nNo cars to wash\n");
    return;
  }
  int max = -1;
  struct car *ptr = front;
  while (ptr) {
    if (ptr->cost > max) {
      max = ptr->cost;
    }
    ptr = ptr->next;
  }
  while (front->cost != max) {
    front = front->next;
  }
  printf("\n--------Most Expensive Car-----------\n");
  printf("id: %d, \n", front->id);
  printf("Car name: %s, \n", front->carName);
  printf("Cost: %d\n", front->cost);
}

int main(void) {
  struct car *front = NULL;
  front = newCar(front, "car1", 1, 13000);
  front = newCar(front, "car2", 2, 20000);
  front = newCar(front, "car3", 3, 50000);
  front = newCar(front, "car4", 4, 12000);
  front = newCar(front, "car5", 5, 17000);
  front = newCar(front, "car6", 6, 10000);

  maxCost(front);

  // viewCars(front);
}
