#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector <string> v(N);
    vector <int> v_num(N);
    for(int i=0; i<N; i++) {
        cin >> v[i];
        v_num[i] = v[i].length();
    }
    
    for(int i=0; i<N; i++) {
        cout << v[i].length() << " ";
    }
    cout << "\n";    
    sort(v_num.begin(), v_num.end());
    for(int i=0; i<N; i++) {
        cout << v_num[i];
    }
}
//구현 순서
//길이가 짧은거부터 출력 구현
//길이가 같으면 사전순 구현(string sort)
//중복되면 하나만 출력 구현
//v -> 문자열 저장
//v_num -> 문자열 길이 저장
