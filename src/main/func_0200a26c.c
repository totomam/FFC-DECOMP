#include "ffc/types.h"

extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);

typedef struct {
    void *a;
    uint32_t b;
    uint8_t c;
} S;

S *func_0200a26c(S *p) {
    if (p->a) {
        if (p->c) {
            func_02052d3c(p->a, p->b);
        }
        func_02052c04(p->a);
    }
    return p;
}
