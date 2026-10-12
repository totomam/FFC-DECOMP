#include "ffc/types.h"

typedef struct {
    uint32_t w[6];
} Ent;
typedef struct {
    uint32_t x, y;
} V;

extern void *func_0205681c(uint32_t size);
extern void *func_ov005_02196784(void *obj, void *p, V v, Ent e, int flag, int two);
extern void func_ov005_02197868(uint32_t *out);
extern void *func_ov005_02196728(void *obj, void *p, V v, uint32_t t, int zero, int two);
extern void func_ov005_02196c3c(void *obj);
extern uint32_t func_ov008_021a253c(void *a, uint32_t i);
extern void func_ov005_02196bec(void *obj, uint32_t v);
extern void func_ov005_02196c1c(void *obj, int v);
extern void func_020695ec(void *a, void *obj);
extern uint8_t data_ov008_021a894c[];

#define DATA_W(off) (*(uint32_t *)(data_ov008_021a894c + (off)))

static inline uint32_t OFF(uint32_t d){ uint32_t x = 0x131; x -= d; return x; }

int func_ov008_021a2614(void *a)
{
    uint8_t *p = (uint8_t *)a;
    uint32_t o124, o104, o108;
    uint8_t *pn;
    uint8_t i;

    o124 = OFF(0xd);
    o104 = OFF(0x2d);
    o108 = OFF(0x29);
    pn = p + 0x131;

    for (i = 0; i < 8; i++) {
        uint32_t idx = i + *pn * 8;
        void *obj;
        uint8_t *qq = p + i * 4;

        if (*(uint32_t *)(p + o108) > idx) {
            V v;
            uint32_t *bits;
            int flag;

            obj = func_0205681c(0xc4);
            if (obj != 0) {
                int m = i % 4;
                uint32_t q = (uint32_t)i >> 2;
                v.x = DATA_W(0x48) + m * DATA_W(0x18) + q * DATA_W(0x60);
                v.y = DATA_W(0x4c) + m * DATA_W(0x1c) + q * DATA_W(0x64);
                bits = *(uint32_t **)(p + o124);
                flag = (bits[idx >> 5] & (1u << (idx & 31))) != 0;
                obj = func_ov005_02196784(obj, *(void **)(p + 0xcc), v, *(Ent *)(*(uint8_t **)(p + o104) + idx * 0x18), flag, 2);
            }
            (*(void **)(qq + 0xdc)) = obj;
        } else {
            V v;
            uint32_t t;

            obj = func_0205681c(0xc4);
            if (obj != 0) {
                int m = i % 4;
                uint32_t q = (uint32_t)i >> 2;
                v.x = DATA_W(0x48) + m * DATA_W(0x18) + q * DATA_W(0x60);
                v.y = DATA_W(0x4c) + m * DATA_W(0x1c) + q * DATA_W(0x64);
                func_ov005_02197868(&t);
                obj = func_ov005_02196728(obj, *(void **)(p + 0xcc), v, t, 0, 2);
            }
            (*(void **)(qq + 0xdc)) = obj;
            func_ov005_02196c3c((*(void **)(qq + 0xdc)));
        }

        {
            uint32_t r = func_ov008_021a253c(a, i);
            func_ov005_02196bec((*(void **)(qq + 0xdc)), r);
            func_ov005_02196c1c((*(void **)(qq + 0xdc)), 0);
            func_020695ec(a, (*(void **)(qq + 0xdc)));
        }
    }
    return 0;
}
