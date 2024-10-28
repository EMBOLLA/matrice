#include <iostream>
#include "M2x2.h"
#include "M3x3.h"
#include <stdio.h>
using namespace std;

// afficher une matrice 2x2
void afficherMatrice(float M1[2][2]) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j)
            cout << M1[i][j] << " ";
        cout << endl;
    }
    
    
}

// Fonction pour enregistrer une matrice 2x2
void enregistrerMatrice(float M1[2][2]) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j)
            scanf("%f",&M1[i][j] );
    }
}

// Fonction pour afficher une matrice 3x3
void afficherMatrice3(float M1[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j)
            cout << M1[i][j] << " ";
        cout << endl;
    }
}

// Fonction pour enregistrer une matrice 3x3
void enregistrerMatrice3(float M1[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j)
            scanf("%f",&M1[i][j] );
    }
}

//déclaraion des variables
float M1[2][2],M2[2][2],Somme[2][2],Difference[2][2],Produit[2][2],Transposee[2][2],Inverse[2][2];
float M13[3][3],M23[3][3],Somme3[3][3],Difference3[3][3],Produit3[3][3],Transposee3[3][3],Inverse3[3][3];

int main(int argc , char ** argv ) {

 //matrices carrées d'ordre 2

     cout << "Nous allons commencer par les matrices carrées d'ordre 2 :" << endl;
     cout << " Entrez la matrice1\n" << endl;
     enregistrerMatrice(M1);
     cout << " Et maintenant la matrice2\n" << endl;
     enregistrerMatrice(M2);

     cout << "Somme des matrices M1 et M2 est:\n" << endl;
     somme(M1, M2, Somme);
     afficherMatrice(Somme);

     cout << "Différence des matrices M1 et M2 :\n" << endl;
     difference(M1, M2, Difference);
     afficherMatrice(Difference);

     cout << "Produit des matrices M1 et M2 :" << endl;
     produit(M1, M2, Produit);
     afficherMatrice(Produit);

     cout << "Transposée de la matrice M1 :" << endl;
     transposee(M1, Transposee);
     afficherMatrice(Transposee);

     cout << "Déterminant de la matrice M1 : " << determinant(M1) << endl;

     cout << "Inverse de la matrice M1 :" << endl;
    if (inverse(M1, Inverse)){
        afficherMatrice(Inverse);
    }else{
        cout << "La matrice M1 n'a pas d'inverse." << endl;
    }

    cout << "Trace de la matrice M1 : " << trace(M1) << endl;

 //matrices carrées d'ordre 3

     cout << "Passons aux matrices carrées d'ordre 3 :" << endl;
     cout << " Entrez la matrice1\n" << endl;
     enregistrerMatrice3(M13);
     cout << " Et maintenant la matrice2\n" << endl;
     enregistrerMatrice3(M23);

     cout << "Somme des matrices M1 et M2 est:\n" << endl;
     somme3(M13, M23, Somme3);
     afficherMatrice3(Somme3);

     cout << "Différence des matrices M1 et M2 :\n" << endl;
     difference3(M13, M23, Difference3);
     afficherMatrice3(Difference3);

     cout << "Produit des matrices M1 et M2 :" << endl;
     produit3(M13,M23,Produit3);
     afficherMatrice3(Produit3);

     cout << "Transposée de la matrice M1 :" << endl;
     transposee3(M13,Transposee3);
     afficherMatrice3(Transposee3);

     cout << "Déterminant de la matrice M1 : " << determinant3(M13) << endl;

     cout << "Inverse de la matrice M1 :" << endl;
    if (inverse3(M13, Inverse3)){
        afficherMatrice3(Inverse3);
    }else{
        cout << "La matrice M1 n'a pas d'inverse." << endl;
    }

    cout << "Trace de la matrice M1 : " << trace3(M13) << endl;

    return 0;
}
