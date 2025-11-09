#include "vector.h"
#include "point.h"
#include <iostream>

Vector2f MakeV2f(float x, float y)
{
    return {x , y};
}
Vector2f MakeV2f(const Point2f &a, const Point2f &b)
{
    Vector2f v;
    v.x = b.x- a.x;
    v.y = b.y - a.x;

    return v;
}
Vector2f Add(const Vector2f &a, const Vector2f &b)
{
    Vector2f v;
    v.x= a.x+ b.x;
    v.y= b.y+ b.y;
    return v;
Vector2f Sub(const Vector2f &a, const Vector2f &b)
{
    Vector2f v;
    v.x = a.x-b.x;
    v.y = a.y-b.y;
    return v;
}
Vector2f Scale(const Vector2f &v, float scalar)
{
    Vector2f r;
    r.x=v.x*scalar;
    r.y=v.x*scalar;
    return r;
}
float Dot(const Vector2f &a, const Vector2f &b)
{
    Point2f r;

    return (a.x*b.x)+(a.y*b.y);
}
float Length(const Vector2f &v)
{
    return sqrt((v.x*v.x)+(v.y*v.y));
}
Vector2f Normalize(const Vector2f &v)
{
    Vector2f resultat;
    float Length(const Vector2f &v)
      float len=  sqrt((v.x*v.x)+(v.y*v.y));
      if(len !=0){
        resultat.x = v.x/ len;
        resultat.y = v.y /len;
      }
        else{
            resultat.x = 0;
            resultat.y = 0;
        }
        return resultat:
      
    }
    return resultat;
}//normalise un vecteur
Vector2f Lerp(const Vector2f &a, const Vector2f &b, float t)
{
    Vector2f resultat;
    resultat.x= a.x +t*(b.x-a.x);//a et b de points de depart et d'arriver et t et nombre compris entre 0 et 1
    resultat.y= a.y+ t*(b.y=a.y);
    return resultat;
}//interpollation lineaire entre deux vecteurs
float Determinant(const Vector2f &a, const Vector2f &b)
{
    Vector2f resultat;
    return (a.x*b.y)-(a.y*b.x);
    
}//calcul le determinant de deux vecteurs a et b
