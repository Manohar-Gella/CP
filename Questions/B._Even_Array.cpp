#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--)
    {
       int n;
       cin >> n;
       int arr[n];
       int ie = 0, io = 0, ee = 0, eo = 0, moves = 0; 
       for(int i = 0; i<n; i++){
            cin >> arr[i];
       }
 
       for(int j = 0; j<n; j++){
            if(j % 2 == 0){
                ie++;
            }else{
                io ++;
            }
 
            if(arr[j] % 2 == 0){
                ee++;
            }else{
                eo++;
            }
       }
 
       if(ie != ee && io != eo){
             cout << -1 << '\n';
             continue;
       }
 
       for(int k = 0; k<n; k++){
            if(k%2 != arr[k]%2){
                moves++;
            }
       }
 
       cout << moves/2 << '\n';
    }
    
    return 0;
}