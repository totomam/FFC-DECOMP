#include "ffc/types.h"

typedef struct {
    uint8_t pad0[0x20];
    uint32_t flags;
    uint8_t pad1[0x3c - 0x24];
    uint32_t crc;
} Obj;

extern void func_020840a8(uint32_t *table, uint32_t poly);
extern uint32_t func_02084130(uint32_t *table, Obj *p, uint32_t size);

void func_ov000_02155374(Obj *p) {
    uint32_t table[256];
    p->flags &= ~1u;
    func_020840a8(table, 0xedb88320);
    p->crc = func_02084130(table, p, 0x3c);
}
