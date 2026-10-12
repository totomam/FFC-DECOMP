#include "ffc/types.h"

extern char data_020b1ea4[];
extern char data_020b1eb8[];
extern char data_0213e178[];
extern void func_02087840(void);
extern void func_02056858(void *);
extern void func_02056844(void *);
extern void func_02053574(void *);
extern void func_0206c1dc(void *);
extern void func_02055abc(void *);

void *func_0206c58c(void *a0) {
    uint8_t *p = (uint8_t *)a0;
    void *r5;

    *(void **)(p + 0) = data_020b1ea4;
    *(void **)(p + 0x14) = data_020b1eb8;
    func_02087840();
    r5 = *(void **)(p + 0x3220);
    if (r5 != 0) {
        func_02056858(*(void **)((uint8_t *)r5 + 0x88));
        func_02056858(*(void **)((uint8_t *)r5 + 0x8c));
        func_02056844(r5);
    }
    *(uint32_t *)data_0213e178 = 0;
    func_02053574(*(void **)(p + 0x54));
    func_02056858(*(void **)(p + 0xf7c));
    func_02056858(*(void **)(p + 0xf78));
    func_02056858(*(void **)(p + 0x3204));
    func_02056858(*(void **)(p + 0x3208));
    func_02056858(*(void **)(p + 0x3210));
    func_02056858(*(void **)(p + 0x3214));
    func_0206c1dc(p + 0x3d);
    func_02055abc(p + 0x14);
    return p;
}
