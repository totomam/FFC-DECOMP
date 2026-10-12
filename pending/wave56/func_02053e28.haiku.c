#include "ffc/types.h"

typedef struct Elem { uint32_t w[4]; } Elem;
typedef struct Arr {
    Elem *data;
    uint32_t count;
    uint32_t cap;
    uint32_t *ext;
    uint32_t oc;
} Arr;

extern uint32_t func_02053ce0(Arr *p, uint32_t n);
extern void func_02053f10(Arr *tmp, uint32_t n, uint8_t flag);
extern void *func_02053f00(void *object);

void *func_02053e28(Arr *p, uint32_t n, Elem *src)
{
    Arr tmp;
    uint8_t flag;
    uint32_t r;
    Elem *dest;
    Elem *end;

    flag = 0;
    tmp.data = 0;
    tmp.count = 0;
    tmp.cap = 0;
    tmp.ext = (uint32_t *)&p->cap;
    tmp.oc = 0;
    r = func_02053ce0(p, p->count + n - p->cap);
    func_02053f10(&tmp, r, flag);

    tmp.oc = p->count;
    dest = tmp.data + p->count + tmp.count;
    if (n != 0) {
        do {
            if (dest) {
                *dest = *src;
            }
            tmp.count++;
            dest++;
            n--;
        } while (n != 0);
    }

    end = p->data + p->count;
    while (end > p->data) {
        end--;
        dest = tmp.data + tmp.oc - 1;
        tmp.oc--;
        if (dest) {
            *dest = *end;
        }
        tmp.count++;
    }

    p->count = 0;
    {
        uint32_t t = p->cap;
        p->cap = tmp.cap;
        tmp.cap = t;
    }
    {
        Elem *t = p->data;
        p->data = tmp.data;
        tmp.data = t;
    }
    p->count = tmp.count;
    tmp.count = 0;
    return func_02053f00(&tmp);
}
