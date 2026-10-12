#include "ffc/types.h"

extern void func_ov006_021b0600(int);
extern uint32_t func_ov006_021b570c(int, void (*)(void), int, int);
extern int func_ov006_021a9e48(void);
extern void func_ov006_021a99cc(void);
extern void func_ov006_021af668(int);
extern void func_ov006_021a9d04(void);
extern void func_ov006_021a9be0(void);

typedef struct {
    uint8_t state;
    uint8_t pad;
    uint16_t timer;
    uint8_t *ext;
} G;

extern G data_ov006_021bc778;

void func_ov006_021a9d38(void)
{
    G *g = &data_ov006_021bc778;
    int run = 1;

    switch (g->state) {
    case 0:
        if (func_ov006_021a9e48() == 1) {
            run = 0;
        } else {
            g->timer = 0;
            g->state = 0;
            func_ov006_021a99cc();
            func_ov006_021af668(0);
        }
        break;
    case 1:
        if (g->timer == 0) {
            g->state = 4;
        } else {
            func_ov006_021b0600(0x13);
            *(uint32_t *)(g->ext + 0x38) = func_ov006_021b570c(0, func_ov006_021a9be0, 0, 0x78);
            return;
        }
        break;
    case 2:
        if (g->ext[0x51] > 1) {
            g->state = g->state + 1;
        } else {
            run = 0;
        }
        break;
    case 3:
        if (g->ext[0x51] > g->state + 1) {
            g->state = g->state + 1;
        } else {
            run = 0;
        }
        break;
    case 4:
        g->state = g->state - 1;
        break;
    }

    if (run) {
        if (g->ext[0x59] == 0) {
            func_ov006_021b0600(9);
            g->ext[0x59] = 1;
        }
    } else {
        func_ov006_021b0600(8);
        func_ov006_021a9d04();
    }
}
