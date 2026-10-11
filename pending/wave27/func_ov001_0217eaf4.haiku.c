#include "ffc/types.h"

extern int func_ov001_0217ed8c(void *d, void *data, void *buf, int n);
extern int func_0208bf10(void *buf, void *data, void *p2, void *p3, void *p4);
extern void func_ov001_0217ea94(void *a, void *buf, void *b, int c, int d);
extern uint8_t data_ov001_02191790[];
extern uint8_t data_ov001_02191798[];

void func_ov001_0217eaf4(void *a, void *b, void *c, void *d) {
    uint8_t buf[0x40];
    uint32_t vc, v8, v4;
    if (func_ov001_0217ed8c(d, data_ov001_02191790, buf, 0x40) == 0) {
        return;
    }
    if (func_0208bf10(buf, data_ov001_02191798, &v4, &v8, &vc) != 3) {
        return;
    }
    func_ov001_0217ea94(a, &v4, b, 2, 0);
}
