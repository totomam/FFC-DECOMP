#include "ffc/types.h"

typedef struct {
    uint8_t pad0[0x1c];
    uint32_t count;
    uint8_t pad1[0x54 - 0x20];
    void *obj;
} GlobalState;

extern GlobalState data_020b8df0;
extern uint32_t data_020ad428[];
extern uint32_t data_020ad42c[];

extern uint32_t func_02019df0(void *obj, uint32_t idx);
extern uint32_t func_02019e08(void *obj, uint32_t idx);
extern uint32_t func_02019e54(void *obj, uint32_t idx);
extern void func_02005988(void *a, void *b);
extern uint32_t func_02017ec8(void *b, uint32_t idx);
extern uint32_t func_0201a3a0(void *object, const void *third);
extern uint32_t func_020159c8(void *b, uint32_t v);
extern void func_020095b8(void *a, void *buf);
extern void *func_020059cc(void *object);

void func_020198fc(void *a, void *b, uint32_t c)
{
    uint32_t x;
    uint32_t y;
    uint32_t z;
    uint32_t buf[3];
    uint32_t i;

    x = func_02019df0(data_020b8df0.obj, c);
    y = func_02019e08(data_020b8df0.obj, c);
    z = func_02019e54(data_020b8df0.obj, c);

    if (x == 0 || x >= data_020b8df0.count) {
        func_02005988(a, data_020ad428);
        return;
    }

    for (i = 0; i < 3; i++) {
        buf[i] = 0;
    }

    func_0201a3a0(buf, (const void *)func_02017ec8(b, x));

    if (z == 0) {
        func_0201a3a0(buf, data_020ad42c);
        func_0201a3a0(buf, (const void *)func_020159c8(b, 10));
        func_0201a3a0(buf, (const void *)func_020159c8(b, y + 0x15d));
        func_0201a3a0(buf, (const void *)func_020159c8(b, 11));
    }

    func_020095b8(a, buf);
    func_020059cc(buf);
}
