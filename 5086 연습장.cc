#include <iostream>

using namespace std;

int main() {
    int value;
    int snd_cnt=0; thd_cnt=0;
    cin >> value;
    
    while(value>0 && value%2==0) {
        value /= 2;
        snd_cnt++;
    }
    
    while(value>0 && value%3==0) {
        value /= 3;
        thd_cnt++;
    }
    
    
    
    if(value%2 != 0 && value%3 != 0) cout << value; //서로소 case
}
