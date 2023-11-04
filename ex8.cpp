#include <iostream>
using namespace std;
template <typename T>
T carre(const T valeur) {
    return valeur * valeur;
}

int main() {
    int entier = 5;
    float flottant = 2.5;
    double doublePrecision = 3.14;

    int carreEntier = carre(entier);
    float carreFlottant = carre(flottant);
    double carreDouble = carre(doublePrecision);

    std::cout << "Le carre de l entier est : " << carreEntier <<endl;
    std::cout << "Le carre du flottant est : " << carreFlottant <<endl;
    std::cout << "Le carre du double est : " << carreDouble <<endl;

    return 0;
}

