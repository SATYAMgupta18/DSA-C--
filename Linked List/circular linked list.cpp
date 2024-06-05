#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    
    Node(int d){
        this->data = d;
        this->next = NULL;
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
void insertNode(Node* &tail,int element,int d){
    if(tail==NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        Node* curr = tail;
        while(curr->data != element){
            curr = curr->next;
        }
        Node* newNode = new Node(d);
        newNode->next = curr->next;
        curr->next = newNode;
    }
}
void deleteNode(Node* &tail,int value){
    if(tail == NULL){
        cout<<"List is Empty"<<endl;
        return;
    }
    else{
        Node* prev =tail;
        Node* curr = prev->next;
        while(curr->data != value){
            prev = curr;
            curr = curr->next;
            }
            prev->next = curr->next;
            if(curr==prev){
                tail = NULL;
            }
            else if(tail == curr){
                tail = prev;
            }
            curr->next = NULL;
            delete curr;
    }
}
void print(Node* tail){
    Node* temp = tail;
    if(tail == NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }while(tail != temp);
    cout<<endl;
}
int main(){
    Node* tail = NULL;
    insertNode(tail,10,5);
    print(tail);
    insertNode(tail,5,15);
    print(tail);
    insertNode(tail,15,20);
    print(tail);
    insertNode(tail,5,7);
    print(tail);
    deleteNode(tail,5);
    print(tail);
}