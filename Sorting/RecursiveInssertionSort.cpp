#include "stdc++.h"

using namespace std ;

void RIS(vector<int> & arr , int i,int n){
      if (i == n) return;

    int j = i;
    while (j > 0 && arr[j - 1] > arr[j]) {
        int temp = arr[j - 1];
        arr[j - 1] = arr[j];
        arr[j] = temp;
        j--;
    }

    RIS(arr, i + 1, n);
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

   RIS(arr,0,n) ;

   for(auto it : arr){
    cout << it << " " ;
   }
}