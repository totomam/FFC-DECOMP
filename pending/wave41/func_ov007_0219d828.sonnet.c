#include "ffc/types.h"

extern void func_ov007_0219bedc(uint8_t *a, int b);
extern void *func_0205681c(uint32_t size);
extern void func_020694ac(void *obj, void *arg, int z);
extern void func_020696f8(void *p);
extern void func_02056bc0(void *object, void *node);
extern void *func_ov007_0219c308(uint8_t *a, int b, int c);
extern uint32_t data_ov007_021c2e28[];

typedef struct Vt {
    void (*f0)(void *);
    void (*f1)(void *);
    void (*f2)(void *);
} Vt;

typedef struct Obj {
    Vt *vt;
} Obj;

void func_ov007_0219d828(uint8_t *a)
{
    Obj *obj;
    uint32_t val;
    void *r1;

    func_ov007_0219bedc(a, 3);
    obj = (Obj *)func_0205681c(0xdc);
    if (obj != 0) {
        val = *(uint32_t *)(a + 0xdc);
        func_020694ac(obj, *(void **)(a + 0x8c), 0);
        *(void **)obj = data_ov007_021c2e28;
        *(uint8_t **)((uint8_t *)obj + 0xb8) = a + 0xd0;
        *(uint32_t *)((uint8_t *)obj + 0xbc) = val;
        *(uint8_t **)((uint8_t *)obj + 0xd8) = a;
    }
    *(Obj **)(a + 0xa4) = obj;
    if ((int8_t)*(uint32_t *)((uint8_t *)obj + 0xc) == 0) {
        obj->vt->f2(obj);
    }
    func_020696f8(*(void **)(a + 0xa4));
    func_02056bc0(*(void **)(a + 0xc8), *(void **)(a + 0xa4));
    r1 = func_ov007_0219c308(a, 3, 1);
    func_02056bc0(a + 0x14, r1);
}
