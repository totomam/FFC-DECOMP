#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern uint32_t data_020b8e44;
extern Pair data_ov009_021b089c;
extern uint32_t func_02015a38(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_020159f8(uint32_t a);
extern void *func_0203b9cc(Pair p, uint32_t c, uint32_t d);
extern uint32_t func_02066878(void *object);
extern void func_0205fdc8(uint32_t object, uint32_t value);
extern void *func_0203b878(void *object, uint32_t value);
extern void *func_020367b8(void *object);
extern void func_0200a630(void *a, void *b);
extern void func_02068e18(void *a, void *b);
extern void func_0200a678(void *object);
extern void func_02056bc0(void *object, void *node);

void func_ov009_021a4a08(void *a, uint32_t unused, void *b)
{
    Pair cfg;
    volatile uint32_t ret;
    uint32_t tmp[3];
    void *m;
    void *o;
    void **vt;

    ret = func_02015a38(data_020b8e44, 0, 10, 11);
    cfg.b = 0x20;
    cfg.a = 0x80;
    m = func_0203b9cc(cfg, func_020159f8(data_020b8e44), 1);
    func_0205fdc8(func_02066878(m), 1);
    o = func_0203b878(m, ret);
    *(void **)((uint8_t *)a + 0x168) = o;
    ((void (*)(void *, Pair))(*(void ***)o)[3])(o, data_ov009_021b089c);
    vt = *(void ***)*(void **)((uint8_t *)a + 0x168);
    ((void (*)(void *, uint32_t))vt[8])(*(void **)((uint8_t *)a + 0x168), 2);
    vt = *(void ***)*(void **)((uint8_t *)a + 0x168);
    ((void (*)(void *))vt[10])(*(void **)((uint8_t *)a + 0x168));
    func_0200a630(tmp, func_020367b8(b));
    func_02068e18(*(void **)((uint8_t *)a + 0x168), tmp);
    func_0200a678(tmp);
    func_02056bc0((uint8_t *)a + 0x48, *(void **)((uint8_t *)a + 0x168));
}
