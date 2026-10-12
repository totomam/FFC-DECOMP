#include "ffc/types.h"

typedef struct {
    uint32_t a[5];
    uint32_t b[6];
    uint32_t c;
} E;

void func_ov002_021d1694(E **ret, E *first, E *middle, E *last) {
    E *next;
    E *f;
    E *saved;
    E tmp;

    if (first == middle) {
        *ret = last;
        return;
    }
    if (middle == last) {
        *ret = first;
        return;
    }
    next = middle;
    f = first;
    for (;;) {
        tmp = *f;
        *f = *next;
        *next = tmp;
        f++;
        next++;
        if (next == last) {
            break;
        }
        if (f == middle) {
            middle = next;
        }
    }
    saved = f;
    if (f == middle) {
        *ret = saved;
        return;
    }
    next = middle;
    for (;;) {
        tmp = *f;
        *f = *next;
        *next = tmp;
        f++;
        next++;
        if (next == last) {
            if (f == middle) {
                break;
            }
            next = middle;
        } else if (f == middle) {
            middle = next;
        }
    }
    *ret = saved;
}
