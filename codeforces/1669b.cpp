#include<bits/stdc++.h>
using namespace std;

void rahi(){
    
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; ++i) 
        cin >> arr[i];
 
        sort(arr, arr + n);
        int temp = arr[0];
        int cnt = 1;
        int flag = 0;
        for (int i = 1; i < n; ++i) {
            if (arr[i] == temp) {
                cnt++;
                if (cnt == 3) {
                    flag = 1;
                    break;
                }
            }
            else {
                temp = arr[i];
                cnt = 1;
            }
 
        }
        if (flag == 0) 
           cout << "-1" << "\n";
        else  
           cout << temp << "\n";
}
 
 
 
 

int main(){
    int t;
    cin>>t;
    while(t--){
        rahi();
    }
    return 0;
}