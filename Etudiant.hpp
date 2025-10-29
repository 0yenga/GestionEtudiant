#ifndef DEF_ETUDIANT
#define DEF_ETUDIANT

#include <iostream>
#include <string>
#include <vector>

class Etudiant {
private:
    std::string m_nomEtudiant;
    std::string m_prenomEtudiant;
    std::string m_numeroEtudiant;
    std::vector<double> m_notes;

public:
    Etudiant(const std::string& nom, const std::string& prenom, std::string numEtudiant);

    void ajouterNote(double note);
    double calculerMoyenne() const;
    void afficherInfos() const;
    std::string statutEtudiant() const;
};

#endif
