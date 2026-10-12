#include "ffc/types.h"

extern void func_0208763c(void *a);
extern void func_02087678(void *a);

struct Guard {
    void *ptr;
    volatile uint8_t flag;
};

void func_0205514c(uint8_t *p) {
    struct Guard g;
    g.ptr = p + 0x150;
    g.flag = 1;
    if (g.flag != 0) {
        func_0208763c(g.ptr);
    }
    if ((int8_t)*(uint32_t *)(p + 0xf0) == 0) {
        void **obj = (void **)(p + 0xe4);
        void (*fn)(void *) = (void (*)(void *))(((void **)*obj)[2]);
        fn(obj);
    }
    if (g.flag) {
        func_02087678(g.ptr);
    }
}
