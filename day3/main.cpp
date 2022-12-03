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
    fstream read;
    read.open("data.txt");
    string a, b, c;
    int sum = 0;
    while(read >> a) {
        b = a.substr(0, a.length()/2);
        c = a.substr(a.length()/2, a.length());
        /*cout <<"0: " << a << endl << "1: " << b << endl << c << endl << "2: " << endl;
        for(int i=0; i<b.length(); i++) {
            cout << b[i];
        }
        cout << endl;
        for(int i=0; i<c.length(); i++) {
            cout << c[i];
        }
        cout << endl; */
       for(int i=0; i<b.length(); i++) {
            for(int y=0; y<c.length(); y++) {
                if(b[i] == c[y]) {
                    //cout << " " << b[i];
                    if((int)b[i] >= 97) {
                        //cout << " " <<((int)b[i] - 96);
                        sum+=((int)b[i] - 96);
                    } else {
                       // cout << " " <<((int)b[i]-38);
                        sum+=((int)b[i]-38);
                    }
                    goto here;
                }
            }
            //cout << " " << endl;
        }
        here:;
    }
    cout << sum << endl;
}

void task2() {
    fstream read;
    read.open("data.txt");
    string a, b, c;
    int sum = 0;
    int table[53];
    int helper;
    int check = 0;
    while(read >> a >> b >> c) {
        for(int i=0; i<53; i++) {
            table[i] = 0;
        }
        //cout << a << " " << b << " " << c << endl;
        for(int i=0; i<a.length(); i++) {
            helper = (int)a[i];
            if(helper >= 97) {
                helper-=96;
            } else {
                helper-=38;
            }
            if(table[helper] == 0) {
            table[helper]++;
            }
        }
        for(int i=0; i<b.length(); i++) {
            helper = (int)b[i];
            if(helper >= 97) {
                helper-=96;
            } else {
                helper-=38;
            }
            if(table[helper] == 1) {
            table[helper]++;
            }
        }
        for(int i=0; i<c.length(); i++) {
            helper = (int)c[i];
            if(helper >= 97) {
                helper-=96;
            } else {
                helper-=38;
            }
            if(table[helper] == 2) {
            table[helper]++;
            }
        }
        for(int i=0; i<=53; i++) {
            if(table[i] == 3) {
                sum+=i;
                check++;
            }
        }
    }
    cout << sum << endl;
}
