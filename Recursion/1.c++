// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}
int power(int n){
    if(n==0){
        return 1;
    }
    return 2*power(n-1);
}
void count(int n){
    if(n==0){
        return ;
    }
    cout<<n<<" ";
    count(n-1);
}
void route(int src,int dest){
    if(src==dest){
        return ;
    }
    cout<<"We went to : "<<src<<endl;
    route(src+1,dest);
}
int recursion(int n){
    if(n==0){ return 0; }
    if(n==1){ return 1; }
    int sum = recursion(n-1) + recursion(n-2);
}
int main() {
    int src,dest;
    cin>>src;
    cin>>dest;
    // int ans = count(n);
    route(src,dest);
    // cout<<"Power of 2 is : "<<ans<<endl;

    return 0;
}