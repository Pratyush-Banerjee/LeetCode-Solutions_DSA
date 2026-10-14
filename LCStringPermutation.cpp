#include <iostream>
#include<string>
#include<vector>
using namespace std;
void getperms(string str, int idx){
    if (idx==str.size()){
        cout<<str<<endl;
        return;
    }
    for(int i=idx; i<str.size(); i++){
        swap(str[i], str[idx]);
        getperms(str, idx+1);
        swap(str[i], str[idx]);
}
}
int factorial (int n){
    if(n==0 or n==1) return 1;
    return n*factorial(n-1);
}


int main(){
    string str="abc";//the string can be modified
    cout<<"The all permutations of the string are="<<endl;
   getperms(str, 0);
   
  int  n=str.size();
   cout<<"The number of total permutations is/are="<<factorial (n)<<endl;
}