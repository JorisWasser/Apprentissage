#include <iostream>

using namespace std;

int main()
{
    int const nombreMeilleursScore(5);  // La taille du tableau.
    int meilleursScores[nombreMeilleursScore];  // Déclaration du tableau.

    meilleursScores[0] = 118218;    // Remplissage de la première case.
    meilleursScores[1] = 100432;    // Remplissage de la deuxième case.
    meilleursScores[2] = 87347;     // Remplissage de la troisième case.
    meilleursScores[3] = 64523;     // Remplissage de la quatrième case.
    meilleursScores[4] = 31415;     // Remplissage de la cinquième case.

    for(int i(0); i<nombreMeilleursScore; i++) // Cette boucle va parcourir les valeurs du tableau et va les afficher.
    {
        cout << meilleursScores[i] << endl;
    }

    return 0;
}
