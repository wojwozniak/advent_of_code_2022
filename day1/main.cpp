#include <iostream>
#include <fstream>

using namespace std;

void task1();
void task2();

int main() {
    task1();
    task2();
}

void task1() {
    ifstream read;
    read.open("data.txt");
    string a;
    int current = 0, maxi = 0;
    int which = 0, i=1;
    while(getline(read, a)) {
        if(a.length() < 3) {
            if(current > maxi) {
                maxi = current;
                which = i;
            }
            i++;
            current = 0;
        } else {
            current += stoi(a);
        }
    }
    if(current > maxi) {
        maxi = current;
        which = i;
    }
    cout << "Task 1:" << maxi << endl;
}

void task2() {
    ifstream read;
    read.open("data.txt");
    string a;
    int current = 0;
    int maxi[3] = {0};
    while(getline(read, a)) {
        if(a.length() < 3) {
            if(current > maxi[0]){
                maxi[2] = maxi[1];
                maxi[1] = maxi[0];
                maxi[0] = current;
            } else if (current > maxi[1]) {
                maxi[2] = maxi[1];
                maxi[1] = current;
            } else if (current > maxi[2]) {
                maxi[2] = current;
            }
            current = 0;
        } else {
            current += stoi(a);
        }
    }
    if(current > maxi[0]){
        maxi[2] = maxi[1];
        maxi[1] = maxi[0];
        maxi[0] = current;
    } else if (current > maxi[1]) {
        maxi[2] = maxi[1];
        maxi[1] = current;
    } else if (current > maxi[2]) {
        maxi[2] = current;
    }
    int output = 0;
    for(int i=0; i<3; i++) {
        output+=maxi[i];
    }
    cout << "Task 2:" << output << endl;
}
