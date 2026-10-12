#include "ffc/types.h"

typedef struct {
    uint32_t v[6];
} Item;

extern void *data_020b93b8;
extern void *data_020b8e44;
extern uint32_t data_ov007_021c4300[2];
extern uint32_t data_ov007_021c4308[2];

extern void func_0201f0f8(void *a, uint32_t b, void *c);
extern uint32_t func_02036d20(void *obj);
extern void func_ov007_021a6cd0(void *a, uint32_t b);
extern uint32_t func_02036cd8(const void *obj);
extern void func_0201d1a4(void *a, uint32_t b, void *c);
extern uint32_t func_02036f1c(void *obj);
extern void func_02036e54(void *a, uint32_t b);
extern void func_ov007_021a6c9c(void *a, void *b, uint32_t c);
extern void func_0201f0cc(void *a, uint32_t b, void *c);
extern void func_0201f174(void *a);
extern void func_02084b2c(void *dst, int c, uint32_t n);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_020159c8(void *a, uint32_t b);
extern void func_02005988(void *out, uint32_t b);
extern void *func_02033094(void *obj, void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_020059cc(void *obj);
extern void func_02056bc0(void *obj, void *node);
extern uint32_t func_02056aec(void *obj);
extern void *func_02008ce8(void *a, void *b, void *c, uint32_t d);
extern uint32_t func_ov007_0219b460(void *a, uint32_t b, uint32_t c, uint32_t d);

void func_ov007_021a5a0c(void *self)
{
    uint8_t *p = (uint8_t *)self;
    uint8_t *volatile v1c;
    uint8_t *volatile v18;
    uint8_t *volatile v14;
    uint8_t *volatile v10;
    uint32_t i;
    uint32_t tmp2c;
    uint32_t buf30[3];
    Item tmp;
    uint8_t flag;
    uint32_t sz[2];
    void *obj;
    uint32_t n;
    void *a6;
    uint32_t r7;
    void *b6;
    void *r4;
    int r6;

    i = 0;
    if (*(uint32_t *)(p + 0xcc) > 0) {
        v18 = p;
        v18 = p + 0xd4;
        v1c = p;
        v1c = p + 0xd0;
        v14 = p;
        v14 = p + 0xd8;
        v10 = p;
        v10 = p + 0xe0;
        do {
            func_0201f0f8(data_020b93b8, ((uint32_t *)*(void **)(p + 0xc8))[i], &tmp);
            func_ov007_021a6cd0(v10, func_02036d20(&tmp));
            func_0201d1a4(data_020b93b8, func_02036cd8(&tmp), &tmp2c);
            func_02036e54(&tmp, func_02036f1c(&tmp2c));
            if (*(uint32_t *)(p + 0xd8) < *(uint32_t *)(p + 0xdc)) {
                Item *e = (Item *)(*(uint8_t **)(p + 0xd4) + *(uint32_t *)(p + 0xd8) * 0x18);
                if (e != 0) {
                    *e = tmp;
                }
                (*(uint32_t *)v14)++;
            } else {
                flag = 0;
                func_ov007_021a6c9c(*(void **)v18, &tmp, flag);
            }
            func_02084b2c(&tmp, 0, 0x18);
            func_0201f0cc(data_020b93b8, ((uint32_t *)*(void **)(p + 0xc8))[i], &tmp);
            i++;
        } while (i < *(uint32_t *)(p + 0xcc));
    }
    func_0201f174(data_020b93b8);
    obj = func_0205681c(0xa4);
    r4 = obj;
    r6 = 0;
    if (r4 != 0) {
        sz[0] = 0x80;
        sz[1] = 0x60;
        func_02005988(buf30, func_020159c8(data_020b8e44, 0x36));
        r4 = func_02033094(r4, buf30, 0, sz[0], sz[1], 4, 0);
        r6 = 1;
    }
    if (r6) {
        func_020059cc(buf30);
    }
    func_02056bc0(p + 0x48, r4);
    n = func_02056aec(r4);
    a6 = func_0205681c(0x94);
    if (a6 != 0) {
        a6 = func_02008ce8(a6, r4, *(void **)(p + 0xc0), 0);
    }
    r7 = func_ov007_0219b460(data_020b93b8, data_ov007_021c4300[0], data_ov007_021c4300[1], 1);
    b6 = func_0205681c(0x94);
    if (b6 != 0) {
        b6 = func_02008ce8(b6, r4, *(void **)(p + 0xc0), 0);
    }
    func_02056bc0(p + 0x14, b6);
    func_02056bc0(p + 0x14, (void *)r7);
    func_02056bc0(p + 0x14, a6);
    func_02056bc0(p + 0x14, (void *)n);
    *(uint32_t *)(p + 0xb8) = data_ov007_021c4308[0];
    *(uint32_t *)(p + 0xbc) = data_ov007_021c4308[1];
}
