#include <iostream>
#include <fstream>

using namespace std;

bool everydifferent(string a) {
    for(int i=0; i<a.length(); i++) {
        for(int y=0; y<a.length(); y++) {
            if(a[i]==a[y]) {
                if(i!=y) {
                    return false;
                }
            }
        }
    }
    return true;
}

int main() {
    int maxi = 14; // set maxi for no of characters to check
    ifstream read;
    read.open("data.txt");
    string a;
    read >> a;
    char b[maxi+1];
    for(int i=maxi-1; i<a.length(); i++) {
        for(int y=0; y<maxi; y++) {
            b[y] = a[i-maxi+y+1];
        }
        if(everydifferent(b)) {
            cout << i+1 << endl; //+1 because iterating from 0
            return 0;
        }
    }
    return 1;
}
