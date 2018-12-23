#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <SFML/Graphics.hpp>
#include "vector2.hpp"

class GameObject
{
public:
    GameObject();
    Vector2 position, velocity;
};

#endif // GAMEOBJECT_H
