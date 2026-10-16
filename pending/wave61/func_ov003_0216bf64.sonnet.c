#include "ffc/types.h"
extern void *func_0203b688(void *a);
extern void *func_0205681c(uint32_t n);
extern void *func_ov003_02165e88(void *b, void *a, uint32_t c, uint32_t d, uint32_t e);
extern void func_02056bc0(void *object, void *node);
typedef struct { uint16_t type; uint16_t pad; uint32_t count; uint32_t off; } H;
void *func_ov003_0216bf64(void *a, H *p) {
    void *obj = func_0203b688(a);
    uint32_t flag = (p->type == 0x4a);
    uint32_t i;
    for (i = 0; i < p->count; i++) {
        void *n = func_0205681c(0x24);
        if (n != 0) {
            uint32_t v = *(uint32_t *)((uint8_t *)p + p->off + i * 4);
            n = func_ov003_02165e88(n, a, v >> 24, v & 0xffffff, flag);
        }
        func_02056bc0(obj, n);
    }
    return obj;
}
