#include "ffc/types.h"

typedef struct { int32_t w0, w1, w2, w3; } Ent;
typedef struct { Ent *arr; uint32_t n; uint32_t extra; } Slot;
typedef struct { uint8_t pad[0xbc]; Slot s[1]; } Obj;

extern int32_t func_0203c4fc(void *p, int32_t d);
extern uint64_t func_0209a71c(uint64_t first, uint64_t second);

int32_t func_0202b510(Obj *p, uint32_t idx, int32_t x) {
    uint32_t n = *(uint32_t*)((uint8_t*)p+idx*12+0xc0);
    uint32_t i;
    if (n == 0) return 0;
    i = 0;
    if (i < n) { do { if (x + 16 < (*(Ent**)((uint8_t*)p+idx*12+0xbc))[i].w0) break; i++; } while (i < *(uint32_t*)((uint8_t*)p+idx*12+0xc0)); }
    if (i == n || n == 1) {
        Ent *e = &p->s[idx].arr[n - 1];
        return e->w1 + func_0203c4fc((uint8_t *)p + 0x180, e->w2 - e->w1);
    } else if (i == 0) {
        Ent *e = &p->s[idx].arr[0];
        return e->w1 + func_0203c4fc((uint8_t *)p + 0x180, e->w2 - e->w1);
    } else {
        Ent *a = &p->s[idx].arr[i - 1];
        Ent *b = &p->s[idx].arr[i];
        long long a0 = a->w0, a1 = a->w1, a2 = a->w2;
        long long b1 = b->w1, b2 = b->w2;
        long long d1 = (long long)b->w0 - a0;
        long long d2 = (long long)(x + 16) - a0;
        long long e = d1 - d2;
        int32_t q1, q2;
        if (d1 == 0) return a->w1 + func_0203c4fc((uint8_t *)p + 0x180, a->w2 - a->w1);
        q1 = (int32_t)((long long)(func_0209a71c(a1, e) + func_0209a71c(b1, d2)) / d1);
        q2 = (int32_t)((long long)(func_0209a71c(a2, e) + func_0209a71c(b2, d2)) / d1);
        return q1 + func_0203c4fc((uint8_t *)p + 0x180, q2 - q1);
    }
}
