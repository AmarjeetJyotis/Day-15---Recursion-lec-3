#include<iostream>
using namespace std;

void printSubsequence(string &str, string output, int i){
    // Base condition
    if(i>=str.length()){
        cout<<output<<endl;
        return;
    }

    // exclude condition
    printSubsequence(str, output, i+1);

    // Include codition
    output.push_back(str[i]);
    printSubsequence(str, output, i+1);
}
int main(){
    string str="abc";
    string output="";
    int i=0;
    printSubsequence(str, output, i);
return 0;
}