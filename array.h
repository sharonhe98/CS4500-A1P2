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
        size_t hash_me();

        // putting an item at the end of the array
        // return 0 on success, -1 on failure
        int append(Object* oo);

        // get the n'th item in the array
        Object* get(int nn);

        int length();


        // this compares two arrays, to see if they are the same
        bool equals(Array aa);

        // print content
        // -1 on failure, 0 on success
        void print();
};
