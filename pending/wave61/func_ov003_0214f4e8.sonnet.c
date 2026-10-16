#include "ffc/types.h"
extern void func_02056c9c(void *p, int a);
extern void func_ov003_0214f604(void *p, int a);
extern uint32_t func_ov003_0214f7ec(void);
extern void func_ov003_0214f69c(void *p, int a);
extern uint8_t data_ov003_02179ab8[];
void *func_ov003_0214f4e8(uint8_t *p) {
    uint32_t i = 0;
    uint32_t z;
    func_02056c9c(p, 0);
    *(uint8_t **)p = data_ov003_02179ab8;
    z = i;
    *(uint32_t *)(p + 0x94) = i;
    do {
        *(uint32_t *)(p + 0x80 + i * 4) = z;
        i++;
    } while (i < 5);
    func_ov003_0214f604(p, 3);
    *(uint32_t *)(p + 0x94) = func_ov003_0214f7ec();
    func_ov003_0214f69c(p, 4);
    func_ov003_0214f604(p, z);
    func_ov003_0214f604(p, 1);
    func_ov003_0214f604(p, 2);
    return p;
}
