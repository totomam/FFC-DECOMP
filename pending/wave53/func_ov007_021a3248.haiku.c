#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern uint64_t func_0209a978(uint32_t a, uint32_t b);
extern void *func_0205681c(uint32_t size);
extern void *func_02031624(void *obj, void *p, Pair v, uint32_t c, uint32_t mode, uint32_t e);
extern void *func_020159c8(void *h, uint32_t id);
extern void *func_02005988(void *dst, void *src);
extern void func_02031754(void *obj, uint32_t id, void *s);
extern void *func_020059cc(void *object);
extern void func_02053370(void *dst, void *src, void *x);
extern void func_02056bc0(void *object, void *node);
extern void *data_020b8e44;
extern char data_ov007_021c413c[];
extern Pair data_ov007_021c41a4;
extern Pair data_ov007_021c41ac;

void func_ov007_021a3248(void *self)
{
    uint8_t *s = (uint8_t *)self;
    void *obj = 0;
    uint32_t mode;
    uint32_t t1[3];
    uint32_t t2[3];
    uint32_t t3[3];
    uint64_t r;
    uint32_t sel;

    *(uint32_t *)(s + 0xf0) = 0;
    r = func_0209a978(*(uint32_t *)(s + 0xd4), 3);
    sel = (uint32_t)(r >> 32);
    switch (sel) {
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
    if (obj) {
        obj = func_02031624(obj, s + 0xf0, *(Pair *)(s + 0xd8), 0, mode, 0);
    }

    {
        void *h = func_020159c8(data_020b8e44, 0x21);
        func_02005988(t1, h);
        func_02031754(obj, 0x21, t1);
        func_020059cc(t1);
    }
    func_02005988(t2, data_ov007_021c413c);
    {
        void *h = func_020159c8(data_020b8e44, 0x22);
        func_02053370(t3, t2, h);
        func_02031754(obj, 0x22, t3);
        func_020059cc(t3);
    }
    func_020059cc(t2);

    func_02056bc0(*(void **)(s + 0xec), obj);

    *(Pair *)(s + 0xb8) = data_ov007_021c41a4;
    *(Pair *)(s + 0xc0) = data_ov007_021c41ac;
}
