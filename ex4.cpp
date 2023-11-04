#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

bool rechercherElement(set<int>::iterator debut, set<int>::iterator fin, int valeur) {
    return find(debut, fin, valeur) != fin;
}

int main() {
    set<int> monSet;

    for (int i = 1; i <= 100; i++) {
        monSet.insert(i);
    }

    for (int num : monSet) {
        cout << num << " ";
    }

    int valeurRecherchee = 55;

    if (rechercherElement(monSet.begin(), monSet.end(), valeurRecherchee)) {
        cout << "La valeur " << valeurRecherchee << " est dans le set." << endl;
    } else {
        cout << "La valeur " << valeurRecherchee << " n'est pas dans le set." << endl;
    }
    
    return 0;
}

