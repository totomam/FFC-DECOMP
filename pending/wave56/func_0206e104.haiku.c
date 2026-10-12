#include "ffc/types.h"

extern void func_02054738(void *p);
extern void func_02056858(void *p);
extern void func_0206f37c(void *p);
extern void func_02056844(void *p);
extern void func_0206f3b0(void *p);
extern void func_0206f414(void *p);
extern void func_02055abc(void *p);
extern void func_02054844(void *p);
extern uint8_t data_020b1f20[];
extern uint8_t data_020b1f34[];
extern uint8_t data_020b1f4c[];

void *func_0206e104(void *p) {
    uint8_t *self = (uint8_t *)p;
    uint32_t i;
    void *e;

    *(void **)(self + 0x00) = data_020b1f20;
    *(void **)(self + 0x14) = data_020b1f34;
    *(void **)(self + 0x20) = data_020b1f4c;

    func_02054738(self + 0x14);
    func_02056858(*(void **)(self + 0x268));

    for (i = 0; i < *(uint32_t *)(self + 0x278); i++) {
        e = *(void **)(*(uint8_t **)(self + 0x5c) + i * 12);
        if (e != 0) {
            func_0206f37c(e);
            func_02056844(e);
        }
    }

    for (i = 0; i < *(uint32_t *)(self + 0x50); i++) {
        e = *(void **)(*(uint8_t **)(self + 0x4c) + i * 8);
        if (e != 0) {
            func_0206f37c(e);
            func_02056844(e);
        }
    }

    e = *(void **)(self + 0x58);
    if (e != 0) {
        func_0206f37c(e);
        func_02056844(e);
    }

    func_0206f3b0(self + 0x5c);
    func_0206f414(self + 0x4c);
    func_02055abc(self + 0x20);
    func_02054844(self + 0x14);
    return self;
}
