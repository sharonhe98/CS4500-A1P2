#pragma once
#include <stdlib.h>
#include <iostream>

class Object
{
    public:
        size_t hash__;

        Object()
        {
            hash__ = 0;
        }

        virtual ~Object()
        {
            
        }

        size_t hash()
        {
            return hash__ ? hash__ : hash__ = hash_me();
        }

        virtual size_t hash_me()
        {
            return 0;
        }

        virtual void print()
        {
            
        }                                                                                                                                          
};
