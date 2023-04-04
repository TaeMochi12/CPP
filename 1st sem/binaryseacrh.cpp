#include<iostream>
#include<vector>
#include<algorithm> 

using namespace std ;

int main(){
    int arr[] = {11, 22, 33, 44, 55, 66, 77, 88, 99};

    int size = sizeof(arr)/sizeof(int) ;

    int start  = 0 ;
    int end =  size - 1 ;
    int ans ;
    cin >>ans ;
    while(start<= end){

        // keep this inside so that there would be no need to update it regularly
        int mid =  start+(end-start)/2  ;

        if(arr[mid] == ans){
            cout<<"Ans found at index " << mid << endl ;
            break ;
        }
        else if(arr[mid] > ans){
            end  =  mid -1 ;
        }
        else {
            start  = mid  +1 ; 
        }
    }
    return 0;
}