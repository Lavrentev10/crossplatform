#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv){
    cout << "Hello world" << endl;

    cout << "Enter your name... ";
    string name;
    cin >> name;

    int num;
    cout << "Enter your number... ";
    cin >> num;
    cout << "Hello, " << name << "!\nYour number is " << num <<endl;

}
