#include "stdc++.h"
using namespace std ;
void Bubble_Sort(vector <int>& vec , int n){

    for(int i=n-1 ;i>=0 ;i--){
      //  int didswap = 0 ; //For best time complexity
        for(int j=0 ;j<=i-1;j++){
            if(vec[j]>vec[j+1]){
                swap(vec[j],vec[j+1]);
               // didswap = 1 ;
            }
        }
       /* if(didswap==0){
           break ;
        }
        cout << "runs\n";
        */
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

     Bubble_Sort(vec,n);

    for(auto it : vec){
        cout << it << " " ;
    }
}