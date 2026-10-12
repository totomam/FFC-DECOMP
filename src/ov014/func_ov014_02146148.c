/* cflags: -nothumb */
#include "ffc/types.h"

extern void func_ov014_02146e9c(void *p);

typedef struct Obj {
    void (**vt)(struct Obj *);
} Obj;

typedef struct Self {
    void *p00;
    uint32_t pad04[12];
    void *p34;
    uint32_t pad38[8];
    void *p58;
    void **p5c;
    void **p60;
    void *p64;
    void *p68;
    void *p6c;
    void *p70[2];
    uint32_t pad78[7];
    void *p94;
    uint32_t pad98[4];
    uint32_t count;
} Self;

void func_ov014_02146148(Self *s)
{
    uint32_t i;
    int j;
    Obj *o;

    if (s->p00 != 0) {
        o = (Obj *)s->p00;
        o->vt[6](o);
        if (s->p00 != 0) {
            o = (Obj *)s->p00;
            o->vt[1](o);
        }
    }
    func_ov014_02146e9c(s->p34);

    if (s->p5c != 0) {
        for (i = 0; i < s->count; i++) {
            func_ov014_02146e9c(s->p5c[i]);
        }
        func_ov014_02146e9c(s->p5c);
    }

    if (s->p60 != 0) {
        for (i = 0; i < s->count; i++) {
            func_ov014_02146e9c(s->p60[i]);
        }
        func_ov014_02146e9c(s->p60);
    }

    if (s->p64 != 0) {
        func_ov014_02146e9c(s->p64);
    }
    if (s->p68 != 0) {
        func_ov014_02146e9c(s->p68);
    }
    if (s->p6c != 0) {
        func_ov014_02146e9c(s->p6c);
    }

    for (j = 0; j < 2; j++) {
        if (s->p70[j] != 0) {
            func_ov014_02146e9c(s->p70[j]);
        }
        s->p70[j] = 0;
    }

    if (s->p94 != 0) {
        func_ov014_02146e9c(s->p94);
    }
    if (s->p58 != 0) {
        func_ov014_02146e9c(s->p58);
    }

    s->p00 = 0;
    s->p5c = 0;
    s->p60 = 0;
    s->p68 = 0;
    s->p6c = 0;
    s->p64 = 0;
    s->p58 = 0;
    s->p94 = 0;
}
