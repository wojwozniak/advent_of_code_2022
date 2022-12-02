#include <iostream>
#include <fstream>

using namespace std;

// A - rock, B - paper, C - scissors
// X - rock, Y - paper, Z - scissors

void task1();
void task2();

int main() {
    task1();
    task2();
}

void task1() {
    ifstream read;
    read.open("data.txt");
    string a, b;
    int score = 0, endscore = 0;
    while(read >> a >> b) {
        score = 0;
        cout << a << " " << b << endl;
        if(b == "X") {
            score+=1;
            if(a == "A") {
                score+=3;
            } else if (a=="C") {
                score+=6;
            }
        } else if (b=="Y") {
            score+=2;
            if(a=="A") {
                score+=6;
            } else if (a=="B") {
                score+=3;
            }
        } else {
            score+=3;
            if(a=="B") {
                score+=6;
            } else if(a=="C") {
                score+=3;
            }
        }
        cout << score << endl;
        endscore+=score;
    }
    cout << endscore << endl;
}

void task2() {
    ifstream read;
    read.open("data.txt");
    string a, b;
    int score = 0, endscore = 0;
    while(read >> a >> b) {
        score = 0;
        cout << a << " " << b << endl;
        if(b == "X") {
            if(a == "A") {
                score+=3;
            } else if (a=="B") {
                score+=1;
            } else {
                score+=2;
            }
        } else if (b=="Y") {
            if(a=="A") {
                score+=4;
            } else if (a=="B") {
                score+=5;
            } else {
                score+=6;
            }
        } else {
            if(a=="A") {
                score+=8;
            } else if (a=="B") {
                score+=9;
            } else {
                score+=7;
            }
        }
        cout << score << endl;
        endscore+=score;
    }
    cout << endscore << endl;
}
