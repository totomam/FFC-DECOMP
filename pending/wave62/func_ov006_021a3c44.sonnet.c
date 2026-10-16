#include "ffc/types.h"
extern void *func_ov006_021b42f8(int, int);
extern int func_ov006_021a6614(void *, int);
extern int func_ov006_021a3cc0(void);
extern void func_ov006_021b45b0(void *, int, int, int, int, int, int, int);
extern int func_ov006_021a6524(void);
extern void func_ov006_021b44a4(void *, int, int, int, int, int);
extern void func_ov006_021b4690(void *);
extern void *data_ov006_021bc738;
extern uint8_t data_ov006_021b80b8[];
extern uint8_t data_ov006_021b80ba[];
void func_ov006_021a3c44(int a, int b) {
    void *h = func_ov006_021b42f8(0, 0);
    int s = func_ov006_021a6614(data_ov006_021bc738, b);
    int t = func_ov006_021a3cc0();
    int i, j;
    func_ov006_021b45b0(h, 0xd, 0x3c, 0xe6, 0x5e, 2, t, s);
    i = func_ov006_021a6524();
    j = func_ov006_021a6524();
    func_ov006_021b44a4(h, *(uint16_t*)(data_ov006_021b80b8 + i*4), *(uint16_t*)(data_ov006_021b80ba + j*4), 2, 0x209, a);
    func_ov006_021b4690(h);
}
