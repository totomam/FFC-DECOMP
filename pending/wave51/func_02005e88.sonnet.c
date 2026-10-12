#include "ffc/types.h"

extern int32_t func_02091ad4(void *buf, int32_t size, void *fmt, uint32_t arg);
extern void func_02056858(void *p);
extern void *func_02056830(int32_t size);
extern uint32_t func_02005f1c(void *object, void *buf);

typedef struct {
    uint32_t flag : 1;
    uint32_t rest : 31;
    uint32_t val;
} Obj;

uint32_t func_02005e88(Obj *obj, void *fmt, uint32_t *arg)
{
    char buf[256];
    void *cur = buf;
    int32_t m;
    int32_t size = 256;
    void *heap = 0;

    for (;;) {
        m = func_02091ad4(cur, size, fmt, *arg) + 1;
        if (m != 0 && m <= size) {
            break;
        }
        size = size << 1;
        if (heap != 0) {
            func_02056858(heap);
        }
        heap = func_02056830(m + size);
        cur = heap;
        size = m + size;
    }

    func_02005f1c(obj, cur);

    if (heap != 0) {
        func_02056858(heap);
    }

    if (!obj->flag) {
        uint32_t v = ((uint8_t *)obj)[0];
        return (v << 24) >> 25;
    }
    return obj->val;
}
