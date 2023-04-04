#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
int binary(vector<int>&vec, int target)
{
int size= vec.size();
    int start=0;
    int end=size-1;
    
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(vec[mid]==target)
       {
        return vec[mid];
       }
       
        else if(vec[mid]>target)
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        

        

    }
    return -1;
}
int main() {
    vector<int> him={12,9,4,11,14,24};
    sort(him.begin(),him.end());
    int h=binary(him,12);
    cout<<h<<endl;
    //sorted array={4,9,11,12,14,24}

    return 0 ;
}