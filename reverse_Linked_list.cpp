#include<bits/stdc++.h>
 
using namespace std;
 
struct node {
    int data;
    struct node *next;
};
 
void push(struct node **head_ref, int data) {
    struct node *node;
    node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->next = (*head_ref);
    (*head_ref) = node;
}
 
void reverse(struct node **head_ref) {
    struct node *temp = NULL;
    struct node *prev = NULL;
    struct node *current = (*head_ref);
    while(current != NULL) {
        temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
    }
    (*head_ref) = prev;
}
 
void printnodes(struct node *head) {
    while(head != NULL) {
        cout<<head->data<<" ";
        head = head->next;
    }
}
 
int main() {
    struct node *head = NULL;
    push(&head, 0);
    push(&head, 1);
    push(&head, 8);
    push(&head, 0);
    push(&head, 4);
    push(&head, 10);
    cout << "Linked List Before Reversing" << endl;
    printnodes(head);
    reverse(&head);
    cout << endl;
    cout << "Linked List After Reversing"<<endl;
    printnodes(head);
    return 0;
}
