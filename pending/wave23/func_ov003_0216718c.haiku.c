#include "ffc/types.h"

extern uint32_t data_ov003_0217b13c;

typedef struct {
    void *vt;
    uint32_t f04;
    uint32_t f08;
    uint32_t f0c;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint8_t f1c;
    uint8_t f1d;
    uint8_t f1e;
    uint8_t f1f;
    uint32_t f20;
    uint8_t f24;
    uint8_t f25;
    uint8_t f26;
    uint8_t f27;
    uint32_t f28;
} S;

typedef struct {
    uint8_t a;
    uint8_t pa[3];
    uint32_t b;
    uint8_t c;
    uint8_t pc[3];
    uint8_t d;
    uint8_t pd[3];
    uint32_t e;
} T;

void func_ov003_0216718c(S *p, uint32_t a1, uint32_t a2, uint32_t a3, T st)
{
    void *vt = &data_ov003_0217b13c;
    uint32_t t = p->f0c & ~0xffu;
    p->f18 = a2;
    p->f0c = t;
    p->vt = vt;
    p->f1c = (uint8_t)a3;
    p->f14 = a1;
    p->f1d = st.a;
    p->f20 = st.b;
    p->f24 = st.c;
    p->f25 = st.d;
    p->f28 = st.e;
}
