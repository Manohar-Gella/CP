#include <bits/stdc++.h>
using namespace std;
// manohargella
int main(){
    string s;
    cin >> s;
    
    int len = s.length();
    int n = 0;
 
    while(n<len){
        if(s[n] == '.'){
        cout << "0";
        }else if(s[n] == '-' && s[n+1] == '.'){
            cout << "1";
            n++;
        }else if(s[n] == '-' && s[n+1] == '-'){
            cout << "2";
            n++;
        }
        n++;
    }
    
    return 0;
}
