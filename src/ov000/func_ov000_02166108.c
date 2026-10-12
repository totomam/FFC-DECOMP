#include "ffc/types.h"

typedef struct Obj {
    uint32_t f0;
    void (*f4)(void *, void *);
    void *f8;
    void *fc;
    void *f10;
    uint32_t f14;
    uint32_t f18;
    void *f1c;
    void *f20;
    uint32_t f24;
    uint32_t f28;
    uint32_t f2c;
    uint32_t f30;
} Obj;

extern void *func_ov001_021734bc(void);
extern void func_ov001_021734c4(void *a, uint32_t b);
extern void func_ov001_021734dc(void *a, void *b);
extern uint32_t func_ov001_0217332c(void *a, void *b, uint32_t c, uint32_t d, void *e, uint32_t f, uint32_t g, uint32_t h, void (*cb)(void), Obj *obj);
extern void func_ov000_021660b8(void);

void func_ov000_02166108(Obj *obj)
{
    void *r;
    r = func_ov001_021734bc();
    obj->f1c = r;
    if (r == 0) {
        obj->f30 = 1;
        obj->f2c = 1;
        return;
    }
    func_ov001_021734c4(r, 0);
    func_ov001_021734dc(obj->f1c, obj->f10);
    if (obj->f4 != 0) {
        obj->f4(obj->f1c, obj->f20);
    }
    obj->f28 = func_ov001_0217332c(obj->f8, obj->fc, 0, 0, obj->f1c, 0, 0, 0, func_ov000_021660b8, obj);
}
