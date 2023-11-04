#include <iostream>
#include <list>
using namespace std;

class Personne {
private:
    string nom = "ahmed";
    string prenom = "hhh";
    int age = 0;


public:
    Personne(string n, string p, int a)  {
        nom = n;
        prenom = p;
        age=a;
    }

   bool operator<(const Personne& autre) const {
        if (nom != autre.nom) {
            return nom < autre.nom;
        } else {
            return prenom < autre.prenom;
        }
    }
    
    string getNom() const {
        return nom;
    }

    string getPrenom() const {
        return prenom;
    }

    int getAge() const {
        return age;
    }
};

int main() {
    list<Personne> l;
    int n;
    cout << "Combien de personnes voulez-vous entrer ? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        string nom, prenom;
        int age;
        cout << "Entrez le nom de la personne " << i + 1 << ": ";
        cin >> nom;
        cout << "Entrez le prénom de la personne " << i + 1 << ": ";
        cin >> prenom;
        cout << "Entrez l'âge de la personne " << i + 1 << ": ";
        cin >> age;
        Personne p(nom, prenom, age);
        l.push_back(p);
    }
    
    l.sort();
    
    cout << "Liste triee par nom et prenom : \n";
    for (const Personne& personne : l) {
        cout << "Nom: " << personne.getNom() << ", prenom: " << personne.getPrenom() << ", age: " << personne.getAge() << endl;
    }
    return 0;
}

