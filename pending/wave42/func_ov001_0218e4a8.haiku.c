#include "ffc/types.h"

extern void *data_020b8e44;
extern void func_ov001_0218dde0(void *self, uint32_t idx);
extern uint32_t func_02056ac8(void);
extern uint32_t func_02056b34(void);
extern void func_02056bc0(void *object, uint32_t node);
extern void func_02075ae4(uint32_t v);
extern uint32_t func_02056aa4(void);

typedef uint32_t (*VFn)(void *);

void func_ov001_0218e4a8(void *self)
{
    uint32_t v;

    if (*(uint32_t *)(*(uint8_t **)data_020b8e44 + 0x88) != 0) {
        func_ov001_0218dde0(self, 1);
        v = func_02056ac8();
        func_02056bc0((uint8_t *)self + 0x14, v);

        func_ov001_0218dde0(self, 0);
        v = func_02056b34();
        func_02056bc0((uint8_t *)self + 0x14, v);

        func_ov001_0218dde0(self, 2);
        v = func_02056b34();
        func_02056bc0((uint8_t *)self + 0x14, v);

        func_ov001_0218dde0(self, 3);
        v = func_02056b34();
        func_02056bc0((uint8_t *)self + 0x14, v);

        v = ((VFn)(*(uint32_t **)self)[7])(self);
        func_02056bc0((uint8_t *)self + 0x14, v);

        func_02075ae4(*(uint32_t *)(*(uint8_t **)data_020b8e44 + 0x88));

        func_ov001_0218dde0(self, 1);
        v = func_02056aa4();
        func_02056bc0((uint8_t *)self + 0x14, v);
    }
}
