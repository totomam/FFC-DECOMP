#include "ffc/types.h"

extern uint32_t *func_ov006_021b49e4(uint32_t size, uint32_t align);
extern uint32_t func_ov006_021b3e88(uint32_t a, uint8_t b, uint32_t c);
extern void func_ov006_021b3d84(uint32_t obj, int32_t a, uint32_t b);
extern void func_ov006_021b3cec(uint32_t obj, int32_t a, int32_t b, uint16_t c);
extern void func_ov006_021b3c84(uint32_t obj, int32_t a, uint32_t b, uint8_t c);
extern uint32_t func_ov006_021b570c(uint32_t a, void (*f)(void), uint32_t b, uint32_t c);
extern void func_ov006_021b0cdc(uint32_t a);
extern void func_ov006_021b0600(uint32_t a);
extern void func_ov006_021b070c(void);

typedef struct {
    uint32_t pad;
    uint32_t *objs;
} G;

extern G data_ov006_021bc7ec;
extern uint8_t data_ov006_021b8964[];
extern uint8_t data_ov006_021b8973[];
extern uint16_t data_ov006_021b8982[];

void func_ov006_021b0660(uint32_t a) {
    int32_t i;
    int32_t m1;
    int32_t c;
    uint8_t *p1;
    uint8_t *p2;

    data_ov006_021bc7ec.objs = func_ov006_021b49e4(0x1c, 4);
    i = 0;
    m1 = i - 1;
    p1 = data_ov006_021b8964 + a * 5;
    p2 = data_ov006_021b8973 + a * 5;
    c = m1;
    c = c - 0x29;
    for (i = 0; i < 5; i++) {
        data_ov006_021bc7ec.objs[i] = func_ov006_021b3e88(1, p1[i], 1);
        func_ov006_021b3d84(data_ov006_021bc7ec.objs[i], m1, 0);
        func_ov006_021b3cec(data_ov006_021bc7ec.objs[i], m1, c, data_ov006_021b8982[i * 2 + 1]);
        func_ov006_021b3c84(data_ov006_021bc7ec.objs[i], m1, 0, p2[i]);
    }
    data_ov006_021bc7ec.objs[5] = func_ov006_021b570c(0, func_ov006_021b070c, 0, 0x78);
    func_ov006_021b0cdc(a);
    func_ov006_021b0600(0xd);
}
