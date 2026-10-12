#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S8;

extern void *func_0205681c(uint32_t size);
extern void *func_ov013_021c0a70(void *a, void *b, void *c);
extern void *func_020159c8(void *obj, int id);
extern void func_02005988(void *obj, void *src);
extern void *func_02033094(void *obj, void *p, int a, S8 s, int d, int e);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);
extern void func_ov013_021c132c(void *p);
extern void *data_020b8e44;
extern uint32_t data_ov013_021c4898[];
extern uint32_t data_ov013_021c4b54[];

void func_ov013_021c15fc(void *a0)
{
    uint8_t *p = (uint8_t *)a0;
    void *r6;
    void *r7;
    void *v;
    uint32_t loc[3];
    int flag = 0;

    r6 = func_0205681c(0xd0);
    if (r6 != 0) {
        r6 = func_ov013_021c0a70(r6, p + 0xe8, p + 0xe9);
    }
    *(void **)(p + 0xf0) = r6;

    r7 = func_0205681c(0xa4);
    if (r7 != 0) {
        void *o = func_020159c8(data_020b8e44, 0x1b7);
        func_02005988(loc, o);
        flag = 1;
        r7 = func_02033094(r7, loc, 1, *(S8 *)&data_ov013_021c4898[17], 4, 0);
    }

    v = *(void **)(p + 0xe4);
    func_02056bc0(v, r7);
    func_02056bc0(v, r6);
    if (flag) {
        func_020059cc(loc);
    }
    func_ov013_021c132c(p);
    *(S8 *)(p + 0xb8) = *(S8 *)data_ov013_021c4b54;
}
