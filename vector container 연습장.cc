#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector <int> v(10, 0);
    
    cout << "초기 배열 나열 : ";
    for(int i=0; i<v.size(); i++) {
        v[i] += i;
        cout << v[i] << " ";
    }
    cout << "\n";
    cout << "초기 사이즈 : " << v.size() << "\n";
    cout << "초기 원소 조사 : " << v.back() << "\n";
    
    
    
    
    
    cout << "이후 배열 나열 : ";
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "\n";
    cout << "이후 사이즈 : " << v.size() << "\n";
    cout << "이후 원소 조사 : " << v.back() << "\n";
}
