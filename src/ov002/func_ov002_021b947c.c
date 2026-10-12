#include "ffc/types.h"

extern uint32_t func_ov002_02198d08(void *a, void *b);
extern uint32_t func_ov002_0219c6ac(uint32_t x);
extern uint32_t func_ov002_0219c5d8(uint32_t x, uint32_t i);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_ov002_021ae4d4(uint32_t x);
extern void *func_ov002_021b7fa8(void *p, uint32_t x);
extern void func_02069404(void *object, uint32_t value);
extern void func_020695ec(void *a, void *b);

int func_ov002_021b947c(uint8_t *this) {
    uint32_t n = func_ov002_0219c6ac(func_ov002_02198d08(*(void **)(this + 0xbc), *(void **)(this + 0xc0)));
    uint32_t i;
    for (i = 0; i < 3; i++) {
        void **base = (void **)(this + i * 4);
        uint32_t r;
        void *obj;
        base[0x44] = 0;
        if (*(uint32_t *)(this + 0xe4) & (1u << (n + i))) {
            r = func_ov002_0219c5d8(func_ov002_02198d08(*(void **)(this + 0xbc), *(void **)(this + 0xc0)), n + i);
            if (r != 0) {
                obj = func_0205681c(0x98);
                if (obj != 0) {
                    obj = func_ov002_021b7fa8(obj, func_ov002_021ae4d4(r));
                }
                base[0x44] = obj;
                func_02069404(obj, 1);
                func_020695ec(this, base[0x44]);
            }
        }
    }
    return 1;
}
