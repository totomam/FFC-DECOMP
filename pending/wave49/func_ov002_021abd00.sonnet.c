#include "ffc/types.h"

extern uint32_t func_ov002_021a1ac4(uint32_t object);
extern void *func_ov002_021a1958(uint32_t value, uint32_t table_entry);
extern uint8_t func_ov002_021aac84(void *object, uint32_t offset);
extern void *func_ov002_021aa840(void *object, uint32_t offset);
extern int16_t func_0203c410(void *values, uint32_t index);
extern double func_02099edc(int16_t v);
extern double func_02099f1c(int32_t v);
extern float func_02099dd8(double v);
extern int func_0209a2e0(float a, float b);
extern float func_0209af28(float a, float b);
extern float func_0209b108(float a, float b);
extern float func_0209b338(float a, float b);
extern int32_t func_0209ab5c(float v);
extern uint8_t func_ov002_021a4b48(uint32_t object);
extern uint32_t func_ov002_021a16d4(uint32_t object);
extern void *func_ov002_02196414(uint32_t object);
extern uint32_t func_02081210(int32_t a, uint32_t b);
extern int32_t func_020817c8(int32_t first, int32_t second);

extern uint32_t data_ov002_021d3ab8[];
extern uint32_t data_ov002_021d5290[];

int func_ov002_021abd00(uint8_t *self, uint32_t param1) {
    struct { uint32_t pad[12]; uint32_t arr[2]; } s;
    uint32_t *ap;
    int acc;
    uint32_t c;
    uint32_t i;
    uint32_t cur;

    ap = s.arr;
    s.arr[0] = *(uint32_t *)(self + 0xbc);
    s.arr[1] = func_ov002_021a1ac4(s.arr[0]);

    c = 0;
    acc = 0;
    for (; c < 2; c++) {
        cur = ap[c];
        for (i = 0; i < 3; i++) {
            void *p = func_ov002_021a1958(cur, data_ov002_021d3ab8[i]);
            if (p != 0) {
                if (func_ov002_021aac84(p, data_ov002_021d5290[c])) {
                    int16_t v = func_0203c410(func_ov002_021aa840(p, data_ov002_021d5290[c]), param1);
                    double d = (double)v;
                    int a;
                    if ((float)d > 0.0f) {
                        a = (int)((float)d * 4096.0f + 0.5f);
                    } else {
                        a = (int)((float)d * 4096.0f - 0.5f);
                    }
                    if (func_ov002_021a4b48(*(uint32_t *)(self + 0xbc))) {
                        int32_t raw = *(int32_t *)((uint8_t *)func_ov002_02196414(func_ov002_021a16d4(*(uint32_t *)(self + 0xbc))) + 0x320);
                        int b;
                        if ((float)(double)raw > 0.0f) {
                            b = (int)((float)(double)raw * 4096.0f + 0.5f);
                        } else {
                            b = (int)((float)(double)raw * 4096.0f - 0.5f);
                        }
                        a = func_020817c8(a, func_02081210(b, 0x64000));
                    }
                    acc += a;
                }
            }
        }
    }
    return acc >> 12;
}
