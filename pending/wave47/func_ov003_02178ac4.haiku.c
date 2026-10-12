#include "ffc/types.h"

typedef struct {
    int32_t x;
    int32_t y;
} Vec2;

extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern void *func_0205681c(uint32_t size);
extern void func_02005988(void *a, void *b);
extern void *func_ov003_02178268(void *obj, void *a, uint32_t b, uint32_t c);
extern void *func_020059cc(void *object);
extern void func_ov003_02178c34(Vec2 *ret, void *self, uint32_t idx);
extern void func_02056bc0(void *object, void *node);
extern void func_0204e7ac(uint32_t v);
extern uint8_t data_ov003_0217be44[];
extern void *data_0213df18;

void func_ov003_02178ac4(uint8_t *self, uint32_t idx) {
    Vec2 v18;
    Vec2 sh;
    Vec2 v10;
    uint8_t buf28[0xc];
    uint8_t buf34[0x44];
    void *obj;
    uint32_t r6;
    uint8_t flag = 0;
    uint8_t saved;
    volatile uint16_t *ime = (volatile uint16_t *)0x04000208;
    uint16_t old;
    void **vt;

    func_02086ad4(buf34, (uint32_t)data_ov003_0217be44, self[0xc4]);
    obj = func_0205681c(0x78);
    if (obj != 0) {
        r6 = *(uint32_t *)((uint8_t *)data_0213df18 + 0x24);
        func_02005988(buf28, buf34);
        obj = func_ov003_02178268(obj, buf28, r6, 1);
        flag = 1;
    }
    if (flag) {
        func_020059cc(buf28);
    }

    old = *ime;
    *ime = 0;
    saved = (old != 0);

    ((void **)(self + 0x8c))[idx] = obj;

    vt = *(void ***)obj;
    ((void (*)(void *))vt[11])(obj);

    obj = ((void **)(self + 0x8c))[idx];
    vt = *(void ***)obj;
    ((void (*)(void *, uint32_t))vt[8])(obj, 3);

    func_ov003_02178c34(&v18, self, idx);
    v10 = v18;
    sh.x = v10.x >> 12;
    sh.y = v10.y >> 12;

    obj = ((void **)(self + 0x8c))[idx];
    vt = *(void ***)obj;
    ((void (*)(void *, int32_t, int32_t))vt[3])(obj, sh.x, sh.y);

    func_02056bc0(self + 0x48, ((void **)(self + 0x8c))[idx]);

    *ime = saved;
    func_0204e7ac(*(uint32_t *)((uint8_t *)data_0213df18 + 0x24));

    self[0xc4] = self[0xc4] + 1;
}
