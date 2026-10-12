#include "ffc/types.h"

extern void *func_020363bc(const void *object);
extern void *func_02017ec8(void *a, uint32_t b);
extern void func_02005988(void *a, void *b);
extern void func_02051060(void *a, void *b, uint32_t c);
extern void func_0203649c(void *a, void *b);
extern void *func_0200a678(void *object);
extern void *func_020059cc(void *object);
extern void *func_020903cc(void *object, uint32_t a, uint32_t b);
extern void *data_020b8e44;

void func_020364ec(void *a, void *b) {
    uint8_t s1[12];
    uint8_t s0[12];
    uint8_t *obj = func_020363bc(a);
    if (obj) {
        void *x = func_02017ec8(data_020b8e44, *(uint16_t *)(obj + 0x30));
        func_02005988(s1, x);
        func_02051060(s0, s1, 0);
        func_0203649c(a, s0);
        func_0200a678(s0);
        func_020059cc(s1);
    } else {
        if (b) {
            func_020903cc((uint8_t *)a + 0x30, 0, 0x22);
        }
    }
}
