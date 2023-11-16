#include <stdio.h>
#include <stdlib.h>
struct  node {
    int data;
    struct node* next;
};
int main(){
    /*head*/
    struct node* head;
    head = malloc (sizeof(struct node ));
    head->data = 2;
    /*second*/
    struct node* second ;
    second = malloc (sizeof(struct node));
    second -> data=4;
    second -> next = NULL;
    head ->next = second;
    /*third*/
    struct node* third;
    third =malloc (sizeof(struct node));
    third -> data=6;
    third -> next =NULL;
    second ->next = third;
    /*fourth*/
    struct node * fourth;
    fourth = malloc (sizeof(struct node));
    fourth -> data=8;
    fourth -> next = NULL;
    third ->next = fourth;

    /* current */
    struct node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    return 0;   
}
