#include "ffc/types.h"

struct Pair {
    int32_t a;
    int32_t b;
};

struct Pair2 {
    uint32_t a;
    uint32_t b;
};

extern void func_02021338(uint32_t v);
extern void func_01ffcb8c(uint32_t v);
extern void func_01ffd904(uint32_t a, uint32_t b);
extern void func_01ffe5f0(uint32_t a, uint32_t b);
extern uint32_t func_020817c8(int32_t first, int32_t second);
extern int32_t func_02081210(int32_t a, int32_t b);
extern uint32_t func_ov004_021530fc(uint32_t v);
extern void func_0206c1a0(int32_t *out, uint32_t v);
extern void *func_ov004_0214e618(uint32_t a, struct Pair p);
extern void func_02056bc0(void *object, void *node);
extern void *func_0205681c(uint32_t size);
extern void *func_02056f0c(void *node, uint32_t v);
extern struct Pair2 data_ov004_02157a1c;

struct Frame {
    int32_t sv[3];
    int32_t pad[14];
    int32_t t1[5];
    int32_t t2[3];
    struct Pair pair;
    int32_t tail[2];
};

void func_ov004_021459e8(uint8_t *self)
{
    uint8_t *r7;
    int32_t i;
    struct Frame f;
    void *obj;

    if (self[0xa4]) {
        func_02021338(0xa1);
        func_01ffcb8c(*(uint32_t *)(self + 0x94));
        func_01ffd904(*(uint32_t *)(self + 0x94), 0);
        func_01ffe5f0(*(uint32_t *)(self + 0x94), (uint16_t)*(uint32_t *)(self + 0xa8));
    }

    r7 = self;
    i = 8;
    r7 += 0x14;
    for (; i >= 0; i--) {
        if (self[0xa4]) {
            uint32_t r4;

            r4 = func_020817c8(i << 12, 0x2000);
            f.sv[0] = func_02081210((int32_t)r4, 0x2000);
            func_0206c1a0(&f.t1[0], func_ov004_021530fc(*(uint32_t *)(self + 0x88)));
            f.sv[1] = (int32_t)func_020817c8((int32_t)r4, f.t1[0]) - f.sv[0];
            f.sv[2] = func_02081210((int32_t)r4, 0x2000);
            func_0206c1a0(&f.t2[0], func_ov004_021530fc(*(uint32_t *)(self + 0x88)));
            f.pair.a = ((int32_t)func_020817c8((int32_t)r4, f.t2[0]) - f.sv[2]) >> 12;
            f.pair.b = f.sv[1] >> 12;
            obj = func_ov004_0214e618(*(uint32_t *)(self + 0x8c), f.pair);
            func_02056bc0(r7, obj);
        }
        obj = func_0205681c(0x18);
        if (obj) {
            obj = func_02056f0c(obj, 1);
        }
        func_02056bc0(r7, obj);
    }

    *(struct Pair2 *)(self + 0x80) = data_ov004_02157a1c;
}
