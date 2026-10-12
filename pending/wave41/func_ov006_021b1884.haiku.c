#include "ffc/types.h"

extern void func_ov006_021b3b9c(void *p);
extern void func_ov006_021b42d8(void *p);
extern void func_ov006_021b5774(int a, void *p);
extern void func_ov006_021b49fc(void *p);
extern void *data_ov006_021bc7f8;
extern uint8_t data_ov006_021b89f6[];

void func_ov006_021b1884(void *p) {
    int i;
    int n;

    *(uint32_t *)0x04000000 = *(uint32_t *)0x04000000 & 0xffff1fff;

    func_ov006_021b3b9c(((void **)data_ov006_021bc7f8)[0]);
    func_ov006_021b3b9c(((void **)data_ov006_021bc7f8)[1]);

    i = 0;
    n = data_ov006_021b89f6[((uint8_t *)data_ov006_021bc7f8)[0x1c]];
    if (n > 0) {
        do {
            void *q = ((void **)data_ov006_021bc7f8)[2 + i];
            if (q != 0) {
                func_ov006_021b3b9c(q);
            }
            i++;
            n = data_ov006_021b89f6[((uint8_t *)data_ov006_021bc7f8)[0x1c]];
        } while (i < n);
    }

    func_ov006_021b42d8(((void **)data_ov006_021bc7f8)[4]);
    func_ov006_021b5774(1, p);
    func_ov006_021b49fc(&data_ov006_021bc7f8);
}
