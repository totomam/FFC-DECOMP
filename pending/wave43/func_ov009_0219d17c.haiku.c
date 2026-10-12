#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_ov009_0219d218(void *obj, void *self, uint32_t a1, uint32_t a2, void *local, uint8_t flag);
extern void *func_02035fd0(void *object);
extern uint32_t data_020ae644[];
extern uint32_t data_020ae654[];

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

typedef struct {
    uint32_t f0;
    void *f4;
    uint32_t f8;
    void *fc;
    uint32_t f10;
    void *f14;
    uint32_t f18;
    void *f1c;
    uint32_t f20;
    void *f24;
    uint32_t f28;
    uint32_t f2c;
    uint16_t h[17];
    uint32_t f54;
    uint32_t f58;
    uint32_t f5c;
} Local;

void *func_ov009_0219d17c(void *self, Pair pr, uint32_t *p, uint8_t flag)
{
    Local L;
    void *obj;
    int done = 0;
    uint16_t *src;
    uint16_t *dst;
    int n;

    obj = func_0205681c(0xf4);
    if (obj == 0) {
        goto end;
    }
    {
        void *d = data_020ae644;
        L.f4 = d;
        L.f0 = p[0];
        L.fc = d;
        L.f8 = p[2];
        L.f14 = d;
        L.f10 = p[4];
        L.f1c = d;
        L.f18 = p[6];
        L.f20 = p[8];
        L.f24 = d;
        L.f28 = p[10];
        L.f24 = data_020ae654;
        L.f2c = p[11];
    }
    src = (uint16_t *)(p + 12);
    dst = L.h;
    n = 0x11;
    do {
        *dst++ = *src++;
        n--;
    } while (n != 0);
    L.f54 = p[21];
    L.f58 = p[22];
    L.f5c = p[23];
    done = 1;
    obj = func_ov009_0219d218(obj, self, pr.a, pr.b, &L, flag);
end:
    if (done) {
        func_02035fd0(&L);
    }
    return obj;
}
