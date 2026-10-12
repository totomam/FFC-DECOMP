#include "ffc/types.h"

typedef struct Obj {
    void **vt;
} Obj;

extern uint32_t data_ov007_021c3270[];
extern uint32_t data_ov007_021c3268[];
extern Obj *func_0203bb94(void *, int, int, int);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_0203c030(uint32_t object);
extern uint32_t func_0203c01c(uint32_t object);
extern uint32_t func_0203b6fc(uint32_t object);
extern void *func_0205681c(uint32_t size);
extern void *func_ov007_0219baf8(void *p);

void func_ov007_0219f194(uint8_t *p)
{
    Obj *obj;
    void **vt;
    uint32_t a, b, c;
    void *r;
    uint32_t v0, v1;

    if (p[0x90] != 0) {
        obj = func_0203bb94(data_ov007_021c3270, 1, 0, 0);
        vt = obj->vt;
        ((void (*)(Obj *, int))vt[8])(obj, 3);
        ((void (*)(Obj *))obj->vt[10])(obj);
        func_02056bc0(p + 0x48, obj);
        a = func_0203c030(0x1e);
        b = func_0203c01c(0x1e);
        c = func_0203b6fc(b);
        func_02056bc0((void *)c, (void *)b);
        func_02056bc0((void *)c, (void *)a);
        func_02056bc0(p + 0x14, (void *)c);
    }

    r = func_0205681c(0x84);
    if (r != 0) {
        r = func_ov007_0219baf8(r);
    }
    *(void **)(p + 0x98) = r;
    func_02056bc0(p + 0x48, r);
    v0 = data_ov007_021c3268[0];
    v1 = data_ov007_021c3268[1];
    *(uint32_t *)(p + 0x80) = v0;
    *(uint32_t *)(p + 0x84) = v1;
}
