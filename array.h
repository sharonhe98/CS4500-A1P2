#pragma once

#include "object.h"
#include "string.h"

// assuming an array is a java-style arraylist
class Array : public Object
{
    public:
        Object *items;
        size_t capacity;
        size_t used;

        //constructor
       Array() 
       {
           capacity = 2;
           used = 0;
           items = new Object[capacity];
       }

        //destructor
       ~Array()
       {
           delete(items);
       }

        // hash and return the hash value
       size_t hash_me()
       {
           // this will be unique because of the pointer.
           size_t ret =  (size_t)items * capacity * used;
           hash__ = ret;
           return ret;
       }

       // putting an item at the end of the array
        void append(Object oo)
        {
            // expand when needed
            if(capacity == used)
            {
                capacity *= 2;
                Object *temp = items;
                items = new Object[capacity];
                memcpy(items, temp, used * sizeof(Object));
                delete(temp);
            }

            used ++;
            items[used] = oo;
        }

        // get the n'th item in the array
        Object get(int nn)
        {
            if(nn >= used)
            {
                perror("index overflow");
                abort();
            }

            else
            {
                return items[nn];
            }
            
        }

        int length()
        {
            return used;
        }

        // this compares two arrays, to see if they are the same
        int equals(Array aa)
        {
            size_t tthis = hash_me();
            size_t tthat = aa.hash_me();

            return (tthis == tthat);
        }

        void print()
        {
            printf("%ld\n", hash_me());
        }
};
