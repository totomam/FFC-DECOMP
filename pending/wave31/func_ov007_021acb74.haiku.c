#include "ffc/types.h"

extern void func_ov007_021acbc8(uint8_t *p);
extern void func_ov007_021ab758(void *a, uint8_t b);
extern void func_ov007_021acc04(uint8_t *p);
extern void func_020697ac(uint8_t *p, void *q);

int func_ov007_021acb74(uint8_t *p) {
    uint32_t v;
    if (p[0xfc] == p[0xfd]) {
        v = 0;
    } else {
        v = *(volatile uint8_t *)(p + 0xfc) + 1;
    }
    p[0xfc] = (uint8_t)v;
    func_ov007_021acbc8(p);
    func_ov007_021ab758(*(void **)(p + 0xe0), (uint8_t)(p[0xfc] + 1));
    func_ov007_021acc04(p);
    func_020697ac(p, *(void **)(p + 0xc0));
    return 1;
}
