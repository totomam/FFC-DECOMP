#include "ffc/types.h"

typedef struct {
    uint32_t b;
    uint32_t a;
} Pair;

extern void func_0201ba14(void *out, void *a, void *b, int c);
extern void *func_02056aec(void *p);
extern void *func_0205681c(uint32_t size);
extern void *func_ov003_0216602c(void *alloc, void *a, int b, int c, int d, int e, int f);
extern uint32_t func_0203eaac(void *obj, Pair p, int c, int d);
extern uint32_t func_0203eafc(void *obj, Pair p, int c);
extern void *func_0203d938(void *obj, int a, void *out);
extern void func_02056bc0(void *obj, void *node);
extern void *func_020059cc(void *obj);
extern void *data_020b93b8;
extern Pair data_020aef48;
extern Pair data_020aef50;

void func_0203e9c8(uint8_t *self)
{
    uint32_t buf[3];
    uint32_t b;
    uint32_t a;
    int one = 1;
    void *r7;
    void *r6;
    void *r4;
    void *n;
    void *list;

    func_0201ba14(buf, data_020b93b8, self + 0xa0, one);
    r7 = func_02056aec(self);
    r6 = func_0205681c(0x9c);
    if (r6 != 0) {
        r6 = func_ov003_0216602c(r6, *(void **)(self + 0x88), 0, 0, 0xf, one, 0);
    }
    a = func_0203eaac(*(void **)(self + 0x88), data_020aef48, 0, 0);
    b = func_0203eafc(*(void **)(self + 0x88), data_020aef50, 0);
    r4 = func_0205681c(0x9c);
    if (r4 != 0) {
        r4 = func_ov003_0216602c(r4, *(void **)(self + 0x88), 5, 0, 0x1e, 1, 0);
    }
    n = func_0203d938(self, 0x10, buf);
    list = (void *)(self + 0x14);
    func_02056bc0(list, n);
    func_02056bc0(list, r4);
    func_02056bc0(list, (void *)b);
    func_02056bc0(list, (void *)a);
    func_02056bc0(list, r6);
    func_02056bc0(list, r7);
    func_020059cc(buf);
}
