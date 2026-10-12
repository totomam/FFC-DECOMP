#include "ffc/types.h"

typedef struct Obj {
    uint32_t w0;
    uint16_t h4;
} Obj;

typedef struct Gs {
    void *a0[4];
    Obj *a10[10];
    Obj *a38[2];
    Obj *a40[2];
    void *a48[4];
    Obj *p58;
    void *p5c;
    uint8_t b60;
    uint8_t x61;
    uint8_t x62;
    uint8_t b63;
    uint8_t x64;
    uint8_t x65;
    uint8_t b66;
    uint8_t b67;
    uint8_t b68;
} Gs;

typedef struct S3 {
    uint16_t x;
    uint16_t y;
    uint16_t z;
} S3;

typedef struct Buf {
    uint16_t a;
    uint16_t b;
    uint32_t c;
    volatile S3 s;
    uint16_t g;
} Buf;

extern S3 data_ov006_021b84b0;
extern Gs *data_ov006_021bc700[];
extern uint8_t data_ov006_021b83ae[];
extern uint8_t data_ov006_021b83b0[];
extern uint16_t data_ov006_021b83e6[];

extern void *func_ov006_021b49e4(uint32_t size, uint32_t align);
extern Obj *func_ov006_021b3e6c(uint32_t a, uint32_t b);
extern Obj *func_ov006_021b3e88(uint32_t a, uint32_t b, uint32_t c);
extern void func_ov006_021b3c04(Obj *p, int a, uint32_t b, uint32_t c);
extern void func_ov006_021b3d84(Obj *p, int a, uint32_t b);
extern void *func_ov006_021b4248(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t *e, uint32_t f);
extern void func_ov006_021b45b0(void *p, uint32_t x, uint32_t y, uint32_t z, uint32_t w, uint32_t two, uint32_t c, void *buf);
extern void *func_ov006_021b3aa0(uint32_t a, uint32_t b, uint32_t c);
extern void *func_ov006_021b570c(uint32_t a, void (*fn)(void), uint32_t b, uint32_t c);
extern void func_ov006_021a5b40(uint32_t a, uint32_t b);
extern void func_ov006_021a54fc(void);

void func_ov006_021a528c(void)
{
    struct Buf buf;
    int i;
    int j;
    int k;

    buf.s = data_ov006_021b84b0;
    buf.s.z = 0x1c;
    buf.g = 0x14;

    Gs *p = func_ov006_021b49e4(0x6c, 4);
    data_ov006_021bc700[0] = p;
    i = 0;
    p->b60 = 0x1f;
    data_ov006_021bc700[0]->b63 = i;
    data_ov006_021bc700[0]->b66 = 1;
    data_ov006_021bc700[0]->b67 = 1;
    data_ov006_021bc700[0]->b68 = 1;

    j = i;
    for (; i < 10; i++) {
        data_ov006_021bc700[0]->a10[i] = func_ov006_021b3e6c(j, 0x36);
        data_ov006_021bc700[0]->a10[i]->w0 = (data_ov006_021bc700[0]->a10[i]->w0 & 0xc1fffcff) | (2 << 8);
        data_ov006_021bc700[0]->a10[i]->h4 = (data_ov006_021bc700[0]->a10[i]->h4 & 0xfffff3ff) | (3 << 10);
    }

    k = 0;
    for (; j < 2; j++) {
        data_ov006_021bc700[0]->a38[j] = func_ov006_021b3e6c(k, data_ov006_021b83ae[j]);
        data_ov006_021bc700[0]->a38[j]->w0 = (data_ov006_021bc700[0]->a38[j]->w0 & 0xc1fffcff) | (2 << 8);
        data_ov006_021bc700[0]->a38[j]->h4 = (data_ov006_021bc700[0]->a38[j]->h4 & 0xfffff3ff) | (3 << 10);
    }

    i = 0;
    for (; k < 2; k++) {
        data_ov006_021bc700[0]->a40[k] = func_ov006_021b3e88(i, data_ov006_021b83b0[k], 1);
        func_ov006_021b3c04(data_ov006_021bc700[0]->a40[k], -1, 0x200, i);
        func_ov006_021b3d84(data_ov006_021bc700[0]->a40[k], -1, 3);
    }

    buf.b = i;

    for (i = 0; i < 4; i++) {
        j = 0;
        data_ov006_021bc700[0]->a0[i] = func_ov006_021b4248(0, 0xc, 4, 0, &buf.c, j);
        buf.s.x = j;
        k = i * 3;
        for (j = 0; j < 3; j++) {
            buf.a = data_ov006_021b83e6[k];
            func_ov006_021b45b0(data_ov006_021bc700[0]->a0[i], buf.s.x, buf.s.y, buf.s.z, buf.g, 2, 0x480, &buf);
            buf.s.x += 0x20;
            k++;
        }
        data_ov006_021bc700[0]->a48[i] = func_ov006_021b3aa0(0, buf.c, 0);
    }

    data_ov006_021bc700[0]->p58 = func_ov006_021b3e88(0, 0x44, 1);
    func_ov006_021b3c04(data_ov006_021bc700[0]->p58, -1, 0x200, 0);
    func_ov006_021b3d84(data_ov006_021bc700[0]->p58, -1, 2);
    data_ov006_021bc700[0]->p5c = func_ov006_021b570c(0, func_ov006_021a54fc, 0, 0x78);
    func_ov006_021a5b40(0, 0xc0);
}
