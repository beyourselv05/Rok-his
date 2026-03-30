#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector <char> str;
    
    for(int i=0; i<n; i++) {
        string alp;
        cin >> alp;
        
        for(int j=0; j<alp.length(); j++) {
            if(alp[j] != alp[j+1]) {
                str.push_back(alp[j]);
            }
        }
        
        for(int i=0; i<str.size(); i++) {
            cout << str[i];
        }
        cout << '\n';
    }
}
