#include <stdio.h>
/*
struct Node {
    double data;
    struct Node *next;
    struct Node *prev;
};

void addend(struct Node **head, int newdata) {
    struct Node *new_node = new Node;
    struct Node *last = *head;
    new_node->data = newdata;
    new_node->next = nullptr;
    if (*head == nullptr) {
        new_node->prev = nullptr;
        *head = new_node;
        return;
    }
    while (last->next != nullptr) {
        last = last->next;
    }
    last->next = new_node;
    new_node->prev = last;
}

void display(struct Node *head) {
    while (head != nullptr) {
        printf("%lf ", head->data);
        head = head->next;
    }
}

int main() {
    struct Node *head = nullptr;
    printf("Enter how many numbers you want to write (n>2):\n");
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        double curr;
        scanf("%lf", &curr);
        addend(&head, curr);
    }
    printf("Entered numbers:\n");
    display(head);
    printf("Reversed entered numbers:\n");
    display(head);
    printf("\n");
    struct Node *last = head;
    while (last->next != nullptr) {
        last = last->next;
    }
    while (head != nullptr) {
        printf("%lf + %lf = %lf\n", head->data, last->data, head->data + last->data);
        head = head->next;
        last = last->prev;
    }
    return 0;
}
*/