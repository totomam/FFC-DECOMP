#include "ffc/types.h"

extern void *func_ov000_021653d4(uint32_t size);
extern void *func_020903cc(void *object, int value, uint32_t size);

typedef struct {
    uint32_t zero;
    uint32_t count;
    uint32_t elemSize;
    uint32_t cap;
    uint32_t flags;
    void *data;
} FfcObj;

void *func_ov000_021686f4(uint32_t elemSize, uint32_t count, uint32_t flags)
{
    FfcObj *p = (FfcObj *)func_ov000_021653d4(0x18);

    if (count == 0) {
        count = 8;
    }
    p->zero = 0;
    p->count = count;
    p->elemSize = elemSize;
    p->cap = count;
    p->flags = flags;
    if (count != 0) {
        p->data = func_ov000_021653d4(count * p->elemSize);
        func_020903cc(p->data, 0, p->count * p->elemSize);
    } else {
        p->data = 0;
    }
    return p;
}
