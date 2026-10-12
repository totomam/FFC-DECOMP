#include "ffc/types.h"

typedef struct { uint32_t x; uint32_t y; } Pos;

extern uint32_t func_0205681c(uint32_t size);
extern uint32_t func_02031624(uint32_t a, void *b, Pos p, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void *func_020159c8(void *p, uint32_t n);
extern void func_02005988(void *dst, void *src);
extern void func_02031754(void *obj, int32_t v, void *buf);
extern void func_020059cc(void *object);
extern void *func_02062a30(void *owner);
extern uint32_t func_ov012_021d24d0(void *self, uint32_t a, uint32_t b);
extern void func_02056bc0(void *object, void *node);
extern const uint32_t data_ov012_021d448c[];
extern const uint32_t data_ov012_021d4424[];
extern const uint32_t data_ov012_021d4490[];
extern void *data_020b8e44;
extern const uint32_t data_ov012_021d4688[];

void func_ov012_021d23d0(uint8_t *self, uint32_t idx)
{
    Pos pos;
    uint8_t bufA[12];
    uint8_t bufB[12];
    uint32_t ret;
    uint32_t t;
    void *obj;
    void *q;

    *(uint8_t *)(self + 0x128) = 1;
    *(uint32_t *)(self + 0x110) = 0;
    obj = *(void **)(self + 0x100);
    ((void (*)(void *))((*(void ***)obj)[11]))(obj);

    {
        uint32_t a = data_ov012_021d448c[idx * 2];
        const uint32_t *cfg = data_ov012_021d4424;
        uint32_t c = cfg[0x10];
        pos.x = a + c;
        uint32_t d = data_ov012_021d4490[idx * 2];
        pos.y = d + cfg[0x11];
    }
    if (idx >= 1) {
        pos.y -= 0x40;
    }

    ret = func_0205681c(0x118);
    if (ret != 0) {
        ret = func_02031624(ret, self + 0x110, pos, 0, 0, 0, 0);
    }
    *(uint32_t *)(self + 0x12c) = ret;

    func_02005988(bufA, func_020159c8(data_020b8e44, 0x68));
    func_02031754(*(void **)(self + 0x12c), 1, bufA);
    func_020059cc(bufA);

    func_02005988(bufB, func_020159c8(data_020b8e44, 0x69));
    func_02031754(*(void **)(self + 0x12c), -2, bufB);
    func_020059cc(bufB);

    q = func_02062a30(*(void **)(self + 0x100));

    t = func_ov012_021d24d0(self, data_ov012_021d4688[0], data_ov012_021d4688[1]);

    func_02056bc0(self + 0x14, *(void **)(self + 0x12c));
    func_02056bc0(self + 0x14, (void *)t);
    func_02056bc0(self + 0x14, q);
}
