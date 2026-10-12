#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair8;

extern void func_ov010_021ca800(void);
extern void func_ov009_0219a308(void *x);
extern void func_020697ac(void *a, void *b);
extern void func_ov010_021cabcc(void *p);
extern uint32_t func_0201b924(const void *object);
extern void func_0201f1a8(void *a, uint32_t b, void *c);
extern void func_ov010_021ca914(void *p);
extern void *func_02056aec(void *p);
extern uint32_t func_0203c18c(uint32_t a, uint32_t b);
extern uint32_t func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);
extern void *func_02056b10(void *owner);
extern uint32_t func_0203b708(uint32_t x);
extern void *data_020b93b8;
extern uint32_t data_0209dde8;
extern uint32_t data_0209dde4;
extern uint32_t data_0209de18;
extern uint32_t data_0209ddd0;
extern uint32_t data_0209ddbc;
extern uint32_t data_0209ddc4;

void func_ov010_021ca934(void *self, uint32_t a)
{
    uint8_t *p = (uint8_t *)self;
    uint32_t k = 0x27a;
    uint32_t t;
    uint32_t r6;
    void *o7;
    void *q;
    uint32_t s;
    uint8_t v;

    if (p[k] == 1) {
        p[k] = 0;
        {
            uint32_t *o = *(uint32_t **)(p + (0x5d << 2));
            o[3] = (o[3] & ~0xffu) | 2;
        }
        func_ov010_021ca800();
        func_ov009_0219a308(*(void **)(p + 0xd8 + p[k - 1] * 4));
        func_020697ac(self, *(void **)(p + 0xd8 + p[k - 1] * 4));
        func_ov010_021cabcc(self);
        return;
    }

    *(uint32_t *)(*(uint8_t **)(p + k + 0x4e)) = a;
    *(*(uint8_t **)(p + k + 0x4e) + 8) = p[k + 1];
    {
        uint16_t *d = (uint16_t *)(*(uint8_t **)(p + k + 0x4e) + 0x14);
        uint16_t *src = (uint16_t *)(p + k - 0x56);
        int i;
        for (i = 0; i < 0x15; i++) {
            d[i] = src[i];
        }
    }
    {
        uint8_t *base = *(uint8_t **)(p + k + 0x4e) + 0x10;
        *(uint32_t *)(base + 0x30) = *(uint32_t *)(p + 0x250);
        {
            uint8_t *d = base + 0x34;
            uint8_t *src = p + 0x254;
            int i;
            for (i = 0; i < 0x14; i++) {
                d[i] = src[i];
            }
        }
        *(Pair8 *)(base + 0x48) = *(Pair8 *)(p + 0x268);
    }
    v = p[k + 0x20];
    *(*(uint8_t **)(p + k + 0x60) + 9) = v;
    v = p[k + 0x21];
    *(*(uint8_t **)(p + k + 0x60) + 10) = v;
    v = p[k + 0x24];
    *(*(uint8_t **)(p + k + 0x60) + 11) = v;
    v = p[k + 0x25];
    *(*(uint8_t **)(p + k + 0x60) + 12) = v;

    func_0201f1a8(data_020b93b8, func_0201b924(data_020b93b8), p + 0x220);

    if (a != 0) {
        o7 = func_02056aec(self);
        r6 = func_0203c18c(data_0209ddd0, data_0209ddbc);
        t = func_0203b6fc();
        func_02056bc0((void *)t, (void *)r6);
        q = func_02056b10(*(void **)(p + 0x2bc));
        s = func_0203b708(data_0209ddc4);
        func_02056bc0(p + 0x14, (void *)s);
        func_02056bc0(p + 0x14, q);
        func_02056bc0(p + 0x14, (void *)t);
        func_02056bc0(p + 0x14, o7);
        return;
    }

    func_ov010_021ca914(self);
    o7 = func_02056aec(self);
    r6 = func_0203c18c(data_0209dde8, data_0209dde4);
    t = func_0203b6fc();
    func_02056bc0((void *)t, (void *)r6);
    q = func_02056b10(*(void **)(p + 0x2bc));
    s = func_0203b708(data_0209de18);
    func_02056bc0(p + 0x14, (void *)s);
    func_02056bc0(p + 0x14, q);
    func_02056bc0(p + 0x14, (void *)t);
    func_02056bc0(p + 0x14, o7);
}
