#include "ffc/types.h"

extern void func_02021338(uint32_t x);
extern void *func_020655dc(void *obj, uint32_t a, uint32_t b);
extern void *func_020655b8(void *obj);
extern void func_02056bc0(void *object, void *node);

typedef struct {
    uint8_t head[0x14];
    uint8_t inner[0x84];
    void *sub;
} Obj;

void func_ov007_021b09ac(Obj *p) {
    void *n4;
    void *n6;
    void *n1;
    void *obj;

    func_02021338(0xb3);
    n4 = func_020655dc(p->sub, 3, 2);
    n6 = func_020655b8(p->sub);
    n1 = func_020655dc(p->sub, 4, 1);
    obj = p->inner;
    func_02056bc0(obj, n1);
    func_02056bc0(obj, n6);
    func_02056bc0(obj, n4);
}
