#include <iostream>
#include <string>
#include "Etudiant.hpp"
using namespace std;

int main() {
    cout << "GESTION D'UN ETUDIANT" << endl << endl;

    while (true) {
        string answer;
        cout << "Voulez-vous enregistrer un étudiant ? (oui/non) ";
        cin >> answer;
        cin.ignore(); // vide le tampon

        if (answer == "oui") {
            string nom, prenom, numEtudiant;
            int nbNotes;

            cout << "Entrez le nom de l'étudiant : ";
            getline(cin, nom);

            cout << "Entrez le prénom de l'étudiant : ";
            getline(cin, prenom);

            cout << "Numéro d'étudiant : ";
            cin >> numEtudiant;

            Etudiant e1(nom, prenom, numEtudiant);

            cout << "Combien de notes voulez-vous saisir ? ";
            cin >> nbNotes;

            for (int i = 0; i < nbNotes; ++i) {
                double note;
                cout << "Note " << i + 1 << " : ";
                cin >> note;
                e1.ajouterNote(note);
            }

            e1.afficherInfos();
            cout << e1.statutEtudiant() << endl << endl;
        }
        else {
            break;
        }
    }

    return 0;
}
