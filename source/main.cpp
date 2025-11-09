#include "geometry/point.h"
#include "geometry/vector.h"
#include "geometry/utils.h"
#include <iostream>

int main()
{

    std::cout << "************************* GEOMETRIE DE L'ESPACE********************************"

        // translation d'un point

        point2f p1 = translate(p1);
    print("point1," ToString(p1));

    // creer un vecteur v2 a partir de deux points

    vector2f v2 = MakeV2f(p1, p2);
    print("vector2:", ToString(v2));

    // addition de duex vecteurs

    Vector2f v3 = add(v1, v2);
    print("addition: ", ToString(v)) // soustation de deux vecteurs

        Vector2f v3 = sup(v1, v2);
    print("soustration: ", ToString(v3));

    // homothetie

    float k = 2.0f;
    Vector2f v4 = scale(v3, k);
    print("soustration: ", ToString(v3));

    // produit scalaire

    float dot = Dot(v1, v2);
    print("Dot product: ", dot);

    // longueur du vecteur

    float len = length(v1);
    print("length: ", len);

    // normaliser un vecteur

    vector2f v5 = normalize(v1);
    print("unit vector: ", ToString(v5));
    // interpollation lineaire

    // determinant de deux vectuers
    float Det = Determinant(v1, v2);
    print(" Determinant: ", Det);
    return 0;
}