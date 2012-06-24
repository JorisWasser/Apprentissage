#include <iostream>

using namespace std;

int main()
{
    int const nombreNotes(6); // La taille du tableau.
    double notes[nombreNotes]; // Déclaration du tableau.

    notes[0] = 12.5;
    notes[1] = 19.5;
    notes[2] = 6;
    notes[3] = 12;
    notes[4] = 14.5;
    notes[5] = 15;

    double moyenne(0); // Variable qui va contenir la moyenne des nombres ci-dessus.
    for(int i(0); i<nombreNotes; i++)
    {
        moyenne += notes[i]; // On additionne toutes les notes.
    }
    // En arrivant ici, la variable ' moyenne ' contient la somme des notes (79.5)
    // Il ne reste donc qu'a diviser par le nombre de notes.

    moyenne /= nombreNotes;
    cout << "Votre moyenne est : " << moyenne << endl; // On affiche la valeur de 'moyenne'

    return 0;
}
