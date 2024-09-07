#include "stdc++.h"

using namespace std ;


void Selection_Sort(vector <int>& vec , int n){


for(int i=0 ;i<=n-2;i++){
    int mini = i ;
    for(int j=i ;j<=n-1;j++){
        if(vec[j]<vec[mini]){
            mini = j ;
        }
    }
    int temp = vec[mini];
    vec[mini] = vec[i];
    vec[i] = temp ;
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

     Selection_Sort(vec,n);

    for(auto it : vec){
        cout << it << " " ;
    }

   
}