#include<iostream>
using namespace std;
int main(){
    int arr[5];
        cout<<"Enter five integers:"<<endl;
        for (int  i=0;i<5;i++){
            cin>>arr[i];
        
    }
    int bestbuy=arr[0],maxprofit=0;
    for(int i=0;i<6;i++){
        if (arr[i]>bestbuy){
       maxprofit=max(maxprofit,arr[i]-bestbuy);
    }
    bestbuy=min(bestbuy,arr[i]);
    }
    cout<<"Maxprofit from the stock from your entered stock data is="<<maxprofit;
}