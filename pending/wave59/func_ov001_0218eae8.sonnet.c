#include "ffc/types.h"
extern void *func_02056aec(void);
extern void *func_0203b708(int x);
extern void func_02056bc0(void *object, void *node);
void func_ov001_0218eae8(uint8_t *p, uint32_t v) {
    if (v == *(uint32_t *)(p + 0xb8)) {
        void *a = func_02056aec();
        void *b = func_0203b708(0x1e);
        func_02056bc0(p + 0x14, b);
        func_02056bc0(p + 0x14, a);
    }
}
