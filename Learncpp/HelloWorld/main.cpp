#include <iostream>
#include <vector>
#include <string>
#include <valarray>

void numeroidenSyotto(std::vector<int> &vektori) {
    bool jatka = true;

    while (jatka) {
        int luku{};
        std::cin >> luku;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore();
            std::cout << "Virheellinen syöte, syötä numeroita\n";
            continue;
        }
        if (luku == 0) {
            jatka = false;
        } else {
            vektori.push_back(luku);
        }
    }
}

void tulostaVektori(const std::vector<int> &vektori) {
    for (int i: vektori) {
        std::cout << i << ", ";
    }
}

void pienimmastaSuurimpaan(std::vector<int> &vektori) {
    for (size_t i = 0; i < vektori.size(); i++) {
        for (size_t j = i + 1; j < vektori.size(); j++) {
            if (vektori.at(i) > vektori.at(j)) {
                int tmp = vektori.at(i);
                vektori.at(i) = vektori.at(j);
                vektori.at(j) = tmp;
            }
        }
    }
}

void suurimmastaPienimpään(std::vector<int> &vektori) {
    for (size_t i = 0; i < vektori.size(); i++) {
        for (size_t j = i + 1; j < vektori.size(); j++) {
            if (vektori.at(i) < vektori.at(j)) {
                int tmp = vektori.at(i);
                vektori.at(i) = vektori.at(j);
                vektori.at(j) = tmp;
            }
        }
    }
}


int laskeYhteen(const std::vector<int> &vektori) {
    int summa{};
    for (int i: vektori) {
        summa += i;
    }
    return summa;
}

int main() {
    std::cout << "Syötä numeroita, syötä 0 lopettaaksesi\n";
    std::vector<int> vektori;
    numeroidenSyotto(vektori);
    std::cout << "Vektorin sisätlö:\n";
    tulostaVektori(vektori);

    std::cout << "Anna toiminto\n";
    std::cout << "1. Järjestä pienimmästä suurimpaan\n";
    std::cout << "2. Järjestä suurimmasta pienimpään\n";
    std::cout << "3. Laske lukujen summa\n";

    int toiminto{};
    std::cin >> toiminto;

    switch (toiminto) {
        case 1:
            pienimmastaSuurimpaan(vektori);
            tulostaVektori(vektori);
            break;

        case 2:
            suurimmastaPienimpään(vektori);
            tulostaVektori(vektori);
            break;

        case 3:
            std::cout << "Lukujen summa on: " << laskeYhteen(vektori) << "\n";
            break;

        default:
            std::cout << "Virheellinen syöte\n";;
    }
}
