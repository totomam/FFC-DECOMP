#include "ffc/types.h"

extern int func_0209a2e0(float a, float b);
extern int func_0209a33c(float a, float b);
extern float func_0209b5bc(float a, float b);
extern float func_0209af28(float a, float b);
extern float func_0209b338(float a, float b);
extern int func_0209ab5c(float a);
extern void func_0205f518(void *p, int a, int b);
extern void func_0205f3e0(void *p, int a);
extern void func_0205f498(void *p);
extern void func_0205f318(void *p, int a);
extern void func_0200563c(void *p, float a, float b, int c);
extern void func_0205f470(void *p);
extern uint32_t data_ov003_02179ac8[];
extern uint32_t data_ov003_02179acc[];

#define OBJ(s, i) (*(uint8_t **)((s) + 0x80 + (i) * 4))
#define SUBP(s, i) (*(uint8_t **)(OBJ(s, i) + 0x50))
#define QPTR(s, i) (*(void **)(SUBP(s, i) + 0x94))

void func_ov003_0214f718(uint8_t *self, uint32_t idx, float v, float w)
{
    int t;

    if (v > 0.0f) {
        if (v > 0.0f && v < 1.0f) {
            float a = func_0209b5bc(w, 2.0f);
            float b = func_0209b5bc(w, 2.0f);
            float c = func_0209af28(b, v);
            c = func_0209b338(c, 1.0f);
            c = func_0209b338(a, c);
            t = func_0209ab5c(c);
        } else {
            t = 0;
        }
        func_0205f518(QPTR(self, idx), (int)(data_ov003_02179ac8[idx * 2] - t), (int)data_ov003_02179acc[idx * 2]);
        func_0205f3e0(QPTR(self, idx), 2);
        func_0205f498(QPTR(self, idx));
        func_0205f318(QPTR(self, idx), 1);
        func_0200563c(SUBP(self, idx), v, 1.0f, 0);
    } else {
        func_0205f470(QPTR(self, idx));
    }
}
