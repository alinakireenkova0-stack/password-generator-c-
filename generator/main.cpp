#include <iostream>
#include <string>
#include <random>
#include <unistd.h>

int main() {
    const std::string chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, chars.size() - 1);

    std::string password;
    for (int i = 0; i < 12; i++) {
        password += chars[dis(gen)];
    }
    std::cout << password << std::endl;

    while (true) {
        sleep(10);
    }
    return 0;
}