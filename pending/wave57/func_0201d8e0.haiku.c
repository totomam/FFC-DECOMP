#include "ffc/types.h"

typedef struct {
    uint32_t w[6];
} Elem;


Elem *func_0201d8e0(Elem *first, Elem *middle, Elem *last) {
    Elem *ret;
    Elem *i;

    if (first == middle) {
        return last;
    }
    if (middle == last) {
        return first;
    }
    i = middle;
    for (;;) {
        { Elem t = *first; *first = *i; *i = t; }
        first++;
        i++;
        if (i == last) {
            break;
        }
        if (first == middle) {
            middle = i;
        }
    }
    ret = first;
    if (first == middle) {
        return ret;
    }
    i = middle;
    while (first != middle) {
        { Elem t = *first; *first = *i; *i = t; }
        first++;
        i++;
        if (i == last) {
            i = middle;
        } else if (first == middle) {
            middle = i;
        }
    }
    return ret;
}
