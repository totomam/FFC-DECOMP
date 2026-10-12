#include "ffc/types.h"

extern void func_02021338(uint32_t code);
extern void func_ov007_021a365c(void *self);
extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021a26bc(void *buf, void *self, void *val, void *node);
extern void func_02056bc0(void *object, void *node);
extern void *func_ov007_021a30ec(void *buf, void *self, void *val, void *node);

void func_ov007_021a3ff4(void *self_, void *node_)
{
    uint8_t *self = (uint8_t *)self_;
    uint8_t *node = (uint8_t *)node_;
    void *r;

    if (node_ == *(void **)(self + 0x130)) {
        func_02021338(0xb3);
        **(uint32_t **)(self + 0xf4) = 4;
        func_ov007_021a365c(self);
        return;
    }
    if (node_ == *(void **)(self + 0x128)) {
        func_02021338(0xcf);
        **(uint32_t **)(self + 0xf4) = 2;
        func_ov007_021a365c(self);
        return;
    }
    if (node_ == *(void **)(self + 0x12c)) {
        func_02021338(0xcf);
        **(uint32_t **)(self + 0xf4) = 3;
        func_ov007_021a365c(self);
        return;
    }
    if (node_ != 0 && *(uint32_t *)(node + 0x94) == 0xa21b58b6 &&
        *(uint32_t *)(node + 0x98) == 0x49505343 &&
        *(uint32_t *)(node + 0x9c) == 0x5a1bb469) {
        if (*(uint32_t *)(node + 0xb8) == 1) {
            uint32_t sz = 0xcf;
            func_02021338(0xcf);
            sz += 0x31;
            r = func_0205681c(sz);
            if (r != 0) {
                r = func_ov007_021a26bc(r, self, *(void **)(self + 0xf0), node_);
            }
            func_02056bc0(self + 0x14, r);
            return;
        }
        if (*(uint32_t *)(node + 0xb8) == 2) {
            func_02021338(0xcf);
            r = func_0205681c(0xf4);
            if (r != 0) {
                r = func_ov007_021a30ec(r, self, *(void **)(self + 0xf0), node_);
            }
            func_02056bc0(self + 0x14, r);
            return;
        }
        func_02021338(0xc7);
        return;
    }
    func_02021338(0xcf);
}
