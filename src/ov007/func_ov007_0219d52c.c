#include "ffc/types.h"

typedef struct { uint32_t a, b; } S;
extern void func_02021240(int a, int b);
extern void *func_02056aec(void *p);
extern void *func_0203c0a8(uint32_t n);
extern void *func_0203c094(uint32_t n);
extern void *func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov007_021c2f80[];

void func_ov007_0219d52c(void *a) {
    uint8_t *self = (uint8_t *)a;
    uint32_t state = *(uint32_t *)(self + 0xd0);
    void *sp0;
    void *r4;
    void *r6;
    void *r7;

    switch (state) {
    case 0:
        goto main_path;
    case 2:
        goto copy;
    case 0xd:
    case 0xe:
        func_02021240(-1, 0x1e);
        goto main_path;
    default:
        return;
    }

main_path:
    **(uint32_t **)(self + 0x88) = *(uint32_t *)(self + 0xd0);
    r7 = func_02056aec(self);
    sp0 = func_0203c0a8(0x3c);
    r4 = func_0203c094(0x3c);
    r6 = func_0203b6fc();
    func_02056bc0(r6, r4);
    func_02056bc0(r6, sp0);
    a = (uint8_t *)a + 0x14;
    func_02056bc0(a, r6);
    func_02056bc0(a, r7);
    return;

copy:
    *(S *)(self + 0x80) = *(S *)data_ov007_021c2f80;
}
