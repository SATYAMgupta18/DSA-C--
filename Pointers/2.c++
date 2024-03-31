
#include <iostream>

using namespace std;
int main() {
    int temp[10];
    char ch[6] = "abcde";
    cout<<temp<<endl;
    cout<<ch<<endl;
    cout<<"Diff. Implementations"<<endl;
    int *p = &temp[0];
    char *c = &ch[0];
    cout<<p<<endl;
    cout<<c<<endl;
    cout<<"Watch Out"<<endl;
    char tem = 'z';
    char *pc = &tem;
    cout<<pc<<endl;

    return 0;
}