#include "ffc/types.h"

extern uint32_t func_ov000_021599d0(uint32_t);
extern int func_ov001_02175ea8(void *, uint32_t);
extern void func_ov001_02175f00(void *, uint32_t);
extern void func_ov001_02175d6c(void *, uint32_t, uint32_t *);
extern uint8_t data_ov000_0217004c[];

typedef void (*CbFn)(uint32_t, uint32_t, void *, uint32_t);

typedef struct {
    uint8_t pad[0x34];
    CbFn fn;
    uint32_t arg;
} Ctx;

typedef struct {
    uint8_t pad[0xc];
    Ctx *ctx;
} Root;

typedef struct {
    uint32_t out[2];
    uint8_t pad[0x100];
    uint8_t buf[0x10c];
} Local;

void func_ov000_02159924(void *a, uint32_t *b)
{
    Local l;
    uint32_t id;
    Ctx *c;

    id = func_ov000_021599d0(*b);
    if (id == 0xffffffffu) {
        if (func_ov001_02175ea8(a, *b)) {
            func_ov001_02175f00(a, *b);
        }
        return;
    }
    c = ((Root *)data_ov000_0217004c)->ctx;
    if (c->fn == 0) {
        return;
    }
    func_ov001_02175d6c(a, b[2], l.out);
    c = ((Root *)data_ov000_0217004c)->ctx;
    c->fn(id, (uint8_t)l.out[1], l.buf, c->arg);
}
