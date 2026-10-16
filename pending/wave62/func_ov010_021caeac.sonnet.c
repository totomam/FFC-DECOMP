#include "ffc/types.h"
extern void func_ov010_021cefb4(void *a);
extern void *func_0203b708(void *a);
extern void func_02056bc0(void *object, void *node);
extern void *data_0209de38;
typedef struct S { uint8_t pad[0xc]; uint32_t f0c; uint8_t pad2[0x14]; } S;
void func_ov010_021caeac(uint8_t *p) {
    if (*(uint32_t *)(p + 0x84) <= 0x13) {
        func_ov010_021cefb4(*(void **)(p + 0x80));
        if (*(uint32_t *)(p + 0x84) < *(uint32_t *)(*(uint8_t **)(p + 0x80) + 0x188) - 1) {
            func_02056bc0(p + 0x14, func_0203b708(data_0209de38));
        }
    } else {
        *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xff) | 2;
    }
    *(uint32_t *)(p + 0x84) += 1;
}
