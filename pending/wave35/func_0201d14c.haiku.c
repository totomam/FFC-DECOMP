#include "ffc/types.h"

extern void func_02084b2c(void *dst, int val, uint32_t size);

typedef struct {
    uint32_t w[9];
} Body;

typedef struct {
    uint16_t key;
    uint8_t b;
    uint8_t pad;
    Body body;
} Entry;

typedef struct {
    uint8_t pad[0x44];
    Entry *tbl;
} Ctx;

void func_0201d14c(Ctx *self, uint32_t key, Entry *out)
{
    uint32_t i;
    for (i = 0; i < 100; i++) {
        if (key == self->tbl[i].key) {
            Entry *e = self->tbl + i;
            out->key = self->tbl[i].key;
            out->b = e->b;
            out->body = self->tbl[i].body;
            return;
        }
    }
    func_02084b2c(out, 0, 0x28);
    out->key = (uint16_t)key;
}
