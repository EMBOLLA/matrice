#ifndef _M_3_x_3_H_
#define _M_3_x_3_H_
void somme3(float M1[3][3],float M2[3][3],float resultat[3][3]);
void difference3(float M1[3][3],float M2[3][3],float resultat[3][3]);
void produit3(float M1[3][3],float M2[3][3],float resultat[3][3]);
void transposee3(float M1[3][3], float resultat[3][3]);
float determinant3(float M1[3][3]);
float trace3(float M1[3][3]);
bool inverse3(float M1[3][3],float resultat[3][3]);
#endif 