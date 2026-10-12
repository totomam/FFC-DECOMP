#include "ffc/types.h"

typedef struct {
    uint32_t x;
    uint32_t y;
} Pt;

extern uint32_t data_020b93b8;
extern uint32_t data_020b8e44;
extern uint32_t data_0213df18;
extern uint32_t func_0201ab3c(void);
extern uint32_t func_0203b720(void);
extern void func_02056bc0(void *object, uint32_t node);
extern uint32_t func_0206cbf4(void);
extern uint32_t func_02075a98(void);
extern uint32_t func_0205681c(uint32_t size);
extern uint32_t func_ov001_0218ed2c(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_02054254(void);
extern void func_020543b8(void);
extern void func_020214b4(void);
extern uint32_t func_0203c250(void);
extern void func_02060e80(uint32_t object);
extern uint32_t func_0204f7ec(uint32_t object);
extern uint32_t func_020159c8(uint32_t a, uint32_t b);
extern uint32_t func_0203bdf0(uint32_t a, Pt p, uint32_t b, uint32_t c, uint32_t d, uint32_t e);

void func_02008bb0(uint32_t *self) {
    uint32_t *A;
    uint32_t res;
    uint32_t r;
    Pt pos;

    if (data_020b93b8 == 0) {
        return;
    }
    if (func_0201ab3c()) {
        self[3] = (self[3] & ~0xffu) | 2u;
        return;
    }
    if (self[0x21] != 0) {
        ((uint32_t *)self[0x21])[3] = (((uint32_t *)self[0x21])[3] & ~0xffu) | 2u;
        func_02056bc0(self + 5, func_0203b720());
    }
    if (self[0x22] != 0) {
        func_02056bc0(self + 5, func_0206cbf4());
    }
    if (self[0x23] != 0) {
        A = &data_020b8e44;
        if (((uint32_t *)((uint32_t *)A[0])[0])[0x22] != 0 && func_02075a98() != 0) {
            r = func_0205681c(0xb8);
            res = 0;
            if (r != 0) {
                res = func_ov001_0218ed2c(r, ((uint32_t *)A[0])[0], self[0x23], (uint32_t)(self + 0x24), 1, 1);
            }
            func_02056bc0(self + 5, res);
        }
    }
    func_02054254();
    func_020543b8();
    func_020214b4();
    func_02060e80(func_0203c250());
    pos.x = 0x80;
    pos.y = 0x60;
    A = (uint32_t *)func_0204f7ec(data_0213df18);
    res = func_020159c8(data_020b8e44, self[0x20]);
    func_02056bc0(self + 5, func_0203bdf0((uint32_t)A, pos, res, 4, 0, 0));
}
