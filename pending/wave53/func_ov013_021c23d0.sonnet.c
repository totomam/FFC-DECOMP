#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern uint64_t func_0209a978(void *obj, uint32_t n);
extern void *func_0205681c(uint32_t size);
extern void *func_02031624(void *obj, void *dst, Pair pr, uint32_t c, uint32_t d, uint32_t e);
extern void *func_020159c8(void *obj, uint32_t id);
extern void func_02005988(void *dst, void *src);
extern void func_02031754(void *obj, uint32_t id, void *item);
extern void *func_020059cc(void *object);
extern void func_02053370(void *dst, void *src, void *n);
extern void func_02056bc0(void *object, void *node);
extern void *data_020b8e44;
extern uint32_t data_ov013_021c4e5c[];
extern Pair data_ov013_021c4e4c;
extern Pair data_ov013_021c4e54;

void func_ov013_021c23d0(uint8_t *self)
{
    uint32_t mode;
    void *obj;
    uint64_t r;
    uint8_t a[12];
    uint8_t b[12];
    uint8_t c[12];

    obj = 0;
    *(uint32_t *)(self + 0xf0) = (uint32_t)obj;
    r = func_0209a978(*(void **)(self + 0xd4), 3);
    switch ((uint32_t)(r >> 32)) {
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
        obj = func_02031624(obj, self + 0xf0, *(Pair *)(self + 0xd8), 0, mode, 0);
    }

    func_02005988(a, func_020159c8(data_020b8e44, 0x1b1));
    func_02031754(obj, 0x1b1, a);
    func_020059cc(a);

    func_02005988(b, data_ov013_021c4e5c);
    func_02053370(c, b, func_020159c8(data_020b8e44, 0x1b2));
    func_02031754(obj, 0x1b2, c);
    func_020059cc(c);
    func_020059cc(b);

    func_02056bc0(*(void **)(self + 0xec), obj);

    *(Pair *)(self + 0xb8) = data_ov013_021c4e4c;
    *(Pair *)(self + 0xc0) = data_ov013_021c4e54;
}
