#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string name = "Kevin";
    int age = 30;
    stringstream ss;
    ss << "Name is: ";
    ss << name;
    ss << "; Age is: ";
    ss << age;
    string info = ss.str();
    cout << info << endl;
    return 0;
}
