#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class student {
public:
    string name;
    int score;
    student(string name, int score) {
        this->name = name;
        this->score = score;
    }
    //정렬 기준은 낮은점수 순.
    bool operator <(student &student) {
        return this->score < student.score;
    }
};

int main() {
    student students[] = {
        student("김 동 하 ", 90),
        student("김 보 겸 ", 93),
        student("박 정 원 ", 97),
        student("최 민 식 ", 87),
        student("강 동 하 ", 92)
    };
    sort(students, students + 5);
    
    for(int i=0; i<5; i++) {
        cout << students[i].name << '\n';
    }
}

//위 코드는 이름, 점수를 클래스에 만들어두고 점수 낮은 순서대로 이름을 출력.

//sort 함수에서 세번째 매개변수에서 cmp함수 호출.
//cmp 함수에서는 사용자 지정 조건을 추가할 수 있음.
//예를 들어서 오름차순으로 하려면 a<b로 조건, 내림차순이면 a>b로 조건.
//cmp에서 불리언 타입이 false여야 교체함.

// + 중복된거 빼내고 찾기 - > unique, erase 메서드 사용.
// + 데이터타입이 예를들어 키, 이름이고 조건을 새로 만들고싶다면 pair 사용.
