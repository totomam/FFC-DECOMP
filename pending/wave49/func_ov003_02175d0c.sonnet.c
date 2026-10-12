#include "ffc/types.h"

extern float func_0209a484(int32_t);
extern float func_0209b338(float, float);
extern float func_0209af28(float, float);
extern float func_0209b108(float, float);
extern float func_0209ae44(float);
extern float func_0209b5bc(float, float);
extern float func_0209a400(float);
extern float func_02096ac8(float);
extern float func_02099dd8(float);
extern uint32_t func_0209a2e0(float, float);
extern int32_t func_0209ab5c(float);
extern void *func_02056830(uint32_t);

typedef struct Src {
    uint32_t hdr;
    uint16_t *pix;
} Src;

typedef struct Ctx {
    uint8_t pad0[0x84];
    Src *src;               /* 0x84 */
    uint8_t pad[0x14];      /* 0x88 */
    uint16_t *dst;          /* 0x9c */
    uint16_t *tbl;          /* 0xa0 */
} Ctx;

void func_ov003_02175d0c(Ctx *p)
{
    int32_t i, j, k;
    int32_t idx;

    uint32_t sz = 0x6000;

    p->dst = func_02056830(sz);
    p->tbl = func_02056830(sz >> 2);

    for (i = 0x48; i < 0x78; i++) {
        int32_t base = (i - 0x48) << 6;
        for (j = 0x60; j < 0xa0; j++) {
            float x = func_0209b338(func_0209a484(j), 128.0f);
            float y = func_0209b338(func_0209a484(i), 96.0f);
            idx = (j - 0x60) + base;
            float g = func_02099dd8(func_02096ac8(func_0209a400(func_0209af28(3.14159265f, func_0209b5bc(func_0209ae44(func_0209b108(func_0209af28(x, x), func_0209af28(y, y))), 40.0f)))));
            float r;
            if (func_0209a2e0(func_0209b108(0.5f, g), 0.0f) > 0) {
                float g2 = func_02099dd8(func_02096ac8(func_0209a400(func_0209af28(3.14159265f, func_0209b5bc(func_0209ae44(func_0209b108(func_0209af28(x, x), func_0209af28(y, y))), 40.0f)))));
                r = func_0209b108(0.5f, func_0209af28(4096.0f, func_0209b108(0.5f, g2)));
            } else {
                float g2 = func_02099dd8(func_02096ac8(func_0209a400(func_0209af28(3.14159265f, func_0209b5bc(func_0209ae44(func_0209b108(func_0209af28(x, x), func_0209af28(y, y))), 40.0f)))));
                r = func_0209b338(func_0209af28(4096.0f, func_0209b108(0.5f, g2)), 0.5f);
            }
            p->tbl[idx] = (int16_t)func_0209ab5c(r);
        }
    }

    for (i = 0x30; i < 0x90; i++) {
        for (k = 0x40; k < 0xc0; k++) {
            p->dst[(i - 0x30) * 128 + (k - 0x40)] = p->src->pix[i * 256 + k];
        }
    }
}
