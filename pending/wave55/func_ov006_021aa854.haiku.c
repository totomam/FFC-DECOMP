#include "ffc/types.h"

typedef struct {
    uint8_t a;
    uint8_t b;
    uint8_t c;
} Ent;

typedef struct {
    uint32_t w0;
    uint32_t *p4;
    Ent e[4];
    uint8_t n;
    uint8_t f15;
} Obj;

extern Obj *data_ov006_021bc784;
extern int func_ov006_021a54a8(void);
extern void func_ov006_021b0600(int);
extern void func_02084b2c(void *, int, int);
extern void func_ov006_021a54b8(int);
extern void func_ov006_021a54c8(int);
extern void func_ov006_021a54d8(int);
extern void func_ov006_021a64c8(void *);
extern int func_ov006_021aad28(void);
extern void func_ov006_021aac00(void);
extern void func_ov006_021aace0(void);
extern int func_ov006_021aaa1c(int);
extern void func_ov006_021aab88(void);
extern void func_ov006_021aaa78(void);

void func_ov006_021aa854(void)
{
    int v = func_ov006_021a54a8();

    if (v > 0 && (unsigned int)(v - 0x10) <= 3) {
        switch (v) {
        case 0x10:
            if (data_ov006_021bc784->n == 0 && data_ov006_021bc784->e[0].c == 0) {
                goto end;
            }
            func_ov006_021b0600(3);
            if (data_ov006_021bc784->e[data_ov006_021bc784->n].c == 0) {
                data_ov006_021bc784->n = data_ov006_021bc784->n - 1;
            }
            func_02084b2c(&data_ov006_021bc784->e[data_ov006_021bc784->n], 0, 3);
            if (data_ov006_021bc784->n == 0 && data_ov006_021bc784->e[0].c == 0) {
                func_ov006_021a54b8(0);
            }
            func_ov006_021a54c8(1);
            func_ov006_021a54d8(0);
            goto end;

        case 0x11:
            if (data_ov006_021bc784->n < 3 && data_ov006_021bc784->e[data_ov006_021bc784->n].c != 0) {
                func_ov006_021b0600(1);
                data_ov006_021bc784->n = data_ov006_021bc784->n + 1;
                func_ov006_021a54d8(0);
            }
            goto end;

        case 0x12:
            data_ov006_021bc784->f15 = 0;
            func_ov006_021b0600(7);
            func_ov006_021a64c8((void *)func_ov006_021aaa78);
            return;

        case 0x13:
            if (func_ov006_021aad28() == 0) {
                data_ov006_021bc784->f15 = 2;
                func_ov006_021b0600(9);
            } else {
                func_ov006_021b0600(6);
                data_ov006_021bc784->f15 = 1;
            }
            data_ov006_021bc784->n = 3;
            {
                uint32_t *r2 = data_ov006_021bc784->p4;
                *r2 = (*r2 & 0xc1fffcffu) | 0x200u;
            }
            func_ov006_021aac00();
            func_ov006_021aace0();
            func_ov006_021a64c8((void *)func_ov006_021aaa78);
            return;
        }
    }

    if (v == 0) {
        return;
    }

    if (data_ov006_021bc784->n == 3 && func_ov006_021aaa1c(0x1a) != 0) {
        goto end;
    }
    func_ov006_021b0600(1);
    {
        uint8_t *q = (uint8_t *)data_ov006_021bc784->e;
        int i3 = data_ov006_021bc784->n * 3;
        if (q[i3 + 2] == 0) {
            q[i3 + 2] = (uint8_t)v;
        } else {
            uint8_t t = q[i3 + 1];
            if (t == 0) {
                q[i3 + 1] = q[i3 + 2];
                q[i3 + 2] = (uint8_t)v;
                if (func_ov006_021aaa1c(0x1a) != 0) {
                    if (data_ov006_021bc784->n < 3) {
                        data_ov006_021bc784->n = data_ov006_021bc784->n + 1;
                    }
                }
            } else {
                q[i3] = t;
                q[i3 + 1] = q[i3 + 2];
                q[i3 + 2] = (uint8_t)v;
                if (data_ov006_021bc784->n < 3) {
                    data_ov006_021bc784->n = data_ov006_021bc784->n + 1;
                }
            }
        }
    }
    func_ov006_021a54b8(1);
    func_ov006_021a54d8(data_ov006_021bc784->n < 3 ? 1 : 0);
    if (data_ov006_021bc784->n == 3 && func_ov006_021aaa1c(0x1a) != 0) {
        func_ov006_021a54c8(0);
    }

end:
    func_ov006_021aab88();
    func_ov006_021aac00();
}
