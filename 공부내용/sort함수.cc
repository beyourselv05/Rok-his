#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(int a, int b) {
    return a > b;           
}

int main() {
    vector <int> v = {9,3,5,4,1,10,8,6,7,2};
    
    sort(v.begin(), v.end(), cmp);
    
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << ' ';
    }
}

//sort 함수에서 세번째 매개변수에서 cmp함수 호출.
//cmp 함수에서는 사용자 지정 조건을 추가할 수 있음.
//예를 들어서 오름차순으로 하려면 a<b로 조건, 내림차순이면 a>b로 조건.
//cmp에서 불리언 타입이 false여야 교체함.
// + 중복된거 빼내고 찾기 - > unique, erase 메서드 사용.
// + 데이터타입이 예를들어 키, 이름이고 조건을 새로 만들고싶다면 pair 사용.
