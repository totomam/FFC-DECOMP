#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02005988(void *p);
extern void *func_ov003_02178268(void *obj, void *p, uint32_t a, uint32_t b);
extern void func_020059cc(void *p);
extern void func_02056bc0(void *a, void *b);
extern void func_0204e7ac(void *a);
extern void func_ov003_02178ac4(uint8_t *p, uint32_t i);
extern int32_t func_02081210(int32_t x);
extern float func_0209a484(int32_t x);
extern float func_0209b5bc(float a, float b);
extern uint32_t func_0203bf90(uint32_t x);
extern void *data_0213df18;
extern uint8_t data_0209deb0;
extern uint8_t data_0209dea8;
extern uint32_t data_ov003_0217be14[];

typedef struct {
    int32_t x;
    int32_t y;
} Vec2;

void func_ov003_02178784(uint8_t *p)
{
    Vec2 z;
    Vec2 s0;
    Vec2 s1;
    uint8_t buf[8];
    void *obj;
    void **vt;
    uint32_t r7;
    uint32_t i;
    uint32_t flag;
    int32_t diff;
    float f;
    uint8_t *q;

    flag = 0;
    obj = func_0205681c(0x78);
    if (obj != 0) {
        r7 = *(uint32_t *)((uint8_t *)data_0213df18 + 0x24);
        func_02005988(buf);
        obj = func_ov003_02178268(obj, buf, r7, 1);
        flag = 1;
    }
    *(void **)(p + 0x88) = obj;
    if (flag != 0) {
        func_020059cc(buf);
    }
    obj = *(void **)(p + 0x88);
    vt = *(void ***)obj;
    ((void (*)(void *))vt[10])(obj);
    obj = *(void **)(p + 0x88);
    vt = *(void ***)obj;
    ((void (*)(void *, uint32_t))vt[8])(obj, 3);
    func_02056bc0(p + 0x48, *(void **)(p + 0x88));
    func_0204e7ac(*(void **)((uint8_t *)data_0213df18 + 0x24));

    for (i = 0; i < 3; i++) {
        q = p + i * 8;
        z.x = 0;
        z.y = (int32_t)((0xc0 * (i + 1)) << 12);
        *(Vec2 *)(q + 0x9c) = z;
        func_ov003_02178ac4(p, i);
        s0 = *(Vec2 *)(q + 0x9c);
        s1.x = s0.x >> 12;
        s1.y = s0.y >> 12;
        obj = *(void **)(p + 0x8c + i * 4);
        vt = *(void ***)obj;
        ((void (*)(void *, Vec2))vt[3])(obj, s1);
    }

    diff = *(int32_t *)(p + 0xb8) - *(int32_t *)(p + 0xbc);
    {
        int32_t v = func_02081210((int32_t)(data_0209dea8 * data_0209deb0) << 12);
        if (v < 0x19a) {
            v = 0x19a;
        }
        f = func_0209b5bc(func_0209a484(v), 4096.0f);
    }
    *(float *)(p + 0xc0) = f;
    func_02056bc0(p + 0x14, (void *)func_0203bf90(1));
    *(uint32_t *)(p + 0x80) = data_ov003_0217be14[0];
    *(uint32_t *)(p + 0x84) = data_ov003_0217be14[1];
}
