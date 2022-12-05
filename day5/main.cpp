#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ifstream read;
    read.open("data.txt");
    string a[10];
    a[1]="FDBZTNJRN";
    a[2]="RSNJH";
    a[3]="CRNJGZFQ";
    a[4]="FVNGRTQ";
    a[5]="LTQF";
    a[6]="QCWZBRGN";
    a[7]="FCLSNHM";
    a[8]="DNQMTJ";
    a[9]="PGS";
    string b, c, d;
    string helper;
    int x, y, z; // x - how much, y - from where, z - to where
    while(read >> b, read >> x, read >> c, read >> y, read >> d, read >> z) {
        cout << b << " " << x << " " << c << " " << y << " " << d << " " << z << endl;
        helper = a[y].substr(a[y].size()-x);
        a[y] = a[y].substr(0, a[y].size()-x);
        // for task 1 just uncomment this one line, when commented task 2 works
        //reverse(helper.begin(), helper.end());
        a[z]+=helper;
        for(int i=1; i<10; i++) {
            cout << a[i] << endl;
        }
    }
    for(int i=1; i<=9; i++) {
        cout << a[i][a[i].length()-1];
    }
    return 0;
}
