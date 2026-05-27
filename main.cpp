#include <iostream>
#include <string>
#include <random>

using namespace std;

string generatePassword() {
    const string chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, chars.size() - 1);
    string password;
    for (int i = 0; i < 12; i++) {
        password += chars[dis(gen)];
    }
    return password;
}

int main() {
    cout << generatePassword() << endl;
    return 0;
}