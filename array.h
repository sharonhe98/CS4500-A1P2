#pragma once

#include "object.h"
#include "string.h"

// assuming an array is a java-style arraylist
class Array : public Object
{
    public:
        //constructor
       Array();

        //destructor
       ~Array();

        // hash and return the hash value
        virtual size_t hash_me();

        // putting an item at the end of the array
        virtual void append(Object* oo);

        // get the n'th item in the array.
        virtual Object* get(int nn);

        // returns the length of the array.
        virtual int length();

        // set n'th element to the given object
        // returns the replaced Object.
        virtual Object* set(int nn, Object *oo);

        // get the index of an object in the array
        virtual int index_of(Object* oo);

        // this compares two arrays, to see if they are the same
        virtual bool equals(Object *oo);

        // print content
        // -1 on failure, 0 on success
        virtual void print();
};
