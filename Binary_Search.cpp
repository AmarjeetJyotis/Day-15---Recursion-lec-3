#include<iostream>
#include<vector>
using namespace std;

int checkKeySearch(vector<int> &arr, int start, int end, int key){
    // Base condition
    // Key Not found
    // Case 1
    if(start>end){
        return -1;
    }

    // case 2-Key Found
    int mid=start+(end-start)/2;
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]<key){
        return checkKeySearch(arr, mid+1, end, key);
    }
    else{
        return checkKeySearch(arr, start, mid-1, key);
    }
}
int main(){
    cout<<"Size of arrays is: "<<endl;
    int n;
    cin>>n;

    cout<<"Enter your arrays: "<<endl;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter Search key: "<<endl;
    cin>>key;
    int start=0;
    int end=n-1;

    int ans=checkKeySearch(arr, start, end, key);
    cout<<"Answer is : "<<ans<<endl;
return 0;
}