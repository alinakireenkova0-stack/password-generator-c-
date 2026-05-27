#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>

int main() {
    std::string pwd;
    std::cout << "Введите пароль: ";
    std::cin >> pwd;

    std::ofstream file("/data/passwords.txt", std::ios::app);
    file << pwd << std::endl;
    file.close();

    std::cout << "[service2] Пароль сохранён" << std::endl;

    while (true) {
        sleep(10);
    }
    return 0;
}