#include <iostream>
using namespace std;
 
int main(){
    int x = 0;
    int n;
    cin >> n;
    while(n){
        string s;
        cin >> s;
        
        if(s.find('+') != string::npos) x++;
        else x--;
        
        n--;
    }
    cout<<x<<endl;
    return 0;
}
