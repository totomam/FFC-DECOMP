#include "ffc/types.h"

typedef struct {
    uint32_t pad0;
    void *buf;
    int32_t end;
} Obj;

extern void *func_ov000_021653e4(void *buf, int32_t end);

int func_ov001_021719e0(Obj *p, int32_t n)
{
    int32_t end;
    void *r;

    if (p == 0) {
        return 0;
    }
    if (n <= 0) {
        return 0;
    }
    end = p->end + n;
    r = func_ov000_021653e4(p->buf, end);
    if (r == 0) {
        return 0;
    }
    p->buf = r;
    p->end = end;
    return 1;
}
