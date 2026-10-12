#include "ffc/types.h"

extern uint32_t func_02056c9c(void *self, uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_02005f1c(void *object, uint32_t third);
extern void *func_0205681c(uint32_t size);
extern void func_02087620(void *object);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_020b2760;
extern uint32_t data_020b0b68;
extern uint32_t data_020b0b54;
extern uint32_t data_020b28cc;

#define INIT_OBJ(obj)                                   \
    do {                                                \
        uint32_t *o_ = (uint32_t *)(obj);               \
        uint8_t *b_ = (uint8_t *)(obj);                 \
        o_[3] = o_[3] & ~0xffu;                         \
        o_[0] = (uint32_t)&data_020b0b68;               \
        func_02087620(b_ + 0x1c);                       \
        b_[0x10] = b_[0x10] & ~0xffu;                                   \
        b_[0x11] = b_[0x11] & ~0xffu;                                   \
        b_[0x12] = b_[0x12] & ~0xffu;                                   \
        o_[5] = 0;                                      \
        o_[6] = (uint32_t)(b_ + 0x14);                  \
        o_[0] = (uint32_t)&data_020b0b54;               \
        b_[0x11] = b_[0x11] & ~0xffu;                                   \
    } while (0)

void *func_02076e1c(void *self, uint32_t a, uint32_t b, uint32_t c, uint32_t e,
                    uint32_t f, uint32_t g, uint32_t h, uint32_t i)
{
    uint32_t *w = (uint32_t *)self;
    uint32_t *obj;
    uint32_t *arr;
    uint32_t k = 0;

    func_02056c9c(self, 0, b, c);
    w[0] = (uint32_t)&data_020b2760;
    w[0x20] = a;
    w[0x21] = 4;
    w[0x24] = b;
    w[0x25] = c;
    w[0x26] = e;
    arr = (uint32_t *)((uint8_t *)self + 0x9c);
    do {
        uint32_t j = k;
        k++;
        arr[j] = j;
    } while (k < 3);
    w[0x2a] = g;
    w[0x2b] = h;
    w[0x2c] = i;
    if (f != 0) {
        func_02005f1c(&w[0x27], f);
    }

    obj = func_0205681c(0x34);
    if (obj != 0) {
        INIT_OBJ(obj);
    }
    w[0x2d] = (uint32_t)obj;
    func_02056bc0(&w[0x12], obj);

    obj = func_0205681c(0x34);
    if (obj != 0) {
        INIT_OBJ(obj);
    }
    w[0x2e] = (uint32_t)obj;
    func_02056bc0(&w[0x12], obj);

    {
        uint32_t x = data_020b28cc;
        uint32_t y = (&data_020b28cc)[1];
        w[0x22] = x;
        w[0x23] = y;
    }
    return self;
}
