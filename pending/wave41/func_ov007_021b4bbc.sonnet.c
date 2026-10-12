#include "ffc/types.h"

typedef struct Vt {
    uint8_t pad0[0x20];
    void (*m20)(void *, uint32_t);
    uint32_t pad24;
    void (*m28)(void *);
    uint8_t pad2c[0xc];
    void (*m38)(void *, uint32_t, uint32_t);
} Vt;

typedef struct Obj {
    Vt *vt;
} Obj;

extern void func_02056c4c(void *p);
extern Obj *func_0203b95c(void *entry, void *obj, uint32_t a, uint32_t b);
extern uint32_t func_02064390(void *object, uint32_t first, uint32_t second);
extern void func_02056bc0(void *object, void *node);
extern void *data_ov007_021c6468[];
extern void *data_ov007_021c6488[];

void func_ov007_021b4bbc(void *self)
{
    uint8_t *p = (uint8_t *)self;
    Obj *obj;
    void *entry;

    func_02056c4c(*(void **)(p + 0xe0));
    if (*(uint32_t *)(p + 0xe8) == 0) {
        entry = data_ov007_021c6468[p[0xec] - 1];
    } else {
        entry = data_ov007_021c6488[p[0xec] - 1];
    }
    obj = func_0203b95c(entry, *(void **)(p + 0xdc), 2, 1);
    obj->vt->m38(obj, 2, 0);
    func_02064390(obj, 0x7f, 0x30);
    obj->vt->m20(obj, 2);
    obj->vt->m28(obj);
    func_02056bc0(*(void **)(p + 0xe0), obj);
}
