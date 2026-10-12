#include "ffc/types.h"

extern void func_02021338(uint32_t x);
extern void func_02056bf4(void *object);
extern void *func_0203bc04(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_ov011_021c9418(void *object, uint32_t state);
extern uint32_t func_ov011_021c95a8(void *object, uint32_t a, uint32_t b, uint32_t state);
extern void *func_0203b720(void);

typedef struct Pair {
    uint32_t a;
    uint32_t b;
} Pair;

extern const Pair data_ov011_021cbd9c;

typedef struct Obj2 {
    void **vt;
} Obj2;

#define VCALL(o, idx, ...) (((void (**)(void *, ...))((o)->vt))[idx]((o), ##__VA_ARGS__))

void func_ov011_021c94bc(void *obj, int state)
{
    uint8_t *p = (uint8_t *)obj;
    Obj2 *node;
    int r6;
    int cur;

    if (state > 4) {
        return;
    }
    cur = *(int *)(p + 0x3b0);
    r6 = 0;
    if (cur == 6) {
        r6 = 1;
    }
    if (cur == state) {
        return;
    }
    *(int *)(p + 0x3b0) = state;
    if (!r6) {
        func_02021338(0xb7);
    }
    if (*(void **)(p + 0xe4) != 0) {
        func_02056bf4(p + 0x48);
        node = *(Obj2 **)(p + 0xe4);
        if (node != 0) {
            VCALL(node, 1);
        }
        *(void **)(p + 0xe4) = 0;
    }
    *(void **)(p + 0xe4) = func_0203bc04(*(void **)(p + 0xe8 + (state << 2)), 1, 0, 0);
    func_02056bc0(p + 0x48, *(void **)(p + 0xe4));
    node = *(Obj2 **)(p + 0xe4);
    VCALL(node, 10);
    node = *(Obj2 **)(p + 0xe4);
    VCALL(node, 8, 2);
    {
        Pair s;
        s.a = 0;
        s.b = 0xa0;
        node = *(Obj2 **)(p + 0xe4);
        VCALL(node, 3, s.a, s.b);
    }
    if (r6) {
        func_ov011_021c9418(obj, state);
        return;
    }
    {
        Pair d = data_ov011_021cbd9c;
        uint32_t r4 = func_ov011_021c95a8(obj, d.a, d.b, state);
        void *t = func_0203b720();
        func_02056bc0(p + 0x14, t);
        func_02056bc0(p + 0x14, (void *)r4);
    }
}
