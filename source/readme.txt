Ce projet illustre toutes les notions vues précédemment.

📁 Fichiers à créer

        main.cpp
            geometry /
 ├── point.h
 ├── point.cpp
 ├── vector.h
 ├── vector.cpp
 ├── utils.h

🔹 point.h

#ifndef POINT_H
#define POINT_H

#include <string>
#include "vector.h"

    struct Point2f
{
    float x;
    float y;
};

Point2f MakeP2f(float x, float y);
Point2f Translate(const Point2f &p, float dx, float dy);
Point2f Translate(const Point2f &p, const Vector2f &v);
Point2f Scale(const Point2f &p, float sx, float sy);
Point2f Scale(const Point2f &p, const Vector2f &s);
Point2f Rotate(const Point2f &p, float angleDegree);

std::string ToString(const Point2f &p);

#endif

🔹 vector.h

#ifndef VECTOR_H
#define VECTOR_H

#include <string>
#include <cmath>

    struct Vector2f
{
    float x;
    float y;
};

Vector2f MakeV2f(float x, float y);
Vector2f MakeV2f(const Point2f &a, const Point2f &b);
Vector2f Add(const Vector2f &a, const Vector2f &b);
Vector2f Sub(const Vector2f &a, const Vector2f &b);
Vector2f Scale(const Vector2f &v, float scalar);
float Dot(const Vector2f &a, const Vector2f &b);
float Length(const Vector2f &v);
Vector2f Normalize(const Vector2f &v);
Vector2f Lerp(const Vector2f &a, const Vector2f &b, float t);
float Determinant(const Vector2f &a, const Vector2f &b);

std::string ToString(const Vector2f &v);

#endif

🔹 utils.h

#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <map>

    // Templates ToString et Print
    template <typename T>
    std::string ToString(const T &value)
{
    std::ostringstream oss;
    oss << value;
    return oss.str();
}

template <typename T>
std::string ToString(const std::vector<T> &v)
{
    std::ostringstream oss;
    oss << "[";
    for (size_t i = 0; i < v.size(); ++i)
    {
        oss << ToString(v[i]);
        if (i + 1 < v.size())
            oss << ", ";
    }
    oss << "]";
    return oss.str();
}

template <typename K, typename V>
std::string ToString(const std::map<K, V> &m)
{
    std::ostringstream oss;
    oss << "{";
    for (auto it = m.begin(); it != m.end(); ++it)
    {
        oss << ToString(it->first) << ": " << ToString(it->second);
        if (std::next(it) != m.end())
            oss << ", ";
    }
    oss << "}";
    return oss.str();
}

template <typename T, typename... Args>
void Print(const T &first, const Args &...args)
{
    std::cout << ToString(first);
    ((std::cout << ", " << ToString(args)), ...);
    std::cout << std::endl;
}

#endif

🔹 main.cpp

#include "geometry/point.h"
#include "geometry/vector.h"
#include "geometry/utils.h"

    int main()
{
    Point2f p = MakeP2f(2.0f, 3.0f);
    Print("Point:", ToString(p));

    Vector2f v = MakeV2f(1.0f, -1.0f);
    Point2f p2 = Translate(p, v);
    Print("Translated:", ToString(p2));

    return 0;
}
