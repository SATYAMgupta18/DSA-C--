// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void func(int num,string arr[]){
    while(num>0){
        int digit = num%10;
        cout<<arr[digit]<<" ";
        num = num/10;
    }
}
void rev(int num,string arr[]){
    int newp=0;
    while(num>0){
        int digit = num%10;
        newp = newp*10 + digit;
        num = num/10;
    }
    func(newp,arr);
}
int main() {
    string arr[10] = { "zero","one","two","three","four","five","six","seven","eight","nine"};
    int num;
    cin>>num;
    rev(num,arr);

    return 0;
}