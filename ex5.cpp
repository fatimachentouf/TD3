#include <iostream>
using namespace std;
class Test{
public:
static int tableau[] ;
public :
static int division(int indice, int diviseur){
      if (diviseur == 0) {
        throw runtime_error("Division par zero !");
      }
      if (indice < 0 || indice >= 10) {
            throw out_of_range("Indice en dehors des limites !");
      }
return tableau[indice]/diviseur;
}
};
int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5} ;
int main() {
    int x, y;
    cout << "Entrez l indice de l entier à diviser:: " << endl;
    cin >> x;
    cout << "Entrez le diviseur:" << endl;
    cin >> y;
    try {
        cout << "Le résultat de la division est: " << endl;
        cout << Test::division(x, y) << endl;
    } catch (const std::runtime_error& e) {
        cerr << "Erreur : " << e.what() << endl;
    } catch (const out_of_range& e) {
        cerr << "Erreur : " << e.what() << endl;
    }
return 0; 
    
}
