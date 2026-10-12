#include "ffc/types.h"

extern int func_02068680(uint32_t p);
extern uint32_t func_02068b30(uint32_t p);
extern void *func_02092a2c(uint8_t *text, uint32_t character);
extern void func_02068b70(uint32_t p, uint32_t c);
extern void func_02037500(uint32_t *buf, int8_t c);
extern double func_0209351c(uint32_t p);
extern float func_02099dd8(double d);
extern int func_0209a2e0(float a, float b);
extern float func_0209af28(float a, float b);
extern float func_0209b108(float a, float b);
extern float func_0209b338(float a, float b);
extern int func_0209ab5c(float f);
extern void func_020059cc(void *object);
extern uint8_t data_020ae66c[];

void func_0203710c(int *out, uint32_t p1)
{
    uint32_t buf[3];
    uint32_t i;
    uint32_t a;
    double d;
    float f;
    int r;

    for (i = 0; i < 3; i++) {
        buf[i] = i;
    }
    if (func_02068680(p1) == 0) {
        do {
            uint32_t c = func_02068b30(p1);
            if (c > 256 || func_02092a2c(data_020ae66c, c) == 0) {
                func_02068b70(p1, c);
                break;
            }
            func_02037500(buf, (int8_t)c);
        } while (func_02068680(p1) == 0);
    }
    a = (buf[0] & 1) ? buf[2] : (uint32_t)((uint8_t *)buf + 1);
    d = func_0209351c(a);
    f = func_02099dd8(d);
    if (0.0f < f) {
        r = func_0209ab5c(func_0209b108(0.5f, func_0209af28(4096.0f, func_02099dd8(d))));
    } else {
        r = func_0209ab5c(func_0209b338(func_0209af28(4096.0f, func_02099dd8(d)), 0.5f));
    }
    *out = r;
    func_020059cc(buf);
}
