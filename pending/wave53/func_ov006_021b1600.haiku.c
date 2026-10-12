#include "ffc/types.h"

typedef struct Ctx {
    void *a;
    void *b;
    void *arr[4];
    uint8_t pad[4];
    uint8_t idx;
} Ctx;

extern void func_ov006_021b3cec(void *obj, int a, int b, int c);
extern void func_ov006_021b1714(void *obj, int a);
extern void func_ov006_021b46bc(int a, int b, int c, int d, void *e);
extern void func_ov006_021b4784(int a, int b, void *c);
extern Ctx *data_ov006_021bc7f8;
extern uint16_t data_ov006_021b8a4e[];
extern uint8_t data_ov006_021b89f6[];
extern uint16_t data_ov006_021b8a7e[];
extern uint8_t data_ov006_021b8a04[];
extern uint16_t data_ov006_021b8a68[];
extern uint16_t data_ov006_021b8a66[];

void func_ov006_021b1600(int a)
{
    int buf[2];
    int i;
    int x;
    int y;
    uint8_t idx;
    int cnt;
    uint8_t a0;
    Ctx *c;

    c = data_ov006_021bc7f8;
    func_ov006_021b3cec(c->a, -1, data_ov006_021b8a4e[c->idx * 2], a);
    c = data_ov006_021bc7f8;
    func_ov006_021b3cec(c->b, -1, data_ov006_021b8a4e[c->idx * 2] + 8, a + 8);
    c = data_ov006_021bc7f8;
    func_ov006_021b1714(c->a, a);
    c = data_ov006_021bc7f8;
    func_ov006_021b1714(c->b, a);

    i = 0;
    c = data_ov006_021bc7f8;
    idx = c->idx;
    for (; i < (int)data_ov006_021b89f6[idx]; i++) {
        uint8_t sub;
        uint16_t ea;
        uint16_t eb;
        sub = data_ov006_021b8a04[idx * 2 + i];
        ea = data_ov006_021b8a7e[idx * 4 + sub * 2];
        eb = data_ov006_021b8a7e[idx * 4 + sub * 2 + 1];
        x = a + eb - data_ov006_021b8a4e[idx * 2 + 1];
        c = data_ov006_021bc7f8;
        func_ov006_021b3cec(c->arr[i], -1, ea, x);
        c = data_ov006_021bc7f8;
        func_ov006_021b1714(c->arr[i], a);
        c = data_ov006_021bc7f8;
        idx = c->idx;
    }

    a0 = (uint8_t)a;
    if (a0 >= 0xc0) {
        x = 0;
        y = 0;
    } else {
        x = a0;
        y = a0 + data_ov006_021b8a68[idx * 2];
    }
    if (y > 0xc0) {
        y = 0xc0;
    }
    func_ov006_021b46bc(data_ov006_021b8a4e[idx * 2], x,
                        data_ov006_021b8a4e[idx * 2] + data_ov006_021b8a66[idx * 2], y, buf);
    func_ov006_021b4784(0, 0, buf);
}
