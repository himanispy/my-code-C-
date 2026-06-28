#include <iostream>
using namespace std;
// int cnt=0;
int count (int n){
    int cnt=0;
    while(n>0){
        cnt=cnt+1;
       n = n / 10;   // Remove last digit
    }
    return cnt;

}

int main(){
    int n;
    cin>>n;
    cout<<count(n);
    return 0;
}
