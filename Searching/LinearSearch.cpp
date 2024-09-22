#include "stdc++.h"

using namespace std ;

int main()
{
    int n , times=0 , firstIndex=-1 ;
    cout <<"Enter number of elements to input in array :-";
    cin >> n ;

    vector <int> vec(n) ;

    cout << "Enter array elements :- "<<endl;
    for(int i=0 ;i<n;i++)
    {
        cin >> vec[i] ;
    }

    int target ;

    cout <<"Enter target element to find in array :-";
    cin >> target ;

    for(int i=0 ;i<n;i++)
    {
        if(vec[i]==target)
        {
           if(firstIndex==-1)
           {
            firstIndex = i ;
           }
           times++ ;
        }
    }

    if(times==0)
    {
        cout <<"Element is not present in our array " ;
    }else{
        cout <<"The target element "<< target << " is first found at index " << firstIndex <<endl ;
        cout <<"The target element "<< target << " is found " << times <<" times in our array " ;

    }




}