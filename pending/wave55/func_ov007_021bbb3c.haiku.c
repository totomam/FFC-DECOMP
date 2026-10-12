#include "ffc/types.h"

extern void *data_020b8e44;
extern void *data_020b93b8;
extern uint32_t data_ov007_021c7ae8[];
extern uint32_t data_ov007_021c78f0[];
extern uint32_t data_ov007_021c78b8[];
extern uint32_t data_ov007_021c7918[];
extern uint32_t data_ov007_021c7b18[];

extern uint32_t func_02015a38(void *obj, uint32_t a, uint32_t b, uint32_t c);
extern void *func_02015ba4(void *unused, uint32_t index);
extern uint32_t func_0201f680(void *obj, uint32_t v);
extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern uint32_t func_0203b95c(void *object, uint32_t a, uint32_t b, uint32_t c);
extern void func_02056bc0(void *object, void *node);
extern uintptr_t func_020159f8(void *obj);
extern uint32_t func_0203b9cc(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_0203b878(uint32_t a, uint32_t b);
extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern void func_02005988(void *a, void *b);
extern void func_02068ddc(void *a, void *b);
extern void *func_020059cc(void *object);

void func_ov007_021bbb3c(uint8_t *p)
{
    uint32_t b94[64];
    uint32_t b48[3];
    uint32_t b54[16];
    uint32_t sp8;
    uint32_t i;
    uint32_t off;
    uint32_t key;
    uint8_t *obj;
    uint16_t v16;
    uint32_t flag;
    uint32_t *o;
    uint32_t *pr;
    uint32_t res;

    sp8 = func_02015a38(data_020b8e44, 0, 1, 0);

    for (i = 0; i < *(uint32_t *)(p + 0xf4); i++) {
        key = ((uint32_t *)(*(uint32_t *)(p + 0xf0)))[i];
        off = ((uint8_t)key) * 4;
        obj = *(uint8_t **)(p + 0xb8) + off;

        if (*(uint32_t *)(obj + 0x68) != 0) {
            v16 = *(uint16_t *)((uint8_t *)func_02015ba4(data_020b8e44, *(uint32_t *)(obj + 0x68)) + 0x40);

            func_02086ad4(b94, (uint32_t)data_ov007_021c7ae8, (uint32_t)v16,
                          func_0201f680(data_020b93b8, *(uint32_t *)(obj + 0x20c)));

            *(uint32_t *)(p + i * 4 + 0x110) =
                func_0203b95c(b94, *(uint32_t *)(p + 0xc8), 2, 1);

            flag = 1;
            if (*(uint32_t *)(obj + 0x144) == 0x14) {
                flag = 0;
            }
            o = *(uint32_t **)(p + i * 4 + 0x110);
            ((void (*)(void *, uint32_t, uint32_t))((*(uint32_t **)o)[14]))(o, flag + 1, 0);

            pr = &data_ov007_021c78f0[(i * 8) / 4];
            o = *(uint32_t **)(p + i * 4 + 0x110);
            ((void (*)(void *, uint32_t, uint32_t))((*(uint32_t **)o)[3]))(o, pr[0], pr[1]);

            o = *(uint32_t **)(p + i * 4 + 0x110);
            ((void (*)(void *, uint32_t))((*(uint32_t **)o)[8]))(o, 2);

            o = *(uint32_t **)(p + i * 4 + 0x110);
            ((void (*)(void *))((*(uint32_t **)o)[10]))(o);

            func_02056bc0(p + 0x48, *(void **)(p + i * 4 + 0x110));

            res = func_020159f8(data_020b8e44);
            func_0203b9cc(data_ov007_021c78b8[0], data_ov007_021c78b8[1], res, 1);
            *(uint32_t *)(p + i * 4 + 0x124) = func_0203b878(func_0203b9cc(data_ov007_021c78b8[0], data_ov007_021c78b8[1], res, 1), sp8);

            pr = &data_ov007_021c7918[(i * 8) / 4];
            o = *(uint32_t **)(p + i * 4 + 0x124);
            ((void (*)(void *, uint32_t, uint32_t))((*(uint32_t **)o)[3]))(o, pr[0], pr[1]);

            o = *(uint32_t **)(p + i * 4 + 0x124);
            ((void (*)(void *, uint32_t))((*(uint32_t **)o)[8]))(o, 2);

            o = *(uint32_t **)(p + i * 4 + 0x124);
            ((void (*)(void *))((*(uint32_t **)o)[10]))(o);

            func_02091b10(b54, (uint32_t)data_ov007_021c7b18, *(uint32_t *)(obj + 0x144));
            func_02005988(b48, b54);
            func_02068ddc(*(void **)(p + i * 4 + 0x124), b48);
            func_020059cc(b48);
            func_02056bc0(p + 0x48, *(void **)(p + i * 4 + 0x124));
        }
    }
}
