#include <iostream>
using namespace std;
class node {
    public:
    int n;
    node* next;
    // constructor
    node(int val){
        n = val;
        next = NULL;
    }
};
void insertAtTail(node* &head, int val){
    // PUSH stack and Enqueue
    node* n= new node(val);
    if (head==NULL){
        head=n;
        return;
    }
    node* temp = head;
    while(temp -> next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void insertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next=head;
    head=n;
}
void display(node* head){
    node* temp= head;
    while(temp->next!=NULL){
        cout << temp->n << "->";
        temp=temp->next;
    }
    cout << temp->n << endl;
}
bool search(node* head, int key){
    node* temp = head;
    while(temp->next!=NULL){
        if(temp->n==key){
            return 0;
        }
        temp= temp->next;
    }
    return 1;
}
void deleteAtHead(node* &head){
    // deQueue
    node* toDelete=head;
    head = head->next;
    delete toDelete;
}
void deleteAtTail(node* &head){
    // POP stack
    node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    node* toDelete=temp->next;
    temp->next=NULL;
    delete toDelete;
}
void deleteNode(node* &head, int val){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteAtHead(head);
        return;
    }
    node* temp = head;
    while(temp->next->n!=val){
        temp=temp->next;
    }
    node* toDelete = temp->next;
    temp->next=temp->next->next;
    delete toDelete;
}
//
int main(){
    node* head=NULL;
    insertAtHead(head,5);
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    
    // display(head);
    // deleteAtHead(head);
    display(head);
    deleteAtTail(head);
    display(head);
    return 0;
}
