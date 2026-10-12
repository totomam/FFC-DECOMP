#include "ffc/types.h"

extern void func_02036750(void *p);
extern uint32_t func_0201b924(const void *object);
extern void func_0201f1f0(void *a, uint32_t b, void *c);
extern int func_02036994(void *p, uint32_t i);
extern void func_0201f600(void *a, uint32_t i, void *c, void *d);
extern void func_020367a8(void *p);
extern void *data_020b93b8;

void func_020483ac(uint8_t *obj)
{
    uint8_t buf[0x58];
    uint32_t i;
    uint32_t v;

    func_02036750(buf);
    v = func_0201b924(data_020b93b8);
    func_0201f1f0(data_020b93b8, v, buf);
    for (i = 0; i < 5; i++) {
        if (func_02036994(buf, i) != 0) {
            func_0201f600(data_020b93b8, i, buf, obj + 0x94 + i * 0x60);
        }
    }
    func_020367a8(buf);
}
