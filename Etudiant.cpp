#include "Etudiant.hpp"
#include <iostream>
#include <numeric> 

using namespace std;

Etudiant::Etudiant(const string& nom, const string& prenom, std::string numEtudiant)
    : m_nomEtudiant(nom), m_prenomEtudiant(prenom), m_numeroEtudiant(numEtudiant) {
}

void Etudiant::ajouterNote(double note) {
    m_notes.push_back(note);
}

double Etudiant::calculerMoyenne() const {
    if (m_notes.empty()) return 0.0;
    double somme = accumulate(m_notes.begin(), m_notes.end(), 0.0);
    return somme / m_notes.size();
}

void Etudiant::afficherInfos() const {
    double moyenne = calculerMoyenne();
    cout << "L'étudiant " << m_prenomEtudiant << " " << m_nomEtudiant
        << " (numéro " << m_numeroEtudiant << ") a une moyenne de "
        << moyenne << "." << endl;
}

string Etudiant::statutEtudiant() const {
    double moyenne = calculerMoyenne();

    if (moyenne < 10)
        return "Insuffisant. Doit se mettre au travail !";
    else if (moyenne < 14)
        return "Passable. Doit redoubler d'effort !";
    else if (moyenne < 16)
        return "Bien. Peut faire mieux !";
    else if (moyenne < 18)
        return "Très bien ! Doit maintenir le cap.";
    else
        return "Excellent ! Doit maintenir le cap.";
}
