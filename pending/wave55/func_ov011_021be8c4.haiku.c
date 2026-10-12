#include "ffc/types.h"

extern void func_02036750(void *p);
extern void func_0201f1f0(void *a, uint32_t b, void *c);
extern void *func_0205681c(uint32_t size);
extern void *func_02031624(void *obj, void *a, int x, int y, int z0, int z1, int z2);
extern uint32_t func_0201b924(const void *object);
extern int func_02036890(void *p);
extern void *func_020159c8(void *obj, uint32_t id);
extern void func_02005988(void *dst, void *src);
extern void func_02031754(void *obj, uint32_t id, void *val);
extern void *func_020059cc(void *object);
extern int func_ov011_021be2fc(void *self, uint32_t a, uint32_t b);
extern void *func_02062a30(void *owner);
extern void func_02056bc0(void *object, void *node);
extern void func_020367a8(void *p);
extern void *data_020b93b8;
extern void *data_020b8e44;
extern int32_t data_ov011_021caad8[];
extern int32_t data_ov011_021caa80[];
extern int32_t data_ov011_021caadc[];
extern uint32_t data_ov011_021cacf4[];

void func_ov011_021be8c4(uint8_t *self, int r4)
{
    uint8_t buf[0x58];
    int32_t pos[2];
    uint32_t t50[3];
    uint32_t t44[3];
    uint32_t t38[3];
    uint32_t t2c[3];
    uint32_t t20[3];
    uint32_t t14[3];
    void *tmp;
    void *r6;
    void *obj;
    void **p;
    int i;
    int id;
    int val;
    uint32_t off;

    func_02036750(buf);
    func_0201f1f0(data_020b93b8, r4, buf);
    off = 0x46 << 2;
    *(uint32_t *)(self + off) = 0;
    p = *(void ***)(self + 0xf8);
    ((void (*)(void *))((void **)*p)[11])(p);

    i = r4 - 1;
    {
        int32_t x0 = data_ov011_021caad8[i * 2];
        pos[0] = x0 + data_ov011_021caa80[4];
        pos[1] = data_ov011_021caadc[i * 2] + data_ov011_021caa80[5];
        if (r4 >= 2) {
            pos[1] -= 0x40;
        }
    }

    off = 0x46 << 2;
    r6 = func_0205681c(off);
    if (r6 != 0) {
        r6 = func_02031624(r6, self + off, pos[0], pos[1], 0, 0, 0);
    }

    if (self[0x126] == 0) {
        if (r4 != (int)func_0201b924(data_020b93b8) && func_02036890(buf)) {
            tmp = func_020159c8(data_020b8e44, 0x9b);
            func_02005988(t50, tmp);
            func_02031754(r6, 0xb, t50);
            func_020059cc(t50);
        }
    }

    tmp = func_020159c8(data_020b8e44, 0x9c);
    func_02005988(t44, tmp);
    func_02031754(r6, 0xc, t44);
    func_020059cc(t44);

    tmp = func_020159c8(data_020b8e44, 0x9d);
    func_02005988(t38, tmp);
    func_02031754(r6, 0xd, t38);
    func_020059cc(t38);

    if (func_02036890(buf) != 0) {
        tmp = func_020159c8(data_020b8e44, 0x9f);
        func_02005988(t2c, tmp);
        func_02031754(r6, 0xe, t2c);
        func_020059cc(t2c);
    }

    if (r4 != (int)func_0201b924(data_020b93b8) && func_02036890(buf)) {
        tmp = func_020159c8(data_020b8e44, 0xa0);
        func_02005988(t20, tmp);
        func_02031754(r6, 0xf, t20);
        func_020059cc(t20);
    }

    id = 0xa1;
    tmp = func_020159c8(data_020b8e44, id);
    func_02005988(t14, tmp);
    id -= 0xa3;
    func_02031754(r6, id, t14);
    func_020059cc(t14);

    val = func_ov011_021be2fc(self, data_ov011_021cacf4[0], data_ov011_021cacf4[1]);
    obj = func_02062a30(*(void **)(self + 0xf8));
    func_02056bc0(self + 0x14, r6);
    func_02056bc0(self + 0x14, obj);
    func_02056bc0(self + 0x14, (void *)val);
    func_020367a8(buf);
}
