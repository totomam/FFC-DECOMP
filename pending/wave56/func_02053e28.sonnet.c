/* cflags: -lang c++ */
#include "ffc/types.h"

struct F { uint8_t v; F(uint8_t x):v(x){} F(const F&o):v(o.v){} ~F(){} };
inline F pass(F a){ return a; }
typedef struct Elem { uint32_t w[4]; } Elem;
typedef struct Arr {
    Elem *data;
    uint32_t count;
    uint32_t cap;
    uint32_t *ext;
    uint32_t oc;
} Arr;

extern "C" uint32_t func_02053ce0(Arr *p, uint32_t n);
extern "C" void func_02053f10(Arr *tmp, uint32_t n, F flag);
extern "C" void *func_02053f00(void *object);

extern "C" void *func_02053e28(Arr *p, uint32_t n, Elem *src)
{
    Arr tmp;
    uint32_t r;
    Elem *dest;
    Elem *end;

    F fa(0);
    F fb(fa);
    F fc(fb);
    tmp.data = 0;
    tmp.count = 0;
    tmp.cap = 0;
    tmp.ext = (uint32_t *)&p->cap;
    tmp.oc = 0;
    r = func_02053ce0(p, p->count + n - p->cap);
    func_02053f10(&tmp, r, pass(fc));

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
