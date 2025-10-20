#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char data[4];
    struct Node* link;
} Node;

typedef struct {
    Node* head;
} listNodeHead;

listNodeHead* createLinkedListHead() {
    listNodeHead* L;
    L = (listNodeHead*)malloc(sizeof(listNodeHead));
    L->head = NULL;

    return L;
}

void freeLinkedListHead(listNodeHead* L) {
    Node* n;
    while (L->head != NULL) {
        n->link;
        L->head = L->head->link;
        free(n);
        n = NULL;
    }
}

void printList(listNodeHead* L) {
    Node* p;
    printf("L = (");
    p = L->head;
    while (p != NULL) {
        printf("%s", p->data);
        p = p->link;
        if (p != NULL) {
            printf(", ");
        }
    }
    printf(")\n");
}

Node* searchNode(listNodeHead* L, char* x) {
    Node* tmp = L->head;
    while (tmp->link != NULL)
    {
        if (strcmp(tmp->data, x) == 0) {
            return tmp;
        }
        else tmp = tmp->link;
    }
    return tmp;
}

void insertFirstNode(listNodeHead* L, char* x) {
    Node *newNode;
    newNode = (Node*)malloc(sizeof(Node));
    strcpy(newNode->data, x);

    newNode->link = L->head;
    L->head = newNode;
}

void insertFinalNode(listNodeHead* L, char* x) {
    Node *newNode;
    newNode = (Node*)malloc(sizeof(Node));
    strcpy(newNode->data, x);
    newNode->link = NULL;

    if (L->head == NULL) {
        L->head = newNode;
        return;
    }

    Node *tmp;
    tmp = L->head;
    while (tmp->link != NULL) {
        tmp = tmp->link;
    }

    tmp->link = newNode;
}

void insertMiddleNode(listNodeHead* L, Node* prev, char* x) {
    Node *newNode;
    newNode = (Node*)malloc(sizeof(Node));
    strcpy(newNode->data, x);
    
    if (L->head == NULL) {
        newNode->link = NULL;
        L->head = newNode;
    } else if (prev == NULL) {
        newNode->link = L->head;
        L->head = newNode;
    } else {
        newNode->link = prev->link;
        prev->link = newNode;
    }
}

void deleteNode(listNodeHead* L, Node* t) {
    Node *tmp;

    if (t == NULL) return;
    if (L->head == NULL) return;
    if (L->head->link == NULL) {
        free(L->head);
        L->head = NULL;
        return;
    }
    else {
        tmp = L->head;
        while (tmp != NULL) {
            if (tmp->link == NULL) break;
            else if (tmp->link == t) {
                tmp->link = t->link;
            }
            tmp = tmp->link;
        }
        free(t);
    }
}

void reverse(listNodeHead* L) {
    Node* t1;
    Node* t2;
    Node* tmp;

    t1 = L->head;
    t2 = NULL;
    tmp = NULL;

    while (t1 != NULL) {
        tmp = t2;
        t2 = t1;
        t1 = t1->link;
        t2->link = tmp;
    }

    L->head = t2;
}

int main(int argc, char const *argv[])
{
    listNodeHead* L = createLinkedListHead();
    printList(L);

    insertFirstNode(L, "a");
    printList(L);

    insertFinalNode(L, "d");
    printList(L);

    insertMiddleNode(L, searchNode(L, "a"), "b");
    printList(L);

    insertMiddleNode(L, searchNode(L, "b"), "c");
    printList(L);

    // deleteNode(L, searchNode(L, "b"));
    // printList(L);

    reverse(L);
    printList(L);

    return 0;
}
