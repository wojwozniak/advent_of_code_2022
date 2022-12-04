#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream read;
    read.open("data.txt");
    string a;
    string b="",c="",d="",e="";
    int i=0;
    int helper;
    int first, second, third, fourth;
    int sum = 0, secondsum = 0;
    while(read >> a) {
        b="",c="",d="",e="";
        i=0;

        //cout << a << endl;
        while(a[i]!='-'&&a[i]!=','&&i<a.length()) {
            //cout << a[i] << endl;
            b+=a[i];
            i++;
        }
        i++;
        while(a[i]!='-'&&a[i]!=','&&i<a.length()) {
            c+=a[i];
            i++;
        }
        i++;
        while(a[i]!='-'&&a[i]!=','&&i<a.length()) {
            d+=a[i];
            i++;
        }
        i++;
        while(a[i]!='-'&&a[i]!=','&&i<a.length()) {
            e+=a[i];
            i++;
        }
        //cout << b << " " << c << " " << d << " " << e << endl;
        first = stoi(b);
        second = stoi(c);
        third = stoi(d);
        fourth = stoi(e);
        //cout << first << " " << second << " " << third << " " << fourth << endl;
        if(first > third) {
            helper = first;
            first = third;
            third = helper;
            helper = second;
            second = fourth;
            fourth = helper;
        }
        //cout << first << " " << second << " " << third << " " << fourth << endl;
        if(second >= fourth) {
            sum++;
        } else if(first == third && second <= fourth) {
            sum++;
        }
        if(third <= second) {
            secondsum++;
        }
    }
    cout << "Task 1: " << sum << endl;
    cout << "Task 2: " << secondsum << endl;
    return 0;
}
