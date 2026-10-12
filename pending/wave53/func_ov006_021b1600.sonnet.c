#include "ffc/types.h"

typedef struct P { uint16_t a, b; } P;
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
extern Ctx *volatile data_ov006_021bc7f8;
extern P data_ov006_021b8a4e[];
extern uint8_t data_ov006_021b89f6[];
extern P data_ov006_021b8a7e[][2];
extern uint8_t data_ov006_021b8a04[][2];
extern P data_ov006_021b8a68[];
extern P data_ov006_021b8a66[];

void func_ov006_021b1600(int a)
{
    int buf[2];
    int i;
    int x;
    int y;
    int idx;
    int cnt;
    int a0;
    Ctx *c;

    c = data_ov006_021bc7f8;
    func_ov006_021b3cec(c->a, -1, data_ov006_021b8a4e[c->idx].a, a);
    c = data_ov006_021bc7f8;
    func_ov006_021b3cec(c->b, -1, data_ov006_021b8a4e[c->idx].a + 8, a + 8);
    c = data_ov006_021bc7f8;
    func_ov006_021b1714(c->a, a);
    c = data_ov006_021bc7f8;
    func_ov006_021b1714(c->b, a);

    i = 0;
    c = data_ov006_021bc7f8;
    idx = c->idx;
    for (; i < (int)data_ov006_021b89f6[idx]; i++) {
        uint8_t sub;
        c = data_ov006_021bc7f8;
        sub = data_ov006_021b8a04[idx][i];
        P *e = &data_ov006_021b8a7e[idx][sub];
        x = a + e->b - data_ov006_021b8a4e[idx].b;
        func_ov006_021b3cec(c->arr[i], -1, e->a, x);
        c = data_ov006_021bc7f8;
        func_ov006_021b1714(c->arr[i], a);
        c = data_ov006_021bc7f8;
        idx = c->idx;
    }

    a0 = a & 0xff;
    if (a0 >= 0xc0) {
        y = 0;
        x = 0;
    } else {
        x = a0;
        y = a0 + data_ov006_021b8a68[idx].a;
    }
    if (y > 0xc0) {
        y = 0xc0;
    }
    {
        int e0 = data_ov006_021b8a4e[idx].a;
        int e1 = e0 + data_ov006_021b8a66[idx].a;
        func_ov006_021b46bc(e0, x, e1, y, buf);
    }
    func_ov006_021b4784(0, 0, buf);
}
