// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    
    Node(int d){
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
    
    ~Node(){
        int val = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory Freed "<<val<<endl;
    }
};
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int getLength(Node* head){
    Node* temp = head;
    int l=0;
    while(temp!=NULL){
        l++;
        temp = temp->next;
    }
    return l;
}
void insertAtHead(Node* &head,Node* &tail,int d){
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
}
void insertAtTail(Node* &tail,Node* &head,int d){
    if(tail == NULL){
       Node* temp = new Node(d);
       tail = temp;
       head = temp;
    }
    else{
    Node* temp = new Node(d);
    temp->prev = tail;
    tail->next = temp;
    tail = temp;
}
}
void insertAtPosition(Node* &head,Node* &tail,int position,int d){
    if(position==1){
        insertAtHead(head,tail,d);
        return;
    }
    int cnt=1;
    Node* temp = head;
    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }
    if(temp->next == NULL){
        insertAtTail(tail,head,d);
        return;
    }
    Node* ins = new Node(d);
    ins->next = temp->next;
    temp->next->prev = ins;
    temp->next = ins;
    ins->prev = temp;
    
}
void deleteNode(int position,Node* &head,Node* &tail){
    if(head==NULL){
        return;
    }
    if(position==1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else{
    Node* curr = head;
    Node* prev = NULL;
    int cnt=1;
    while(cnt<position){
        prev=curr;
        curr=curr->next;
        cnt++;
    }
    if(curr->next == NULL){
        tail = prev;
        tail->next = NULL;
    }
    else{
        prev->next = curr->next;
        curr->next->prev = prev;
    }
    curr->prev = NULL;
    curr->next = NULL;
    delete curr;
}
}
int main() {
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    cout<<getLength(head)<<endl;
    insertAtHead(head,tail,5);
    insertAtHead(head,tail,4);
    insertAtHead(head,tail,3);
    print(head);
    insertAtTail(tail,head,15);
    insertAtPosition(head,tail,6,7);
    deleteNode(6,head,tail);
    cout<<"Head->"<<head->data<<endl;
    cout<<"Tail->"<<tail->data<<endl;
    print(head);

    return 0;
}