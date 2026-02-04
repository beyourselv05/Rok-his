#include <iostream>
#include <vector>
#include <algorithm>
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
    cout << "초기 원소 조사 : " << v.back() << "\n\n";
    
    
    
    v.insert(v.begin() + 3, 67);    //3번째 이후자리에 67삽입
    reverse(v.begin(), v.end());    //거꾸리
    swap(v[0], v.back());           //첫번째 요소랑 마지막요소 바꾸기
    v.push_back(13);                //이후 마지막에 13삽입
    v.push_back(14);
    v.pop_back();
    
    
    cout << "이후 배열 나열 : ";
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "\n";
    cout << "이후 사이즈 : " << v.size() << "\n";
    cout << "이후 원소 조사 : " << v.back() << "\n";
}
