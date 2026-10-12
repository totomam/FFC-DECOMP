#include "ffc/types.h"

extern int32_t data_020b3ac0[4];
extern int16_t data_020a1bd0[];

extern void func_0207fe70(int32_t *v);
extern void func_0207fe88(int32_t *v, int16_t a, int16_t b);
extern void func_0207ffb0(int32_t *dst, int32_t *src, int32_t *dst2);
extern float func_0209a484(int32_t x);
extern float func_0209b5bc(float a, float b);
extern int func_0209a2e0(float a, float b);
extern float func_0209af28(float a, float b);
extern float func_0209b108(float a, float b);
extern float func_0209b338(float a, float b);
extern int32_t func_0209ab5c(float v);
extern void func_0207fe94(int32_t *a, int32_t *b, int32_t c, int32_t d);
extern void func_0205f380(void *a, int32_t b);

void func_0200570c(uint8_t *obj, int32_t a1, int32_t a2, int32_t a3)
{
    int32_t tmp[4];
    int32_t idx = (a3 >> 4) * 2;
    int32_t r4;
    int32_t r3;
    uint8_t *P;
    uint8_t *Q;

    func_0207fe70(data_020b3ac0);
    func_0207fe88(tmp, data_020a1bd0[idx], data_020a1bd0[idx + 1]);
    func_0207ffb0(data_020b3ac0, tmp, data_020b3ac0);

    if (a1 != 0) {
        float y = func_0209b5bc(4096.0f, func_0209a484(a1));
        float w;
        if (y > 0.0f) {
            float z = func_0209af28(4096.0f, func_0209b5bc(4096.0f, func_0209a484(a1)));
            w = func_0209b108(0.5f, z);
        } else {
            float z = func_0209af28(4096.0f, func_0209b5bc(4096.0f, func_0209a484(a1)));
            w = func_0209b338(z, 0.5f);
        }
        r4 = func_0209ab5c(w);
    } else {
        r4 = 0;
    }

    if (a2 != 0) {
        float y = func_0209b5bc(4096.0f, func_0209a484(a2));
        float w;
        if (y > 0.0f) {
            float z = func_0209af28(4096.0f, func_0209b5bc(4096.0f, func_0209a484(a2)));
            w = func_0209b108(0.5f, z);
        } else {
            float z = func_0209af28(4096.0f, func_0209b5bc(4096.0f, func_0209a484(a2)));
            w = func_0209b338(z, 0.5f);
        }
        r3 = func_0209ab5c(w);
    } else {
        r3 = 0;
    }

    func_0207fe94(data_020b3ac0, data_020b3ac0, r4, r3);

    func_0205f380(*(void **)(obj + 0x94), *(int32_t *)(*(uint8_t **)(obj + 0x90) + 0x10));

    P = *(uint8_t **)(obj + 0x90);
    Q = *(uint8_t **)(P + 4);
    *(int16_t *)(Q + 0x06) = (int16_t)(data_020b3ac0[0] >> 4);
    *(int16_t *)(Q + 0x0e) = (int16_t)(data_020b3ac0[1] >> 4);
    *(int16_t *)(Q + 0x16) = (int16_t)(data_020b3ac0[2] >> 4);
    *(int16_t *)(Q + 0x1e) = (int16_t)(data_020b3ac0[3] >> 4);
}
