#include "ffc/types.h"

extern void *data_020b93b8;
extern uint8_t data_ov003_02179d18[];
extern void *data_0213df18;

extern void *func_0201c9ac(void *heap, uint32_t size);
extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern void func_02005988(void *a, void *b);
extern int func_02052000(void *object);
extern void *func_020059cc(void *object);
extern uint32_t func_0204f7d4(const void *object);
extern void *func_0203bb08(uint32_t a, void *b, uint32_t c, uint32_t d, uint32_t e);
extern void func_02056bc0(void *object, void *node);

typedef void (*VFn1)(void *, uint32_t);
typedef void (*VFn0)(void *);

void func_ov003_021516d4(uint8_t *self, uint32_t param)
{
    uint32_t s1[3];
    uint32_t s2[17];
    void *obj;
    void *p1;
    int flag;
    void *o;
    void **vt;

    obj = func_0201c9ac(data_020b93b8, 0x48);
    func_02086ad4(s2, (uint32_t)&data_ov003_02179d18[0], param, obj);
    p1 = s1;
    func_02005988(p1, s2);
    flag = (func_02052000(p1) == 0);
    func_020059cc(p1);
    if (flag) {
        *(uint32_t *)(self + 0xa0) = 0;
        func_02086ad4(s2, (uint32_t)data_ov003_02179d18, param, 0);
    } else {
        *(void **)(self + 0xa0) = func_0201c9ac(data_020b93b8, 0x48);
    }
    o = func_0203bb08(func_0204f7d4(data_0213df18), s2, 1, 1, 0);
    *(void **)(self + 0x84) = o;
    vt = *(void ***)o;
    ((VFn1)vt[8])(o, 2);
    o = *(void **)(self + 0x84);
    vt = *(void ***)o;
    ((VFn0)vt[10])(o);
    func_02056bc0(self + 0x48, *(void **)(self + 0x84));
}
