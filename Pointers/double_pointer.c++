#include <iostream>
using namespace std;
void update(int **ptr2){
    // ptr2 = ptr2 + 1; koki change nahi hoga
    
     // *ptr2 = *ptr2 + 1; one change
    
    // **ptr2 = **ptr2 + 1; i value change ho gayi
}
int main() {
    int i=5;
    int *ptr = &i;
    int **ptr2 = &ptr;
    cout<<" "<<endl;
    cout<<"Printing ptr "<<ptr<<endl;
    cout<<"Address of ptr "<< &ptr<<endl;
    cout<<ptr2<<endl;
    cout<<*ptr2<<endl;
    cout<<" "<<endl;
    cout<<"Value of i"<<endl;
    cout<<i<<endl;
    cout<<*ptr<<endl;
    cout<<**ptr2<<endl;
    cout<<"adress of i"<<endl;
    cout<< &i<<endl;
    cout<<ptr<<endl;
    cout<<*ptr2<<endl;
    cout<<"    "<<endl;
    cout<<"before"<<i<<endl;
    cout<<"before"<<ptr<<endl;
    cout<<"before"<<ptr2<<endl;
    cout<<" "<<endl;
    update(ptr2);
    cout<<"after"<<i<<endl;
    cout<<"after"<<ptr<<endl;
    cout<<"after"<<ptr2<<endl;

    return 0;
}