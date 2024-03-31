#include <iostream>
using namespace std;
int sum(int arr[],int size){
    int su=0;
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    else{
        su = arr[0] + sum(arr+1,size-1);
        return su;
    }
}
int main() {
    int arr[5]={1,4};
    int size=5;
    int su=sum(arr,5);
    cout<<su;
    return 0;
}