#include "ffc/types.h"

extern void func_ov003_021786cc(uint32_t *out, void *obj, uint32_t i);
extern void func_ov003_021786dc(void *obj, uint32_t i, int32_t a, int32_t b, uint32_t flag);
extern int64_t func_0209a400(uint32_t v);
extern float func_02099dd8(int64_t v);
extern int func_0209a2e0(float a, float b);
extern float func_0209af28(float a, float b);
extern float func_0209b108(float a, float b);
extern float func_0209b338(float a, float b);
extern int32_t func_0209ab5c(float v);
extern uint8_t data_0209deb0;

void func_ov003_02178c50(uint8_t *self)
{
    int32_t minv;
    uint32_t tmp[2];
    int32_t arr[3][2];
    uint32_t i;
    uint8_t g;
    int32_t A, C, val, sel;
    void *o;
    float x, v;
    int32_t n;

    minv = 9 << 18;
    for (i = 0; i < 3; i++) {
        o = *(void **)(self + 0x14);
        func_ov003_021786cc(tmp, o, i);
        arr[i][0] = (int32_t)tmp[0];
        arr[i][1] = (int32_t)tmp[1];

        x = func_02099dd8(func_0209a400(*(uint32_t *)((uint8_t *)o + 0xc0)));
        if (func_0209a2e0(x, 0.0f) > 0) {
            v = func_0209b108(0.5f, func_0209af28(4096.0f, func_02099dd8(func_0209a400(*(uint32_t *)((uint8_t *)o + 0xc0)))));
        } else {
            v = func_0209b338(func_0209af28(4096.0f, func_02099dd8(func_0209a400(*(uint32_t *)((uint8_t *)o + 0xc0)))), 0.5f);
        }
        n = func_0209ab5c(v);
        arr[i][1] = arr[i][1] - n;
        if (arr[i][1] < minv) {
            minv = arr[i][1];
        }
    }

    g = data_0209deb0;
    for (i = 0; i < 3; i++) {
        A = minv + ((int32_t)g << 12);
        C = minv + ((int32_t)g << 13);
        val = arr[i][1];
        sel = val;
        if (A - 0x5000 < val && val < A + 0x5000) {
            sel = A;
        } else if (C - 0x5000 < val && val < C + 0x5000) {
            sel = C;
        }
        if (sel > (int32_t)0xfff40000) {
            func_ov003_021786dc(*(void **)(self + 0x14), i, arr[i][0], sel, 1);
        } else {
            *((uint8_t *)*(void **)(self + 0x14) + i + 0x98) = 1;
            func_ov003_021786dc(*(void **)(self + 0x14), i, 0, 6 << 18, 0);
        }
    }
}
