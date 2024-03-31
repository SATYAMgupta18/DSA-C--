// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
//pass by reference again -> keep in mind
void reverseString(string &str,int i,int j){
    if(i>j){
        return;
    }
    swap(str[i],str[j]);
    reverseString(str,i+1,j-1);
}
int main() {
    string str = "ABCDE";
    reverseString(str,0,4);
    cout<<str;

    return 0;
}