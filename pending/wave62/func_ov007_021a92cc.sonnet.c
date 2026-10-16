#include "ffc/types.h"
extern void *func_02056aec(void);
extern void *func_0203b708(int x);
extern void func_02056bc0(void *object, void *node);
void func_ov007_021a92cc(uint8_t *self, uint32_t v) {
    if (v == *(uint32_t *)(self + 0xcc)) {
        void *a;
        void *b;
        **(uint32_t **)(self + 0xd0) = 0;
        a = func_02056aec();
        b = func_0203b708(0x1e);
        func_02056bc0(self + 0x14, b);
        func_02056bc0(self + 0x14, a);
    }
}
