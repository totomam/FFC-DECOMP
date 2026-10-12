#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_ov009_021a2f2c(void *p, void *data, uint32_t a, uint32_t b, uint32_t c);
extern void func_ov009_021a3150(void *p, void *data, uint32_t n);
extern void func_ov009_021a3370(void *p, uint32_t a, uint32_t b);
extern void func_02056bc0(void *object, void *node);
extern void *func_ov009_021a39f4(void *p);
extern uint8_t data_ov011_021cbe30[];
extern uint8_t data_ov011_021ca160[];

void func_ov011_021c6d00(uint8_t *obj) {
    void *p = func_0205681c(0x1cc);
    if (p) {
        p = func_ov009_021a2f2c(p, data_ov011_021cbe30, 3, 1, 0);
    }
    *(void **)(obj + 0xc8) = p;
    func_ov009_021a3150(*(void **)(obj + 0xc8), data_ov011_021ca160, 0x13);
    func_ov009_021a3370(*(void **)(obj + 0xc8), 1, 0);
    func_02056bc0(obj + 0x48, *(void **)(obj + 0xc8));
    {
        void *r = func_ov009_021a39f4(*(void **)(obj + 0xc8));
        func_02056bc0(obj + 0x14, r);
    }
}
