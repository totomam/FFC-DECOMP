#include "ffc/types.h"

typedef void (*FnPtr)(void *, int32_t);

typedef struct {
    void *a;
    uint32_t b;
    FnPtr fn;
} S;

void func_0209cc64(S *p) {
    if (p->a) {
        if (p->fn) {
            p->fn(p->a, -1);
        }
    }
}
