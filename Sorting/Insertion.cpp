#include "stdc++.h"

using namespace std ;


void Insertion_Sort(vector <int>& vec , int n){


for(int i=0 ;i<=n-1;i++){
    int j = i ;
    while(j>0 && vec[j-1] >vec[j]){
        swap(vec[j-1],vec[j]);
        j-- ;
    }
}


}

int main(){
    vector <int> vec ;
    int n ;
    cin >> n ;
    for(int i=0 ;i<n;i++){
        int nums ;
        cin >> nums ;
        vec.emplace_back(nums);
    }

     Insertion_Sort(vec,n);

    for(auto it : vec){
        cout << it << " " ;
    }

   
}