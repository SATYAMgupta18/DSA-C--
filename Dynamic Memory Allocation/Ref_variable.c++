
#include <bits/stdc++.h>
using namespace std;
// void update_by_value(int n){
//     n++;
// }
// void update_by_ref(int &n){
//     n++;
// }
int getsum(int *arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){ sum+=arr[i]; }
    return sum;
}
int main() {
    // Reference Variable
    // int i = 5;
    // int &j = i;
    // cout<<i<<endl;
    // cout<<j<<endl;
    // j++;
    // cout<<j<<endl;
    // cout<<i<<endl;
    // int n=5;
    // update_by_ref(n);
    // cout<<n<<endl;
    int n;
    cin>>n;
    // variable size array
    int *arr = new int[n];
    for(int i=0;i<n;i++){ cin>>arr[i]; }
    int ans = getsum(arr,n);
    cout<<"Sum is: "<<ans<<endl;

    return 0;
}