#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node* node1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* node2 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* node3 = (struct Node*)malloc(sizeof(struct Node));
    
    node1->data = 100;
    node1->next = node2;
    
    node2->data = 200;
    node2->next = node3;
    
    node3->data = 300;
    node3->next = NULL;
    
    struct Node* current = node1;
    printf("Linked List elements:\n");
    while(current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
    
    free(node1);
    free(node2);
    free(node3);
    
    return 0;
}
