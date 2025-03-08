#include<iostream>
#include<vector>
using namespace std;

bool checkSorted(vector<int> &arr, int n, int i){
    if(i==n-1){
        return true;
    }
    //  1 case solve kareyngey 
    if(arr[i+1]<arr[i]){
        return false;
    }

    return checkSorted(arr, n, i+1);
}
int main(){
    vector<int> arr{2, 6, 7,  9, 12, 11};
    int n=arr.size();
    int i=0;
    bool isSorted=checkSorted(arr, n, i);
    if(isSorted){
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is NOT sorted"<<endl;
    }
return 0;
}