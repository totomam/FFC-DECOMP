#include "ffc/types.h"
extern void func_ov006_021b20f0(int a);
extern int func_0208e924(void *f, int a, void *b);
extern void func_ov006_021b2140(void);
extern void func_ov006_021b2210(void);
typedef struct { int a; uint8_t *p; } G;
extern G data_ov006_021bc800;
int func_ov006_021b21cc(void) {
    int r;
    func_ov006_021b20f0(3);
    r = ((int (*)(void *))*(uint32_t *)(data_ov006_021bc800.p + 0x13ac))(data_ov006_021bc800.p + 0x13c0);
    if (func_0208e924((void *)func_ov006_021b2210, r, data_ov006_021bc800.p + 0x13c0) != 2) {
        func_ov006_021b2140();
        func_ov006_021b20f0(9);
        return 0;
    }
    return 1;
}
