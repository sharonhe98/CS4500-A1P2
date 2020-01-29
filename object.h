#pragma once
#include <stdlib.h>
#include <iostream>

class Object
{
    public:

        Object()
        {}

        virtual ~Object()
        {
            
        }

        size_t hash()
        {}

        virtual size_t hash_me()
        {}

        virtual void print()
        {
            
        }                                                                                                                                          
};
