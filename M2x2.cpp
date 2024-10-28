#include <iostream>
using namespace std;

//calculer la somme de deux matrices 2x2
void somme(float M1[2][2], float M2[2][2],float resultat[2][2]) {
    for (int i = 0; i < 2; ++i){
        for (int j = 0; j < 2; ++j){
              resultat[i][j] = M1[i][j] + M2[i][j];
        }
    }
        
          
}

//  calculer la différence de deux matrices 2x2
void difference(float M1[2][2], float M2[2][2],float resultat[2][2]) {
    for (int i = 0; i < 2; ++i){
         for (int j = 0; j < 2; ++j){
             resultat[i][j] = M1[i][j] - M2[i][j];
        }
    }
       
           
}

//  calculer le produit de deux matrices 2x2
void produit(float M1[2][2], float M2[2][2],float resultat[2][2]) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            resultat[i][j] = 0;
            for (int k = 0; k < 2; ++k) {
                resultat[i][j] += M1[i][k] * M2[k][j];
            }
        }
    }
}

// calculer la transposée d'une matrice 2x2
void transposee(float M1[2][2],float resultat[2][2]) {
    for (int i = 0; i < 2; ++i){
        for (int j = 0; j < 2; ++j){
            resultat[i][j] = M1[j][i];
        }
    }
        
            
}

//calculer le déterminant d'une matrice 2x2
float determinant(float M1[2][2]) {
    return M1[0][0] * M1[1][1] - M1[0][1] * M1[1][0];
}

//calculer l'inverse d'une matrice 2x2
bool inverse(float M1[2][2],float resultat[2][2]) {
    float det = determinant(M1);
    if (det == 0) {
        cout << "La matrice est singuliere et n'a pas d inverse." << endl;
        return false;
    }

    
    resultat[0][0] =  M1[1][1] / det;
    resultat[0][1] = -M1[0][1] / det;
    resultat[1][0] = -M1[1][0] / det;
    resultat[1][1] =  M1[0][0] / det;

    return true;
}

//  calculer la trace d'une matrice 2x2
float trace(float M1[2][2]) {
    return M1[0][0] + M1[1][1];
}
