#ifndef _M_2_x_2_H_
#define _M_2_x_2_H_
void somme(float M1[2][2],float M2[2][2],float resultat[2][2]);
void difference(float M1[2][2],float M2[2][2],float resultat[2][2]);
void produit(float M1[2][2],float M2[2][2],float resultat[2][2]);
void transposee(float M1[2][2], float resultat[2][2]);
float determinant(float M1[2][2]);
float trace(float M1[2][2]);
bool inverse(float M1[2][2],float resultat[2][2]);
#endif 