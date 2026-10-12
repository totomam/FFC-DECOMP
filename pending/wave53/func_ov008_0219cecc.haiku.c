#include "ffc/types.h"

extern void *func_0203bb94(void *p, int a, int b, int c);
extern void func_02056bc0(void *object, void *node);
extern void func_0201e9e4(void *x);
extern void func_ov005_02197cd0(void *obj, void *arg);
extern void func_0201cf34(void *a, void *b);
extern void func_ov005_021961ac(void *obj, uint8_t v);
extern void func_ov005_02196250(void *obj);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_020159c8(void *a, uint32_t b);
extern void func_02005988(void *dst, uint32_t v);
extern void *func_02008d6c(void *obj, void *arg);
extern void *func_020059cc(void *object);

extern uint8_t data_ov008_021a7f60[];
extern void *data_020b93b8;
extern uint32_t data_ov008_021a7ebc[];
extern void *data_020b8e44;

typedef struct { uint32_t f : 4; uint32_t r : 28; } Bf;

void func_ov008_0219cecc(uint8_t *p)
{
    uint32_t buf[41];
    int r7 = 1;
    int r4 = 0;
    void *obj;
    void *res;
    uint8_t v;

    obj = func_0203bb94(data_ov008_021a7f60, 1, 0, 0);
    *(void **)(p + 0x110) = obj;
    func_02056bc0(p + 0x48, obj);
    ((void (*)(void *))((void **)*(void **)*(void **)(p + 0x110))[10])(*(void **)(p + 0x110));
    ((void (*)(void *, int))((void **)*(void **)*(void **)(p + 0x110))[8])(*(void **)(p + 0x110), 2);

    func_0201e9e4(data_020b93b8);
    func_ov005_02197cd0(p, (void *)data_ov008_021a7ebc[1]);
    func_0201cf34(data_020b93b8, &buf[3]);
    v = (uint8_t)(((Bf *)&buf[10])->f);
    func_ov005_021961ac(*(void **)(p + 0xb8), v);
    func_ov005_02196250(*(void **)(p + 0xb8));

    res = func_0205681c(0xc8);
    if (res != 0) {
        func_02005988(buf, func_020159c8(data_020b8e44, 0x212));
        r4 = r7;
        res = func_02008d6c(res, buf);
    }
    func_02056bc0(p + 0x48, res);
    if (r4) {
        func_020059cc(buf);
    }
}
