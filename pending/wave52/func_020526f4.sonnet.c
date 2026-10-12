#include "ffc/types.h"

extern void func_02091a24(void *p);
extern uint32_t func_0208f42c(void);
extern uint32_t *func_0205681c(uint32_t size);
extern void func_020095b8(void *dst, void *src);
extern void func_020258b4(void *p, uint32_t q);
extern void func_02056844(void *p);
extern uint32_t data_020b04f8;
extern uint32_t data_020b04d0;

uint32_t *func_020526f4(uint32_t *owner, uint32_t *p1, uint32_t p2, uint32_t p3, uint32_t *src)
{
    uint32_t *obj;
    uint32_t *q;
    volatile struct { uint32_t pad[3]; uint32_t *lst; uint32_t *tmp; } L;


    if (owner[0] == 0xFFFFFFFFu) {
        func_02091a24(&data_020b04f8);
        func_0208f42c();
    }

    obj = func_0205681c(0x1c);
    if (obj == 0) {
        func_02091a24(&data_020b04d0);
        func_0208f42c();
    }

    L.tmp = obj;
    L.lst = owner + 1;
    q = obj + 3;
    if (q) {
        func_020095b8(q, src);
        q[3] = src[3];
    }
    obj = L.tmp;

    obj[1] = 0;
    L.tmp = 0;
    obj[0] = 0;

    q = obj + 2;
    if (q) {
        *q = (uint32_t)p1;
    }

    if (p2) {
        *(uint32_t **)p1 = obj;
    } else {
        p1[1] = (uint32_t)obj;
    }

    owner[0] = owner[0] + 1;

    func_020258b4(obj, owner[1]);

    if (p3) {
        owner[2] = (uint32_t)obj;
    }

    q = (uint32_t *)L.tmp;
    if (q) {
        func_02056844(q);
    }

    return obj;
}
