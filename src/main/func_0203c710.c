#include "ffc/types.h"

typedef struct { uint32_t v[3]; } V3;
typedef struct { uint32_t a; uint32_t b; } Pair;

extern void *func_0203b75c(int32_t x);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02005988(void *dst, const void *src);
extern void func_020095b8(void *dst, const void *src);
extern void func_0203943c(void *dst, const void *a, const void *b, const void *c);
extern void func_0200b65c(void *dst, const void *src);
extern void func_020059cc(void *object);
extern void *func_0205681c(uint32_t size);
extern void *func_02032d24(void *obj, Pair pr, void *c, uint32_t d, uint32_t e);
extern int8_t data_0209e51c[];
extern uint8_t data_020aecc0[];
extern uint8_t data_020aecc8[];

void *func_0203c710(uint8_t *self, int32_t off)
{
    V3 a7c, a70, a64, a58, a4c, a40, a34, a28, a1c, a10;
    Pair pr;
    int32_t flag;
    void *p, *obj;
    uint8_t *q, *s;
    int8_t idx;
    uint32_t t1, t2;
    int32_t val;
    uint32_t zero;

    val = *(int32_t *)(self + 0x8c);
    idx = (data_0209e51c + val * 6)[off];
    if (idx == -1) {
        return func_0203b75c(1);
    }

    p = func_02052d90(*(void **)(self + 0xac), *(uint32_t *)(self + 0xb0));
    t1 = *(uint32_t *)((uint8_t *)p + *(uint32_t *)((uint8_t *)p + 8) + (uint32_t)idx * 4);
    q = (uint8_t *)p + t1;
    t2 = *(uint32_t *)(q + 4);
    s = q + t2;

    func_02005988(&a7c, s);
    func_020095b8(&a70, &a7c);
    func_02005988(&a64, data_020aecc0);
    func_020095b8(&a58, self + 0xb8);
    func_0203943c(&a4c, &a70, &a64, &a58);
    func_0200b65c(&a7c, &a4c);
    func_020059cc(&a4c);
    func_020059cc(&a58);
    func_020059cc(&a64);
    func_020059cc(&a70);

    func_020095b8(&a40, &a7c);
    func_02005988(&a34, data_020aecc8);
    func_020095b8(&a28, self + 0xc4);
    func_0203943c(&a1c, &a40, &a34, &a28);
    func_0200b65c(&a7c, &a1c);
    func_020059cc(&a1c);
    func_020059cc(&a28);
    func_020059cc(&a34);
    func_020059cc(&a40);

    zero = 0;
    flag = 0;
    obj = func_0205681c(0xb0);
    if (obj != 0) {
        func_020095b8(&a10, &a7c);
        pr.a = 0x80;
        pr.b = 0x60;
        flag = 1;
        obj = func_02032d24(obj, pr, &a10, 4, zero);
    }
    if (flag) {
        func_020059cc(&a10);
    }
    func_020059cc(&a7c);
    return obj;
}
