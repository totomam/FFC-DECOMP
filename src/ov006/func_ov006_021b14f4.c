#include "ffc/types.h"

typedef struct {
    uint8_t pad[27];
    int8_t f1b;
    uint8_t f1c;
} Obj;

extern Obj *data_ov006_021bc7f8;
extern uint8_t data_ov006_021b89f6[];
extern uint8_t data_ov006_021b8a7e[];
extern uint8_t data_ov006_021b8a04[];
extern uint8_t data_ov006_021b8a22[];
extern int8_t data_ov006_021b8a0e[];
extern int8_t data_ov006_021b8a0f[];

extern void func_ov006_021b46cc(void *a, void *b, void *c);
extern int func_ov006_021b4d94(void *p);
extern int func_ov006_021b4ca4(int x);
extern void func_ov006_021b175c(void);

void func_ov006_021b14f4(void)
{
    uint8_t buf[8];
    int i;
    int k;
    int n;
    Obj *p;
    uint8_t idx;

    i = 0;
    idx = data_ov006_021bc7f8->f1c;
    n = data_ov006_021b89f6[idx];
    if (n > 0) {
        do {
            uint8_t *a = data_ov006_021b8a7e + idx * 8;
            uint8_t *t = data_ov006_021b8a04 + idx * 2;
            uint8_t v = t[i];
            uint8_t *b = data_ov006_021b8a22 + idx * 4;
            func_ov006_021b46cc(a + v * 4, b, buf);
            if (func_ov006_021b4d94(buf) != 0) {
                data_ov006_021bc7f8->f1b = i;
                break;
            }
            i++;
            idx = data_ov006_021bc7f8->f1c;
            n = data_ov006_021b89f6[idx];
        } while (i < n);
    }

    if (func_ov006_021b4ca4(1) != 0) {
        p = data_ov006_021bc7f8;
        p->f1b = data_ov006_021b8a0e[p->f1c * 2];
    }
    if (func_ov006_021b4ca4(2) != 0) {
        p = data_ov006_021bc7f8;
        p->f1b = data_ov006_021b8a0f[p->f1c * 2];
    }

    for (k = 0; k < data_ov006_021b89f6[data_ov006_021bc7f8->f1c]; k++) {
        if (k == data_ov006_021bc7f8->f1b) {
            func_ov006_021b175c();
            return;
        }
    }
    data_ov006_021bc7f8->f1b = -1;
}
