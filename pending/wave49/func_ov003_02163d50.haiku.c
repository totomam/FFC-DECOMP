#include "ffc/types.h"

extern uint32_t func_0203b6f0(void);
extern uint32_t func_0203b81c(uint32_t x);
extern void func_0205f818(uint32_t x, uint32_t y);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_0203b918(void *o, uint32_t x, uint32_t y, uint32_t z);
extern uint32_t func_02064390(void *object, uint32_t first, uint32_t second);
extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern uint32_t func_0203b95c(void *o, uint32_t x, uint32_t y, uint32_t z);
extern void func_02021338(uint32_t x);
extern void func_020655b8(void *o);
extern uint32_t data_ov003_0217a608;

void func_ov003_02163d50(char *a)
{
    uint32_t i;
    uint32_t count;
    uint8_t buf[0x44];
    uint32_t args[2];
    char *r6;
    uint32_t r4v;
    void *obj;
    uint32_t t;
    void **vt;

    *(uint32_t *)(a + 0xa8) = func_0203b6f0();
    t = func_0203b81c(*(uint32_t *)(a + 0x8c) + 4);
    *(uint32_t *)(a + 0xd0) = t;
    func_0205f818(t, 5);

    r4v = *(uint32_t *)(a + 0xd0);
    r6 = a + 0x48;
    func_02056bc0(r6, *(void **)(a + 0xa8));
    func_02056bc0(r6, (void *)r4v);

    t = func_0203b918(a + 0x80, *(uint32_t *)(a + 0xd0), 0, 1);
    *(uint32_t *)(a + 0xac) = t;
    func_02064390((void *)t, 0x80, 0x60);

    obj = *(void **)(a + 0xac);
    vt = *(void ***)obj;
    ((void (*)(void *, uint32_t))vt[15])(obj, 1);

    obj = *(void **)(a + 0xac);
    vt = *(void ***)obj;
    ((void (*)(void *))vt[10])(obj);

    func_02056bc0(*(void **)(a + 0xa8), *(void **)(a + 0xac));

    ((void (*)(void *, void *))(*(void ***)a)[4])(a, a + 0x9c);

    count = *(uint32_t *)(a + 0x8c);
    if (count > 0) {
        for (i = 0; i < count; i++) {
            int8_t c = *(int8_t *)(a + 0x9c + i);
            if (c == 0x20) {
                *(uint32_t *)(a + 0xb0 + i * 4) = 0;
            } else {
                func_02091b10(buf, &data_ov003_0217a608, c - 0x30);
                *(uint32_t *)(a + 0xb0 + i * 4) =
                    func_0203b95c(buf, *(uint32_t *)(a + 0xd0), 0, 1);
                args[0] = i * 8 + 0xd;
                args[1] = 0x10;
                obj = *(void **)(a + 0xb0 + i * 4);
                vt = *(void ***)obj;
                ((void (*)(void *, uint32_t, uint32_t))vt[3])(obj, args[0], args[1]);
                obj = *(void **)(a + 0xb0 + i * 4);
                vt = *(void ***)obj;
                ((void (*)(void *))vt[10])(obj);
                func_02056bc0(*(void **)(a + 0xa8), *(void **)(a + 0xb0 + i * 4));
            }
        }
    }

    if (*(uint32_t *)(a + 0x90) != 0xffffffff) {
        func_02021338(*(uint32_t *)(a + 0x90));
    }

    obj = *(void **)(a + 0xac);
    vt = *(void ***)obj;
    ((void (*)(void *, uint32_t, uint32_t))vt[14])(obj, 1, 0);

    count = *(uint32_t *)(a + 0x8c);
    if (count > 0) {
        for (i = 0; i < count; i++) {
            obj = *(void **)(a + 0xb0 + i * 4);
            if (obj != 0) {
                vt = *(void ***)obj;
                ((void (*)(void *, uint32_t, uint32_t))vt[14])(obj, 1, i);
            }
        }
    }

    func_020655b8(*(void **)(a + 0xac));
}
