#include <iostream>

using namespace std;

int main()
{
    int const nombreMeilleursScore(5);  // La taille du tableau.
    int meilleursScores[nombreMeilleursScore];  // D�claration du tableau.

    meilleursScores[0] = 118218;    // Remplissage de la premi�re case.
    meilleursScores[1] = 100432;    // Remplissage de la deuxi�me case.
    meilleursScores[2] = 87347;     // Remplissage de la troisi�me case.
    meilleursScores[3] = 64523;     // Remplissage de la quatri�me case.
    meilleursScores[4] = 31415;     // Remplissage de la cinqui�me case.

    for(int i(0); i<nombreMeilleursScore; i++) // Cette boucle va parcourir les valeurs du tableau et va les afficher.
    {
        cout << meilleursScores[i] << endl;
    }

    return 0;
}
