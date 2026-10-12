#include "ffc/types.h"

typedef struct {
    void *arr;
    uint32_t n;
    uint32_t extra;
} Slot;

typedef struct {
    int32_t w0;
    int32_t w1;
    int32_t w2;
    int32_t w3;
} Ent;

extern int32_t func_0203c4fc(void *p, int32_t d);
extern unsigned long long func_0209a71c(long long first, long long second);
extern int32_t _L_0209a524(unsigned long long a, long long b);

int32_t func_0202b510(uint8_t *p, uint32_t idx, int32_t x) {
    Slot *slots = (Slot *)(p + 0xbc);
    Ent *arr;
    uint32_t n = slots[idx].n;
    uint32_t i;
    int32_t xp;

    if (n == 0) {
        return 0;
    }
    arr = (Ent *)slots[idx].arr;
    xp = x + 16;
    i = 0;
    while (i < n) {
        if (xp < arr[i].w0) {
            break;
        }
        i++;
    }

    if (i == n || n == 1) {
        Ent *e = &arr[n - 1];
        int32_t d = e->w2 - e->w1;
        return e->w1 + func_0203c4fc(p + 0x180, d);
    } else if (i == 0) {
        Ent *e = &arr[0];
        int32_t d = e->w2 - e->w1;
        return e->w1 + func_0203c4fc(p + 0x180, d);
    } else {
        Ent *a = &arr[i - 1];
        Ent *b = &arr[i];
        long long d1 = (long long)b->w0 - (long long)a->w0;
        long long d2 = (long long)xp - (long long)a->w0;
        long long e = d1 - d2;
        int32_t q1, q2;
        unsigned long long s1, s2, s3, s4;

        if (d1 == 0) {
            return a->w1 + func_0203c4fc(p + 0x180, a->w2 - a->w1);
        }
        s1 = func_0209a71c((long long)a->w1, e);
        s2 = func_0209a71c((long long)b->w1, d2);
        q1 = _L_0209a524(s1 + s2, d1);
        s3 = func_0209a71c((long long)a->w2, e);
        s4 = func_0209a71c((long long)b->w2, d2);
        q2 = _L_0209a524(s3 + s4, d1);
        return q1 + func_0203c4fc(p + 0x180, q2 - q1);
    }
}
