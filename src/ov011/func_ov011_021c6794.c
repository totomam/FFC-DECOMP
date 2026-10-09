#include "ffc/types.h"

typedef void (*VFn)(void *, uint32_t, uint32_t);
typedef struct {
    VFn slots[16];
} VTable;
typedef struct {
    VTable *vt;
} Obj;

extern void func_ov011_021c6554(void *p);
extern void func_02021338(uint32_t v);

void func_ov011_021c6794(uint8_t *p)
{
    Obj *o = *(Obj **)(p + 0x94);
    o->vt->slots[14](o, 4, 1);
    func_ov011_021c6554(*(void **)(p + 0x98));
    func_02021338(0xb3);
}
