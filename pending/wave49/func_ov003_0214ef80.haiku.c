#include "ffc/types.h"

extern uint32_t data_0209e070;
extern uint32_t data_0209e06c;
extern uint32_t data_0209e068;
extern int16_t data_020a1bd0[];
extern uint32_t func_0209a400(uint32_t);
extern float func_02099dd8(uint32_t);
extern float func_0209af28(float, float);
extern float func_0209b108(float, float);
extern float func_0209b338(float, float);
extern uint32_t func_0209ab5c(float);
extern float func_0209a484(uint32_t);
extern float func_0209b5bc(float, float);
extern float func_0209a4cc(uint32_t);
extern uint32_t func_0209ab90(float);
extern uint32_t func_0209a978(uint32_t, uint32_t);
extern int32_t func_020817c8(int32_t, int32_t);
extern void func_0206ad9c(uint32_t);

void func_ov003_0214ef80(uint8_t *p)
{
    uint32_t A, B, C, n, x, i;
    float g, y;
    uint16_t *tab;
    uint32_t a1, a2, a3;
    int32_t t1, t2, t3, sum, r;

    if (func_02099dd8(func_0209a400(data_0209e070)) > 0.0f) {
        y = func_0209b108(0.5f, func_0209af28(4096.0f, func_02099dd8(func_0209a400(data_0209e070))));
    } else {
        y = func_0209b338(func_0209af28(4096.0f, func_02099dd8(func_0209a400(data_0209e070))), 0.5f);
    }
    A = func_0209ab5c(y);

    if (func_02099dd8(func_0209a400(data_0209e06c)) > 0.0f) {
        y = func_0209b108(0.5f, func_0209af28(4096.0f, func_02099dd8(func_0209a400(data_0209e06c))));
    } else {
        y = func_0209b338(func_0209af28(4096.0f, func_02099dd8(func_0209a400(data_0209e06c))), 0.5f);
    }
    B = func_0209ab5c(y);

    if (func_02099dd8(func_0209a400(data_0209e068)) > 0.0f) {
        y = func_0209b108(0.5f, func_0209af28(4096.0f, func_02099dd8(func_0209a400(data_0209e068))));
    } else {
        y = func_0209b338(func_0209af28(4096.0f, func_02099dd8(func_0209a400(data_0209e068))), 0.5f);
    }
    C = func_0209ab5c(y);

    g = func_0209b5bc(func_0209a484(B), 4096.0f);
    n = *(uint32_t *)(p + 0x88);
    *(uint32_t *)(p + 0x88) = n + 1;
    x = func_0209ab90(func_0209af28(func_0209a4cc(n >> 1), g));

    tab = *(uint16_t **)(*(uint8_t **)(p + 0x80) + 0x38);

    for (i = 0; i < 0xc0; i++) {
        uint32_t base = i * (C << 4);
        a1 = func_0209a978(base + ((x + 2 * x) << 16), 0xc8);
        t1 = func_020817c8(data_020a1bd0[((a1 & 0xffff) >> 4) * 2], 0x200000);
        a2 = func_0209a978(base + (x << 17), 0x64);
        t2 = func_020817c8(data_020a1bd0[((a2 & 0xffff) >> 4) * 2], 0x200000);
        a3 = func_0209a978(base + (x << 16), 0x32);
        t3 = func_020817c8(data_020a1bd0[((a3 & 0xffff) >> 4) * 2], 0x200000);
        sum = t3 + t2 + t1;
        r = func_020817c8(sum & 0xfffff000, A);
        tab[i * 2] = (uint16_t)(r >> 20);
        tab[i * 2 + 1] = 0;
    }
    func_0206ad9c(*(uint32_t *)(p + 0x80));
}
