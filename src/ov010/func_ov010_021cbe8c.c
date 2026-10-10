#include "ffc/types.h"

extern uint32_t func_0200d608(void *self, int32_t n);
extern void func_ov010_021d07c4(void *self, int32_t n, uint32_t extra);
extern void func_02090398(void *dst, const void *src, uint32_t size);

typedef struct {
    void *data;   /* +0 */
    int32_t size; /* +4 */
    int32_t cap;  /* +8 */
} Vec;

void func_ov010_021cbe8c(Vec *p, uint32_t *a, uint32_t *b) {
    int32_t n = b - a;
    uint32_t extra;
    int flag = 0;

    if ((uint32_t)n > (uint32_t)p->cap) {
        extra = func_0200d608(p, n - p->cap);
        flag = 1;
    }
    if (flag) {
        func_ov010_021d07c4(p, n, extra);
    }
    func_02090398(p->data, a, (((char *)b - (char *)a) / 4) * 4);
    p->size = n;
}
