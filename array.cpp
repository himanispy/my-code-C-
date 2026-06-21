#include <bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> &a,int n){
    int largest=a[0];
    int slargest=INT_MIN;
    for(int i=1; i<n; i++){
        if(a[i]>largest){
            slargest=largest;
            largest=a[i];
        }
        else if(a[i]<largest && a[i]>slargest){ 
        slargest=a[i];
    }
     }
     return slargest;
}
  int secondSmallest(vector<int> &a,int n){ 
  int smallest=a[0];
  int ssmallest=INT_MAX;
   for(int i=1; i<n;i++){
    if(a[i]<smallest){
        ssmallest=smallest;
        smallest=a[i];
    }
    else if(a[i]!= smallest && a[i]< ssmallest){
        ssmallest=a[i];
    }
}
    return ssmallest;
     }


vector<int> getSecondOrderElements(int n, vector<int> a){

    int slargest =secondLargest(a,n);
    int ssmallest =secondSmallest(a,n);

    return {slargest, ssmallest};
}
int main() {
    vector<int> a= {1, 2, 3, 4, 5};

    vector<int> ans =getSecondOrderElements(a.size(), a);

    cout<< "Second Largest: "<<ans[0] <<endl;
    cout<< "Second Smallest: "<<ans[1] <<endl;

    return 0;
}