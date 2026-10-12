#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_02054254(void *obj);
extern void func_020543b8(void *obj);
extern void *func_0205681c(uint32_t size);
extern void *func_0200d050(void *p);
extern void func_02056bc0(void *object, void *node);
extern void *func_ov013_021bc8a0(void *p);
extern Pair data_ov013_021c3f10;

void func_ov013_021bcf14(uint8_t *self) {
    void *n;
    func_020543b8(func_02054254(self));
    n = func_0205681c(0x80);
    if (n) {
        n = func_0200d050(n);
    }
    func_02056bc0(self + 0x48, n);
    n = func_0205681c(0x100);
    if (n) {
        n = func_ov013_021bc8a0(n);
    }
    func_02056bc0(self + 0x14, n);
    *(Pair *)(self + 0x80) = data_ov013_021c3f10;
}
