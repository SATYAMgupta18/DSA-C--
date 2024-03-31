#include <iostream>
using namespace std;
#define min(a,b) (((a)<(b)) ? a:b)
int b=7;
//global var isnt a good practice bcoz any funcion can change its value
void a(int &i){
       cout<<i<<endl;
       b++;
   }
int main() {
   int f=6;
   a(f);
   cout<<b<<endl;

    return 0;
}