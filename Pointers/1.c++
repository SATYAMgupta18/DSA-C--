#include <iostream>

using namespace std;

int main() {
    int arr[10]={23,45,6,7,8};
    cout<<"Address of first index value : "<< arr << endl;
    cout<<"Address of first index value : "<<&arr[0]<<endl;
    cout<<*(arr+2)<<endl;
    cout<<"  "<<endl;
    int *p = &arr[0];
    cout<<sizeof(&p)<<endl;
    cout<<sizeof(p)<<endl;
    cout<<sizeof(*p)<<endl;
    cout<<sizeof(arr)<<endl;
    return 0;
}