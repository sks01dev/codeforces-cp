#include <iostream>
using namespace std;
 
int main(){
    string s;
    cin >> s;
    
    string res = "";
    
    for(int i=0;i<s.size();i++){
        char ch = s[i];
        int a = ch - '0';
        
        if(i==0 && (a==9)){
            res += '0'+a;
            continue;  
        }
        
        if(a>=5){
            res += '0' + (9-a);
        }
        
        else{
            res += ch;
        }
    }
    
    cout << res << endl;
    
    return 0;
}
