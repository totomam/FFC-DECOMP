#include "ffc/types.h"

extern uint64_t func_0209a978(uint32_t a, uint32_t b);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *a, uint32_t b);
extern void func_02005988(void *dst, void *src);
extern void func_02031754(void *a, uint32_t b, void *c);
extern void func_02053370(void *dst, void *a, void *b);
extern void *func_020059cc(void *object);
extern void func_02056bc0(void *object, void *node);
extern void *data_020b8e44;
typedef struct { uint32_t a; uint32_t b; } Pair;
extern void *func_02031624(void *a, void *b, Pair c, uint32_t e, uint32_t f, uint32_t g);
extern uint8_t data_ov007_021c413c[];
extern uint32_t data_ov007_021c412c[];
extern uint32_t data_ov007_021c4134[];

void func_ov007_021a28c0(void *self)
{
    uint8_t *p = (uint8_t *)self;
    uint32_t mode;
    uint64_t r;
    uint32_t t;
    void *obj;
    uint8_t b3[12];
    uint8_t b2[12];
    uint8_t b1[12];
    int f;
    void *t2;
    uint32_t v0, v1;

    *(uint32_t *)(p + 0xf0) = 0;
    r = func_0209a978(*(uint32_t *)(p + 0xd4), 3);
    t = (uint32_t)(r >> 32);
    switch (t) {
    case 0:
        mode = 0;
        break;
    case 1:
        mode = 5;
        break;
    case 2:
        mode = 1;
        break;
    }

    obj = func_0205681c(0x118);
    if (obj != 0) {
        {
            obj = func_02031624(obj, p + 0xf0, *(Pair *)(p + 0xd8), 0, mode, 0);
        }
    }

    func_02005988(b3, func_020159c8(data_020b8e44, 0x1f));
    func_02031754(obj, 0x1f, b3);

    func_02005988(b2, data_ov007_021c413c);

    t2 = func_020159c8(data_020b8e44, 0x20);
    f = 1;
    func_02053370(b1, b2, t2);
    func_02031754(obj, 0x20, b1);

    if (f != 0) {
        func_020059cc(b1);
    }
    if (f != 0) {
        func_020059cc(b2);
    }
    func_020059cc(b3);

    func_02056bc0(*(void **)(p + 0xec), obj);

    v0 = data_ov007_021c412c[0];
    v1 = data_ov007_021c412c[1];
    *(uint32_t *)(p + 0xb8) = v0;
    *(uint32_t *)(p + 0xbc) = v1;

    v0 = data_ov007_021c4134[0];
    v1 = data_ov007_021c4134[1];
    *(uint32_t *)(p + 0xc0) = v0;
    *(uint32_t *)(p + 0xc4) = v1;
}
