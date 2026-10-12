#include "ffc/types.h"

extern uint8_t *data_ov006_021bc7dc;
extern int func_0208130c(int a, int b);
extern void func_ov006_021b0618(int a);
extern void func_ov006_021b062c(int a, int b);

void func_ov006_021af7f8(int x) {
    int r4;
    int r0;
    int r1;

    r4 = data_ov006_021bc7dc[0x1a] - x;
    if (r4 < 0) {
        r4 = -r4;
    }
    if (r4 < 2) {
        r0 = 0;
    } else if (r4 < 6) {
        r0 = func_0208130c(0x7f, 6 - r4);
    } else {
        r0 = 0x7f;
    }
    func_ov006_021b0618(r0);
    if (r4 < 2) {
        r1 = ~0xff;
    } else if (r4 < 6) {
        r1 = func_0208130c(0x200, 6 - r4) - (6 + 0xfa);
    } else {
        r1 = 0x100;
    }
    func_ov006_021b062c(0xffff, r1);
}
