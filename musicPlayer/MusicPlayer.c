#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next;
  struct node *prev;
};

struct node *createNode(int data) {
  struct node *newNode = (struct node *)(malloc(sizeof(struct node)));
  newNode->next = newNode->prev = NULL;
  newNode->data = data;

  return newNode;
}

struct node *addSongs(struct node *head, int data) {
  if (head == NULL) {
    return createNode(data);
  } else {
    struct node *temp = head;
    struct node *newNode = createNode(data);
    while (temp->next != NULL) {
      temp = temp->next;
    }
    newNode->prev = temp;
    temp->next = newNode;
  }
  return head;
}

struct node *deleteLastSong(struct node *head) {
  if (head == NULL) {
    printf("The playlist is empty");
    return head;
  } else {
    struct node *temp = head;
    while (temp->next->next) {
      temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
  }
  return head;
}

struct node *deleteSong(struct node *head, struct node *current) {
  int x;
  printf("\nWhich song do you want to delete?\n");
  scanf("%d", &x);

  if (head) {
    struct node *temp = head;
    while (temp->data != x && temp->next) {
      temp = temp->next;
    }
    if (temp->data != x) {
      printf("\nOops.Song not found in playlist\n");
      return head;
    } else {
      struct node *ptr = temp;
      if (temp == head) {
        if (!head->next) {
          current = head;
          return head;
        } else {
          head = head->next;
          head->prev = NULL;
        }
      } else if (!temp->next) {
        temp->prev->next = NULL;
      } else {
        temp->next->prev = temp->prev;
        temp->prev->next = temp->next;
      }
      if (current->data == x) {
        current = temp->prev;
      }
      free(ptr);
    }
  }
  printf("\nsong `%d` has been removed from the playlist successfully\n", x);
  return head;
}

struct node *playNextSong(struct node *current, struct node *head) {
  if (!current) {
    return head;
  } else {
    if (current->next == NULL) {
      printf("\nEnd of playlist reached.\n");
      return current;
    } else {
      return current->next;
    }
  }
}

struct node *playPreviousSong(struct node *current) {
  if (current->prev == NULL) {
    printf("\nThis is the beginning of the playlist\n");
    return current;
  }
  return current->prev;
}

void viewData(struct node *head) {
  if (head) {
    printf("\nSongs in the playlist\n");
    while (head) {
      printf("%d ", head->data);
      head = head->next;
    }
  }
}

int main(void) {
  struct node *head = NULL;
  struct node *currentSong = NULL;
  struct node *rear = NULL;

  head = addSongs(head, 1);
  head = addSongs(head, 2);
  head = addSongs(head, 3);
  head = addSongs(head, 4);

  currentSong = playNextSong(currentSong, head);
  currentSong = playNextSong(currentSong, head);

  head = deleteSong(head, currentSong);

  printf("\nhead : %d\n", head->data);
  printf("Current song : %d\n", currentSong->data);
  viewData(head);
}