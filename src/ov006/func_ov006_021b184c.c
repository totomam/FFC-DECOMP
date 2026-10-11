#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x1a];
    int8_t f1a;
} S;

extern S *data_ov006_021bc7f8;
extern void func_02081b78(uint32_t addr, int v);
extern void func_ov006_021b5770(int a, void (*fn)(void));
extern void func_ov006_021b1884(void);

void func_ov006_021b184c(int a) {
    S *p = data_ov006_021bc7f8;
    p->f1a = p->f1a + 1;
    func_02081b78(0x4000050, data_ov006_021bc7f8->f1a);
    if (data_ov006_021bc7f8->f1a >= 0) {
        func_ov006_021b5770(a, func_ov006_021b1884);
    }
}
