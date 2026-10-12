#include "ffc/types.h"

typedef struct {
    uint32_t w[6];
} Ent;

extern void *func_0205681c(uint32_t size);
extern int func_ov005_02196784(void *obj, void *p, uint32_t x, uint32_t y, Ent e, int flag, int two);
extern void func_ov005_02197868(uint32_t *out);
extern void *func_ov005_02196728(void *obj, void *p, uint32_t x, uint32_t y, uint32_t v, int zero, int two);
extern void func_ov005_02196c3c(void *obj);
extern uint32_t func_ov008_021a253c(void *a, uint32_t i);
extern void func_ov005_02196bec(void *obj, uint32_t v);
extern void func_ov005_02196c1c(void *obj, int v);
extern void func_020695ec(void *a, void *obj);
extern uint8_t data_ov008_021a894c[];

#define DATA_W(off) (*(uint32_t *)(data_ov008_021a894c + (off)))

int func_ov008_021a2614(void *a)
{
    uint8_t *p = (uint8_t *)a;
    volatile uint32_t o124, o104, o108;
    uint8_t *pn;
    uint8_t i;

    o124 = 0x131;
    o124 -= 0xd;
    o104 = 0x131;
    o104 -= 0x2d;
    o108 = 0x131;
    o108 -= 0x29;
    pn = p + 0x131;

    for (i = 0; i < 8; i++) {
        uint32_t idx = i + *pn * 8;
        uint32_t m = i & 3;
        uint32_t q = i >> 2;
        void *obj;

        if (*(uint32_t *)(p + o108) > idx) {
            uint32_t v0, v1;
            uint32_t *bits;
            int flag;
            Ent e;

            obj = func_0205681c(0xc4);
            if (obj != 0) {
                v0 = DATA_W(0x48) + m * DATA_W(0x18) + q * DATA_W(0x60);
                v1 = DATA_W(0x4c) + m * DATA_W(0x1c) + q * DATA_W(0x64);
                bits = *(uint32_t **)(p + o124);
                flag = (bits[idx >> 5] & (1u << (idx & 31))) != 0;
                e = *(Ent *)(*(uint8_t **)(p + o104) + idx * 0x18);
                obj = (void *)func_ov005_02196784(obj, *(void **)(p + 0xcc), v0, v1, e, flag, 2);
            }
            ((void **)(p + 0xdc))[i] = obj;
        } else {
            uint32_t v0, v1, t;

            obj = func_0205681c(0xc4);
            if (obj != 0) {
                v0 = DATA_W(0x48) + m * DATA_W(0x18) + q * DATA_W(0x60);
                v1 = DATA_W(0x4c) + m * DATA_W(0x1c) + q * DATA_W(0x64);
                func_ov005_02197868(&t);
                obj = func_ov005_02196728(obj, *(void **)(p + 0xcc), v0, v1, t, 0, 2);
            }
            ((void **)(p + 0xdc))[i] = obj;
            func_ov005_02196c3c(((void **)(p + 0xdc))[i]);
        }

        {
            uint32_t r = func_ov008_021a253c(a, i);
            func_ov005_02196bec(((void **)(p + 0xdc))[i], r);
            func_ov005_02196c1c(((void **)(p + 0xdc))[i], 0);
            func_020695ec(a, ((void **)(p + 0xdc))[i]);
        }
    }
    return 0;
}
