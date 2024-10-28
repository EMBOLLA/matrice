#include <iostream>
using namespace std;

//  somme de deux matrices 3x3
void somme3(float M1[3][3],float M2[3][3],float resultat[3][3]) {
    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 3; ++j){
            resultat[i][j] = M1[i][j] + M2[i][j];
        }
    }
        
            
}

//différence de deux matrices 3x3
void difference3(float M1[3][3],float M2[3][3],float resultat[3][3]) {
    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 3; ++j){
             resultat[i][j] = M1[i][j] - M2[i][j];
        }
    }
        
           
}

//produit de deux matrices 3x3
void produit3(float M1[3][3],float M2[3][3],float resultat[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            resultat[i][j] = 0;
            for (int k = 0; k < 3; ++k) {
                resultat[i][j] += M1[i][k] * M2[k][j];
            }
        }
    }
}

// la transposée d'une matrice 3x3
void transposee3(float M1[3][3],float resultat[3][3]) {
    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 3; ++j){
             resultat[i][j] = M1[j][i];
        }
    }
        
           
}

// déterminant d'une matrice 3x3
float determinant3( float M1[3][3]) {
    return M1[0][0] * (M1[1][1] * M1[2][2] - M1[1][2] * M1[2][1]) -
           M1[0][1] * (M1[1][0] * M1[2][2] - M1[1][2] * M1[2][0]) +
           M1[0][2] * (M1[1][0] * M1[2][1] - M1[1][1] * M1[2][0]);
}

// l'inverse d'une matrice 3x3
bool inverse3(float M1[3][3],float resultat[3][3]) {
    float det = determinant3(M1);
    if (det == 0) {
        cout << "La matrice est singulière et n'a pas d'inverse." << endl;
        return false;
    }


    resultat[0][0] =  (M1[1][1] * M1[2][2] - M1[1][2] * M1[2][1]) / det;
    resultat[0][1] = -(M1[0][1] * M1[2][2] - M1[0][2] * M1[2][1]) / det;
    resultat[0][2] =  (M1[0][1] * M1[1][2] - M1[0][2] * M1[1][1]) / det;
    resultat[1][0] = -(M1[1][0] * M1[2][2] - M1[1][2] * M1[2][0]) / det;
    resultat[1][1] =  (M1[0][0] * M1[2][2] - M1[0][2] * M1[2][0]) / det;
    resultat[1][2] = -(M1[0][0] * M1[1][2] - M1[0][2] * M1[1][0]) / det;
    resultat[2][0] =  (M1[1][0] * M1[2][1] - M1[1][1] * M1[2][0]) / det;
    resultat[2][1] = -(M1[0][0] * M1[2][1] - M1[0][1] * M1[2][0]) / det;
    resultat[2][2] =  (M1[0][0] * M1[1][1] - M1[0][1] * M1[1][0]) / det;

    return true;
}

//  calculer la trace d'une matrice 3x3
float trace3(float M1[3][3]) {
    return M1[0][0] + M1[1][1]+M1[2][2];
}