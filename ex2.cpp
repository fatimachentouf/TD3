#include <iostream>
#include <list>

using namespace std;

list<int> tribull(list<int> l) {
    bool echange;
    do {
        echange = false;
        for (auto i = l.begin(); next(i) != l.end(); i++) {
            auto apres = next(i);
            if (*i > *apres) {
                int temp = *i;
                *i = *apres;
                *apres = temp;
                echange = true;
            }
        }
    } while (echange);
    return l;
}

list<int> trieParSelection(list<int> l) {
    list<int> listtrier = l; 
    
    for (auto i = listtrier.begin(); i != listtrier.end(); i++) {
        auto min = i;
        for (auto j = next(i); j != listtrier.end(); j++) {
            if (*j < *min) {
                min = j;
            }
        }
        if (min != i) {
            int temp = *i;
            *i = *min;
            *min = temp;
        }
    }

    return listtrier;
}

int main() {
    list<int> l;
    int n;

    cout << "Combien d'entiers voulez-vous entrer ? ";
    cin >> n;


    for (int i = 0; i < n; i++) {
        cout << "Entrez le numero" << i+1 << " "<<endl;
        int e;
        cin >> e;
        l.push_back(e);
    }
    
    list<int> listtrie1 =trieParSelection(l);
    cout << "tri a bull :  ";
    for (int valeur : listtrie1) {
     cout << valeur << " ";
    }
    cout << endl;

    list<int> listtrie2 =trieParSelection(l);
    cout << "tri par selection :  ";
    for (int valeur : listtrie2) {
     cout << valeur << " ";
    }

    
    return 0;
}

