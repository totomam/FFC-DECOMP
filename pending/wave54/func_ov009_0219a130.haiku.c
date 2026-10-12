#include "ffc/types.h"

typedef struct { int32_t x; int32_t y; } Pt;
typedef struct { uint32_t id; uint8_t a; uint8_t pa[3]; uint8_t b; uint8_t pb[3]; } Info;

extern void *func_02069210(void *object);
extern void *func_02015ba4(void *unused, uint32_t index);
extern void *func_ov009_0219a0f8(uint32_t v);
extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern void *func_0203b95c(void *a, void *b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_02064aa8(const void *object);
extern void func_0205f2f0(void *object, uint32_t value);
extern char data_ov009_021afa6c[];
extern void *data_020b8e44;
extern uint32_t data_ov009_021af7c0[];
extern char data_ov009_021afb04[];

void *func_ov009_0219a130(void *self0, void *a1, Pt pos, Info info, uint32_t extra)
{
    uint32_t id = info.id;
    uint8_t *self = (uint8_t *)self0;
    void *p;
    void *obj;
    void **vt;
    uint8_t buf[0x100];
    volatile int32_t rc[2][4];

    func_02069210(self0);
    *(void **)self = (void *)data_ov009_021afa6c;
    *(uint32_t *)(self + 0xac) = id;
    *(uint32_t *)(self + 0xb0) = extra;
    *(uint8_t *)(self + 0x98) = (info.a == 0);
    *(uint8_t *)(self + 0x99) = (id == 0xffff);
    if (id == 0xffff) {
        id = 1;
    }
    if (*(volatile uint8_t *)&info.b) {
        p = func_ov009_0219a0f8(((uint8_t *)func_02015ba4(data_020b8e44, id))[1]);
    } else if (id == 0) {
        p = (void *)data_ov009_021af7c0[6];
    } else {
        obj = func_02015ba4(data_020b8e44, id);
        p = buf;
        func_02086ad4(buf, (uint32_t)data_ov009_021afb04, *(uint16_t *)((uint8_t *)obj + 0x40), extra);
    }
    obj = func_0203b95c(p, a1, 2, 1);
    *(void **)(self + 0x94) = obj;

    vt = *(void ***)obj;
    ((void (*)(void *, uint32_t, uint32_t))vt[14])(obj, *(uint8_t *)(self + 0x98) + 1, 0);
    obj = *(void **)(self + 0x94);
    vt = *(void ***)obj;
    ((void (*)(void *, uint32_t, uint32_t))vt[3])(obj, (&pos)->x, (&pos)->y);
    obj = *(void **)(self + 0x94);
    vt = *(void ***)obj;
    ((void (*)(void *, uint32_t))vt[8])(obj, 2);
    func_02056bc0(self + 0x48, *(void **)(self + 0x94));
    if (*(uint8_t *)(self + 0x99)) {
        obj = *(void **)(self + 0x94);
        vt = *(void ***)obj;
        ((void (*)(void *))vt[11])(obj);
    } else {
        obj = *(void **)(self + 0x94);
        vt = *(void ***)obj;
        ((void (*)(void *))vt[10])(obj);
    }
    func_0205f2f0((void *)func_02064aa8(*(void **)(self + 0x94)), 1);

    *(int32_t *)(self + 0x9c) = (&pos)->x - 0x10;
    *(int32_t *)(self + 0xa0) = (&pos)->y - 0x10;
    *(int32_t *)(self + 0xa4) = (&pos)->x + 0x10;
    *(int32_t *)(self + 0xa8) = (&pos)->y + 0x10;
    rc[0][0] = (&pos)->x + 0x10;
    rc[0][1] = (&pos)->y + 0x10;
    rc[0][2] = (&pos)->x - 0x10;
    rc[0][3] = (&pos)->y - 0x10;
    rc[1][0] = (&pos)->x + 0x10;
    rc[1][1] = (&pos)->y + 0x10;
    rc[1][2] = (&pos)->x - 0x10;
    rc[1][3] = (&pos)->y - 0x10;
    return self0;
}
