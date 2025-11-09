#include "point.h"
#include <iostream>

Point2f MakeP2f(float x, float y)
{
    return (x, y);
}
Point2f Translate(const Point2f &p, float dx, float dy)
{
    Point2f resultat;
    resultat.x = p.x + dx;
    resultat.y = p.y + dy;
    return resultat;
}
Point2f Translate(const Point2f &p, const Vector2f &v)
{
    Point2f resultat;
    resultat.x= p.x+ v.x;
    resultat.y= p.x =v.y;
    return resultat;
}
Point2f Scale(const Point2f &p, float sx, float sy)
{
    Point2f resultat;
    resultat.x=p.x*sx;
    resultat.y=p.y*sy;
    return resultat;
}
Point2f Scale(const Point2f &p, const Vector2f &s)
{
    Point2f resultat;
    resultat.x=p.x*s.x;
    resultat.y=p.y*s.y;
    return resultat;
}
Point2f Rotate(const Point2f &p, float angleDegree)
{
    Point2f resultat;
    const double pi =3.141592654;
    float angleradian=pi*(angleDegree/180);
    resultat.x=(p.x*cos(angleradian))-(p.y*sin(angleradian));
    return resultat;
}
std::string ToString(const Point2f& p)
{
    std::ostringstream oss;
    oss << "( "<< p.x<<","<<p.y<<")";
    return oss.str()
}
