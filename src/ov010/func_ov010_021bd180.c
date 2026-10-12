#include "ffc/types.h"

extern void *func_02069210(void *object);
extern void *func_0203b95c(void *a, void *b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_02064aa8(const void *object);
extern void func_0205f2f0(void *object, uint32_t value);
extern uint32_t data_020a7de4[];
extern uint32_t data_ov010_021d12e0[];

typedef struct { uint32_t a; uint32_t b; } S3;

void *func_ov010_021bd180(void *a0, void *a1, void *a2, void *a3)
{
    uint8_t *self = (uint8_t *)a0;
    uint8_t *p1 = (uint8_t *)a1;
    void *r;
    uint32_t *vt;

    func_02069210(a0);
    *(void **)self = data_020a7de4;
    *(uint32_t *)(self + 0x94) = 0;
    *(void **)self = data_ov010_021d12e0;
    *(void **)(self + 0x98) = a1;
    *(void **)(self + 0x9c) = 0;

    r = func_0203b95c(a2, *(void **)(p1 + 0xb8), 2, 1);
    *(void **)(self + 0x9c) = r;
    vt = *(uint32_t **)r;
    ((void (*)(void *, uint32_t, uint32_t))vt[0x38 / 4])(r, 1, 0);

    r = *(void **)(self + 0x9c);
    {
        vt = *(uint32_t **)r;
        ((void (*)(void *, S3))vt[0xc / 4])(r, *(S3 *)a3);
    }

    r = *(void **)(self + 0x9c);
    vt = *(uint32_t **)r;
    ((void (*)(void *, uint32_t))vt[0x20 / 4])(r, 1);

    r = *(void **)(self + 0x9c);
    vt = *(uint32_t **)r;
    ((void (*)(void *))vt[0x28 / 4])(r);

    func_02056bc0(self + 0x48, *(void **)(self + 0x9c));
    func_0205f2f0((void *)func_02064aa8(*(void **)(self + 0x9c)), 1);

    *(uint32_t *)(self + 0x94) = *(uint32_t *)(*(uint8_t **)(self + 0x98) + 0x104);
    return a0;
}
