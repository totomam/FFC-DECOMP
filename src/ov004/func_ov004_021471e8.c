#include "ffc/types.h"

extern uint32_t func_0203c250(void);
extern uint32_t func_02060eb4(void);
extern uint32_t func_0204f7ec(const void *object);
extern uint32_t func_0204f7d4(const void *object);
extern uint32_t func_0203b84c(uint32_t a, uint32_t v);
extern void *func_0205681c(uint32_t size);
extern void func_02005988(void *object, uint32_t v);
extern void *func_0200d7bc(void *a, void *b, uint32_t c, uint32_t d, uint32_t e);
extern void *func_020059cc(void *object);
extern uint32_t func_02064390(void *object, uint32_t first, uint32_t second);
extern void func_0200d804(void *a, uint32_t b);
extern void func_02056bc0(void *object, void *node);

extern uint32_t data_0213df18;
extern uint32_t data_ov004_02157b7c[];
extern uint32_t data_0209e08c[];
extern uint32_t data_ov004_02157da4[];

typedef struct { uint32_t a; uint32_t b; } Pair;

void func_ov004_021471e8(uint8_t *self)
{
    uint32_t local[3];
    uint32_t *obj;
    uint32_t i;
    uint32_t r7;
    uint32_t flag;
    uint32_t t;
    uint8_t *p;
    void *ptr;

    func_0203c250();
    if (func_02060eb4() == 0) {
        t = func_0204f7ec((const void *)data_0213df18);
    } else {
        t = func_0204f7d4((const void *)data_0213df18);
    }
    r7 = func_0203b84c(t, 5);
    flag = 0;
    ptr = func_0205681c(0x8c);
    if (ptr != 0) {
        func_02005988(local, data_ov004_02157b7c[4]);
        flag = 1;
        ptr = func_0200d7bc(ptr, local, r7, 0, flag);
    }
    *(void **)(self + 0x90) = ptr;
    if (flag != 0) {
        func_020059cc(local);
    }
    func_02064390(*(void **)(self + 0x90), 0x80, 0x60);
    for (i = 0; i < 5; i++) {
        func_0200d804(*(void **)(self + 0x90), data_0209e08c[i]);
    }
    obj = *(uint32_t **)(self + 0x90);
    ((void (*)(void *))((void **)obj[0])[10])(obj);
    obj = *(uint32_t **)(self + 0x90);
    ((void (*)(void *, uint32_t, uint32_t))((void **)obj[0])[14])(obj, 1, 0);
    p = self + 0x48;
    func_02056bc0(p, *(void **)(self + 0x90));
    func_02056bc0(p, (void *)r7);
    *(Pair *)(self + 0x80) = *(Pair *)data_ov004_02157da4;
}
