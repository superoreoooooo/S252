#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char data[4];
    struct Node *link;
} Node;

typedef struct {
    Node *head;
} listNode_h;

listNode_h* createLinkedList_h(void) {
    listNode_h* L;
    L = (listNode_h*)malloc(sizeof(listNode_h));
    L->head = NULL;
    return L;
}

void freeLinkedList_h(listNode_h* L) {
    Node* p;
    while (L->head != NULL) {
        p->link;
        L->head = L->head->link;
        free(p);
        p = NULL;
    }
}

void printList(listNode_h* L) {
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

void insertFirstNode(listNode_h* L, char* x) {
    Node *newNode;
    newNode = (Node*)malloc(sizeof(Node));
    strcpy(newNode->data, x);
    newNode->link = L->head;
    L->head = newNode;
}

void insertFinalNode(listNode_h* L, char* x) {
    Node *newNode;
    newNode = (Node*)malloc(sizeof(Node));
    strcpy(newNode->data, x);

    if (L->head == NULL) {
        newNode->link = NULL;
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

void insertMiddleNode(listNode_h* L, Node* pre, char* x) {
    Node *newNode;
    newNode = (Node*)malloc(sizeof(Node));
    strcpy(newNode->data, x);

    if (L->head == NULL) {
        newNode->link = NULL;
        L->head = newNode;
    } else if (pre == NULL) {
        newNode->link = L->head;
        L->head = newNode;
    } else {
        newNode->link = pre->link;
        pre->link = newNode;
    }
}

Node* searchNode(listNode_h* L, char* x) {
    Node* tmp;
    tmp = L->head;
    while (tmp != NULL) {
        if (strcmp(tmp->data, x) == 0) return tmp;
        else tmp = tmp->link;
    }

    return tmp;
}

void deleteNode(listNode_h* L, Node* p) {
    Node* pre;
    if (L->head == NULL) return;
    if (L->head->link == NULL) {
        free(L->head);
        L->head = NULL;
        return;
    }
    else if (p == NULL) return;
    else {
        pre = L->head;
        while (pre->link != p) {
            pre = pre->link;
        }
        pre->link = p->link;
        free(p);
    }
}

void reverseNodes(listNode_h* L) {
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
    listNode_h* L =createLinkedList_h();
    printList(L);

    insertFirstNode(L, "11");
    printList(L);

    insertFinalNode(L, "66");
    printList(L);

    insertMiddleNode(L, L->head, "22");
    printList(L);
    insertMiddleNode(L, searchNode(L, "22"), "33");
    printList(L);
    insertMiddleNode(L, searchNode(L, "33"), "44");
    printList(L);
    insertMiddleNode(L, searchNode(L, "44"), "55");
    printList(L);

    Node* p = searchNode(L, "22");
    // deleteNode(L, p);
    printList(L);

    reverseNodes(L);

    printList(L);

    return 0;
}
