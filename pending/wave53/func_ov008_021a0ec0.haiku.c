#include "ffc/types.h"

extern void *func_0203bb94(void *a, int b, int c, int d);
extern void func_02056bc0(void *object, void *node);
extern void func_0201e9e4(void *a);
extern void func_ov005_02197cd0(void *a, void *b);
extern void func_0201cf34(void *a, void *b);
extern void func_ov005_021961ac(void *a, uint8_t b);

typedef struct { uint32_t lo:4; uint32_t rest:28; } Bits4;
extern void func_ov005_02196250(void *a);
extern void *func_0205681c(int size);
extern void *func_020159c8(void *a, int b);
extern void func_02005988(void *a, void *b);
extern void *func_02008d6c(void *a, void *b);
extern void *func_020059cc(void *object);

extern char data_ov008_021a890c[];
extern void *data_020b93b8;
extern uint32_t data_ov008_021a87c8[];
extern void *data_020b8e44;

void func_ov008_021a0ec0(uint8_t *self)
{
    uint32_t local[0x29];
    void *obj;
    void *r6;
    int r4;
    int r7;

    r4 = 0;
    r7 = 1;
    obj = func_0203bb94(data_ov008_021a890c, 1, 0, 0);
    *(void **)(self + 0x110) = obj;
    func_02056bc0(self + 0x48, obj);

    obj = *(void **)(self + 0x110);
    ((void (*)(void *))((*(void ***)obj)[10]))(obj);
    obj = *(void **)(self + 0x110);
    ((void (*)(void *, int))((*(void ***)obj)[8]))(obj, 2);

    func_0201e9e4(data_020b93b8);
    func_ov005_02197cd0(self, (void *)data_ov008_021a87c8[1]);
    func_0201cf34(data_020b93b8, &local[3]);

    func_ov005_021961ac(*(void **)(self + 0xb8), ((Bits4 *)&local[10])->lo);
    func_ov005_02196250(*(void **)(self + 0xb8));

    r6 = func_0205681c(0xc8);
    if (r6 != 0) {
        void *t = func_020159c8(data_020b8e44, 0x214);
        func_02005988(&local[0], t);
        r4 = r7;
        r6 = func_02008d6c(r6, &local[0]);
    }
    func_02056bc0(self + 0x48, r6);

    if (r4 != 0) {
        func_020059cc(&local[0]);
    }
}
