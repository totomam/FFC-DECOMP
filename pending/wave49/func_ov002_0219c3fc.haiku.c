#include "ffc/types.h"

extern void *func_ov002_0219c750(uint32_t *p, uint32_t a);
extern int func_ov002_0219c5a8(void *x);
extern void *func_ov002_0219c5b8(void *x, uint32_t i);
extern void func_ov002_021adac0(void *a, uint32_t *out, uint32_t *arr, uint32_t f);
extern unsigned long long func_02099edc(uint32_t v);
extern float func_02099dd8(unsigned long long v);
extern int func_0209a2e0(float a, float b);
extern float func_0209af28(float a, float b);
extern float func_0209b108(float a, float b);
extern float func_0209b338(float a, float b);
extern uint32_t func_0209ab5c(float f);
extern int func_ov002_0219c178(uint32_t *p, void *x);
extern void *func_ov002_0219b850(uint32_t *p);
extern void *func_ov002_02198e58(void *p);
extern unsigned long long func_02099f1c(uint32_t v);
extern uint32_t func_020817c8(int32_t first, int32_t second);
extern uint32_t func_02081210(uint32_t object, uint32_t n);
extern int func_ov002_0219b834(void *x, uint32_t a);
extern void func_ov002_021bd868(void *x, uint32_t a, uint32_t *arr);
extern void func_ov002_021bd85c(uint32_t v);

void func_ov002_0219c3fc(uint32_t *p, uint32_t a1, uint32_t flag)
{
    void *x;
    uint32_t i;
    uint32_t a34;
    uint32_t vals[4];
    uint32_t tmp[4];
    uint32_t sum[4];
    uint32_t k;

    if (flag != 0) {
        x = func_ov002_0219c750(p, a1);
        i = 0;
        a34 = 0;
        sum[0] = 0;
        sum[1] = 0;
        sum[2] = 0;
        sum[3] = 0;

        while ((int)i < func_ov002_0219c5a8(x)) {
            tmp[0] = 0;
            tmp[1] = 0;
            tmp[2] = 0;
            tmp[3] = 0;
            func_ov002_021adac0(func_ov002_0219c5b8(x, i), &a34, tmp, 0);

            for (k = 0; k < 4; k++) {
                unsigned long long v = func_02099edc(tmp[k]);
                float r;
                if (func_0209a2e0(func_02099dd8(v), 0.0f)) {
                    r = func_0209b108(0.5f, func_0209af28(4096.0f, func_02099dd8(v)));
                } else {
                    r = func_0209b338(func_0209af28(4096.0f, func_02099dd8(v)), 0.5f);
                }
                vals[k] = func_0209ab5c(r);
            }

            if (func_ov002_0219c178(p, x)) {
                uint32_t r4 = *(uint32_t *)((uint8_t *)func_ov002_02198e58(func_ov002_0219b850(p)) + 0x320);
                uint32_t r7 = 0x320u << 9;
                for (k = 0; k < 4; k++) {
                    unsigned long long v = func_02099f1c(r4);
                    float r;
                    if (func_0209a2e0(func_02099dd8(v), 0.0f)) {
                        r = func_0209b108(0.5f, func_0209af28(4096.0f, func_02099dd8(func_02099f1c(r4))));
                    } else {
                        r = func_0209b338(func_0209af28(4096.0f, func_02099dd8(func_02099f1c(r4))), 0.5f);
                    }
                    vals[k] = func_02081210(func_020817c8(vals[k], func_0209ab5c(r)), r7);
                }
            }

            for (k = 0; k < 4; k++) {
                sum[k] = sum[k] + vals[k];
            }

            i++;
        }

        if (func_ov002_0219b834(x, a1)) {
            func_ov002_021bd868(x, a34, sum);
        }
    } else {
        if (p[a1 + 0x47]) {
            func_ov002_021bd85c(p[a1 + 0x47]);
        }
    }
}
