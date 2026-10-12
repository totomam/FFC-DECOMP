#include "ffc/types.h"

extern void *func_020424e0(void *p);
extern void func_ov003_0214d570(void *p, int v);
extern void *func_ov003_0214d454(void *p);
extern void func_02056bc0(void *object, void *node);
extern void func_ov003_02149768(void *a, int b, int c, int d, int e);
extern void *func_ov003_02149850(void *p);
extern void *func_0203b720(void);
extern void *func_02056aec(void *p);

void func_ov003_0216607c(void *self)
{
    uint8_t *p = (uint8_t *)self;
    int prev;
    int state;
    void *r;

    prev = *(int *)(p + 0x98);
    *(int *)(p + 0x98) = *(int *)(p + 0x98) + 1;

    switch (prev) {
    case 0:
        state = *(int *)(p + 0x88);
        switch (state) {
        case 0:
        case 2:
        case 4:
        case 6:
            r = func_020424e0(*(void **)(p + 0x80));
            func_ov003_0214d570(r, 1);
            r = func_020424e0(*(void **)(p + 0x80));
            r = func_ov003_0214d454(r);
            func_02056bc0(p + 0x14, r);
            break;
        default:
            break;
        }
        break;
    case 1:
        r = func_020424e0(*(void **)(p + 0x80));
        func_ov003_02149768(r, *(int *)(p + 0x84), *(int *)(p + 0x88),
                            *(int *)(p + 0x8c), *(int *)(p + 0x94));
        if (*(uint8_t *)(p + 0x90) != 0 || *(unsigned int *)(p + 0x8c) < 2) {
            r = func_ov003_02149850(func_020424e0(*(void **)(p + 0x80)));
        } else {
            r = func_0203b720();
        }
        func_02056bc0(p + 0x14, r);
        r = func_02056aec(p);
        func_02056bc0(p + 0x14, r);
        break;
    default:
        break;
    }
}
