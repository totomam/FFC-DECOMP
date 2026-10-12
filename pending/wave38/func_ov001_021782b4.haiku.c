#include "ffc/types.h"

typedef struct {
    uint8_t *data;
    int32_t size;
    int32_t used;
} Buf;

extern uint8_t *func_ov000_021653e4(uint8_t *data, int32_t size);
extern int func_ov001_0217ef6c(void *a, const void *msg);
extern void func_02090380(void *destination, const void *source, int32_t length);
extern const char data_ov001_021905a4[];

int func_ov001_021782b4(void *a, Buf *p, const void *src, int32_t n)
{
    int32_t used;
    int32_t size;
    uint8_t *d;

    if (src == 0) {
        return 0;
    }
    used = p->used;
    size = p->size;
    d = p->data;
    if (size - used < n) {
        int32_t grow = (n < 0x4000) ? 0x4000 : n;
        size += grow;
        d = func_ov000_021653e4(p->data, size + 1);
        if (d == 0) {
            func_ov001_0217ef6c(a, data_ov001_021905a4);
            return 1;
        }
    }
    func_02090380(d + used, src, n);
    d[used + n] = 0;
    p->size = size;
    p->used = p->used + n;
    p->data = d;
    return 0;
}
