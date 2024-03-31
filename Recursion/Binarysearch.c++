// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
bool binarySearch(int arr[],int s,int e,int key){
    if(s>e){
        return false;
    }
    int mid = s + ((e-s)/2);
    if(arr[mid]==key){
        return true;
    }
    
    if(key>arr[mid]){
       return binarySearch(arr,mid+1,e,key);
    }
    else{
       return binarySearch(arr,s,mid-1,key);
    }
}
int main() {
    int arr[6]={12,4,5,6,7,100};
    int key=5;
    int size=6;
    int s=0;
    int e=size-1;
    bool f = binarySearch(arr,s,e,key);
    cout<<f;
    

    return 0;
}