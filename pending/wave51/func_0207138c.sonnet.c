#include "ffc/types.h"

extern void func_02071810(void *s, uint32_t x);
extern void func_02071890(void *s, uint32_t n);

typedef struct {
    uint32_t *data;
    uint32_t count;
    uint32_t cap;
} Vec;

void func_0207138c(Vec *s, uint32_t n) {
    int ok = 1;
    int fit = 0;
    uint32_t *p;

    if (n <= s->cap) {
        if (s->count <= s->cap - n) {
            fit = 1;
        }
    }
    if (fit == 0) {
        ok = 0;
        func_02071810(s, s->count + n - s->cap);
    }
    if (ok != 0) {
        if (n != 0) {
            p = s->data + s->count * 4;
            do {
                uint32_t zero[4];
                uint32_t *q;
                int i;
                zero[0] = 0;
                zero[1] = 0;
                zero[2] = 0;
                zero[3] = 0;
                if (p != 0) {
                    q = zero;
                    for (i = 0; i < 4; i++) {
                        p[i] = q[i];
                    }
                }
                s->count++;
                p += 4;
                n--;
            } while (n != 0);
        }
    } else {
        func_02071890(s, n);
    }
}
