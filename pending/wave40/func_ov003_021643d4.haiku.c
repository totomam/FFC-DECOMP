#include "ffc/types.h"

extern uint16_t func_ov003_021481c0(uint16_t v);
extern void func_0201d014(void *d, uint16_t hp, void *buf);
extern void func_02036c38(void *buf, uint8_t b);
extern void func_0201cff8(void *d, uint16_t hp, void *buf);
extern void *func_020424e0(void *p);
extern int func_ov003_021464f4(void *obj, uint16_t hp);
extern void func_ov003_02155bf0(int r, uint8_t b);
extern void func_ov003_02155c7c(int r, uint8_t b);
extern void *data_020b93b8;

void func_ov003_021643d4(void *self)
{
    uint8_t *p = (uint8_t *)self;
    uint8_t buf[16];
    int r;

    *(uint16_t *)(p + 0x18) = func_ov003_021481c0(*(uint16_t *)(p + 0x18));
    if (*(uint16_t *)(p + 0x18) != 0) {
        if (p[0x1b] == 0) {
            func_0201d014(data_020b93b8, *(uint16_t *)(p + 0x18), buf);
            func_02036c38(buf, p[0x1a]);
            func_0201cff8(data_020b93b8, *(uint16_t *)(p + 0x18), buf);
        }
        if (func_020424e0(*(void **)(p + 0x14)) != 0) {
            r = func_ov003_021464f4(func_020424e0(*(void **)(p + 0x14)), *(uint16_t *)(p + 0x18));
            if (r) {
                if (p[0x1b] == 0) {
                    func_ov003_02155bf0(r, p[0x1a]);
                } else {
                    func_ov003_02155c7c(r, p[0x1a]);
                }
            }
        }
    }
    *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2;
}
