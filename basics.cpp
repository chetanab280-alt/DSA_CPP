#include<bits/stdc++.h>
using namespace std;

// void doSomething(int &num){
//     num += 5;
//     cout<<num<<endl;
//     num += 5;
//     cout<<num<<endl;
// }
// int main(){
//      int num = 5;
//      doSomething(num);
//      cout<<num;
//      doSomething(num);
//      return 0;
// }


class Solution{
public:
    void reverse(int arr[],int n){
        for(int i = n-1; i >=0; i--){
            cout<<arr[i]<<" ";
        }
    }
};

int main(){
        int n;
        cout<<"enter size ";
        cin>>n;
        cout<<"enter elements";
        int arr[n];
        for(int i= 0; i<n; i++ ){
            cin>>arr[i];
        }

        Solution s;

        s.reverse(arr,n);

        cout << "Learning DSA with C++";

        return 0;
    }