#include<iostream>
using namespace std;
int main(){
    int arr[]={2,5,6,3,3,6,2};
    int n = 7;
    int ans =0;
    for(int i = 0; i <n ; i++){
        ans = ans^ arr[i];
        
    }
    cout<<"final " << ans;
}