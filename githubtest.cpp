#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string dosyaYolu;
    std::cout << "Dosya yolunu girin: ";
    std::getline(std::cin, dosyaYolu);
    std::ifstream dosya(dosyaYolu.c_str());

    if (dosya) {
        char buffer[2];
        dosya.read(buffer, 2);

        if (dosya.gcount() >= 2) {
            std::cout << "Dosyanin ilk 2 bayti: " << buffer[0] << buffer[1];
        } else {
            std::cout << "Dosya 2 karakterden kisa.";
        }
    } else {
        std::cout << "Dosya acilamadi.";
    }
    dosya.close();
    return 0;
}
