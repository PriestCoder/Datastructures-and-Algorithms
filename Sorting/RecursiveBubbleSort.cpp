#include "stdc++.h"

using namespace std ;


void RBS(vector<int> &arr,int n){
  if (n == 1) return;
    // FOR BEST CASE 
    // int didSwap = 0 ;
    for (int j = 0; j <= n - 2; j++) {
        if (arr[j] > arr[j + 1]) {
            int temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
            // didSwap = 1 ;
        }
    }
    //No swapping happens 
    //if(didSwap==0) return ;

    //Range reduced after recursion:
    RBS(arr, n - 1);
}

int main(){
   vector <int> arr ;
   int n ;
   cin >> n ;
   for(int i=0 ;i<n;i++){
    int nums ;
    cin >> nums ;
    arr.emplace_back(nums);
   }

   RBS(arr,n) ;

   for(auto it : arr){
    cout << it << " " ;
   }

}