#include "ffc/types.h"

typedef struct Vtbl {
    char pad[0x38];
    void (*fn)(void *self, uint32_t a, uint32_t b);
} Vtbl;

extern void func_02021338(uint32_t x);

void func_ov011_021c67b8(uint8_t *p, int flag)
{
    if (flag != 0) {
        func_02021338(0xb9);
        {
            void **obj = (void **)(p + 0x94);
            Vtbl *vt = (Vtbl *)*(void **)*obj;
            vt->fn(*obj, 3, 0);
        }
    } else {
        void **obj = (void **)(p + 0x94);
        Vtbl *vt = (Vtbl *)*(void **)*obj;
        vt->fn(*obj, 2, 0);
    }
}
