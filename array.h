#pragma once

#include "object.h"
#include "string.h"

// assuming an array is a java-style arraylist
class Array : public Object
{
    public:
        // items is an array of object pointers
        Object **items;
        size_t capacity;
        size_t used;

        //constructor
       Array() 
       {
           capacity = 2;
           used = 0;
           items = new Object*[capacity];
       }

        //destructor
       ~Array()
       {
           delete(items);
       }

        // hash and return the hash value
        virtual size_t hash_me();

        // putting an item at the end of the array
        // return 0 on success, -1 on failure
        virtual int append(Object* oo);

        // get the n'th item in the array.
        virtual Object* get(int nn);

        // returns the length of the array.
        virtual int length();

        // set n'th element to the given object
        // users are responsible for free'ing the pointer
        virtual int set(int nn, Object *oo);

        // get the index of an object in the array
        virtual int index_of(Object* oo);

        // this compares two arrays, to see if they are the same
        virtual bool equals(Array aa);

        // print content
        // -1 on failure, 0 on success
        virtual void print();
};
