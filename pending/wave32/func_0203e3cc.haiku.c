#include "ffc/types.h"

typedef struct {
    uint32_t lo;
    uint32_t hi;
} Pair;

extern void func_ov003_0214f210(void *p);
extern void *func_0205681c(uint32_t size);
extern void *func_0203c634(void *obj, void *a, uint32_t b, void *c, uint32_t d, uint32_t e, uint32_t f);
extern void func_02056bc0(void *object, void *node);
extern Pair data_020aef08;

void func_0203e3cc(uint8_t *this)
{
    void *obj;
    void *node;

    if (*(void **)(this + 0xbc)) {
        func_ov003_0214f210(*(void **)(this + 0xbc));
    }
    obj = func_0205681c(0xe4);
    node = obj;
    if (obj) {
        node = func_0203c634(obj, *(void **)(this + 0x88), 0, this + 0xa0, 0, 1, 0);
    }
    func_02056bc0(this + 0x14, node);
    *(Pair *)(this + 0x80) = data_020aef08;
}
