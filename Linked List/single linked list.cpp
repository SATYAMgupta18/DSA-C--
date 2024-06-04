// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        }
    }
};
void insertAtHead(Node* &head,int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node* &tail,int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail=temp;
}
void insertAtPosition(Node* &head,Node* &tail,int pos,int data){
    if(pos==1){
        insertAtHead(head,data);
        return;
    }
    Node* temp = head;
    int i=1;
    while(i<pos-1){
        temp = temp->next;
        i++;
    }
    if(temp->next == NULL){
        insertAtTail(tail,data);
        return;
    }
    Node* ins = new Node(data);
    ins->next = temp->next;
    temp->next = ins;
}
void deleteNode(int position,Node* &head){
    if(position==1){
        Node* temp = head;
        head=head->next;
        temp->next=NULL;
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
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
}
}
void print(Node* head){
    if(head==NULL){
        cout<<"List is Empty"<<endl;
        return;
    }
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main() {
    Node* nod = new Node(10);
    Node* head = nod;
    Node* tail = nod;
    insertAtTail(tail,20);
    insertAtHead(head,5);
    insertAtPosition(head,tail,4,25);
    deleteNode(2,head);
    print(head);
    return 0;
}