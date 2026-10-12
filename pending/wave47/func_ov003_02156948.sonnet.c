#include "ffc/types.h"

typedef struct { uint32_t bit0 : 1; uint32_t rest : 31; } Flags;

extern uint32_t data_020b93b8;
extern uint8_t data_ov003_0217a0f4[];
extern void *data_ov003_02179f84[];

extern void func_0201d014(uint32_t a, uint32_t b, void *c);
extern uint32_t func_02036be4(void *o);
extern uint32_t func_02005efc(void *object, void *first, ...);
extern uint32_t func_0201a3a0(void *object, const void *third);
extern void func_02005988(void *o, void *x);
extern uint32_t func_02052000(void *o);
extern void *func_020059cc(void *object);

void *func_ov003_02156948(void *p, char *a, uint32_t b, uint32_t c, uint8_t d)
{
    uint32_t local[4];
    uint32_t buf[3];
    uint32_t idx;
    uint32_t ent;
    char *q;
    uint32_t ok;
    uint32_t n;
    uint32_t *pb;
    char *r;

    func_0201d014(data_020b93b8, *(uint16_t *)((char *)p + 0xac), local);
    q = *(char **)((char *)p + 0xa8);
    n = *(uint32_t *)(q + 0x54);
    if (func_02036be4(local) >= n) {
        return 0;
    }
    idx = func_02036be4(local);
    q = *(char **)((char *)p + 0xa8);
    ent = *(uint32_t *)(q + *(uint32_t *)(q + 0x58) + (idx << 2));
    if (c != 0) {
        func_02005efc(a, data_ov003_0217a0f4, q + ent, b);
        func_0201a3a0(a, data_ov003_02179f84[d ? 0 : 1]);
        if (!((Flags *)a)->bit0) {
            a = a + 1;
        } else {
            a = *(char **)(a + 8);
        }
    } else {
        func_02005efc(a, data_ov003_0217a0f4, q + ent, b);
        if (!((Flags *)a)->bit0) {
            a = a + 1;
        } else {
            a = *(char **)(a + 8);
        }
    }
    pb = buf;
    func_02005988(pb, a);
    ok = func_02052000(pb) == 0;
    func_020059cc(buf);
    r = 0;
    if (!ok) {
        r = a;
    }
    return r;
}
