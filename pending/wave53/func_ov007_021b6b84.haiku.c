#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S2;

extern void func_0201a020(void *x);
extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021bce8c(void *a, void *p, uint32_t c0, void *c8, void *q, uint32_t bc);
extern void *func_ov001_0218dde0(void *p, uint32_t n);
extern void func_02056bc0(void *object, void *node);
extern void *func_020159c8(void *x, uint32_t y);
extern void func_02005988(void *o, void *n);
extern uint32_t func_0201a3a0(void *o, const void *third);
extern void *func_0203bd50(S2 s, void *c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern void *func_020059cc(void *object);
extern S2 data_ov007_021c6d74;
extern void *data_020b8e44;
extern uint32_t data_ov007_021c6d84[];
extern S2 data_ov007_021c6d7c;

void func_ov007_021b6b84(uint8_t *p)
{
    uint32_t obj[3];
    S2 t;
    void *node;
    uint32_t z = 0;

    if (*(uint64_t *)(p + 0xc0) == 100000000ULL) {
        S2 d = data_ov007_021c6d74;
        *(S2 *)(p + 0xb0) = d;
        return;
    }

    *(uint32_t *)(p + 0xc8) = 0;
    func_0201a020(data_020b8e44);
    node = func_0205681c(0x1dc);
    if (node != 0) {
        node = func_ov007_021bce8c(node, p, *(uint32_t *)(p + 0xc0), p + 0xc8,
                                   p + 0x305, *(uint32_t *)(p + 0xbc));
    }
    func_02056bc0(func_ov001_0218dde0(p, z), node);

    func_02005988(obj, func_020159c8(data_020b8e44, 0x152));
    func_0201a3a0(obj, data_ov007_021c6d84);

    t.a = 0x80;
    t.b = 0x60;
    node = func_0203bd50(t, obj, 4, 2, 0, z);
    func_02056bc0(func_ov001_0218dde0(p, 3), node);

    {
        S2 d = data_ov007_021c6d7c;
        *(S2 *)(p + 0xb0) = d;
    }
    func_020059cc(obj);
}
