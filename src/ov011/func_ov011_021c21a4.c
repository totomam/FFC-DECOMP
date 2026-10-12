#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_ov011_021c0574(void *a, void *b, uint8_t c);
extern void func_02056bc0(void *object, void *node);
extern void func_02036a80(void *a, uint8_t b);
extern void func_0201f1a8(void *a, uint8_t b, void *c);
extern void *func_ov011_021c02a8(void *a, Pair s);
extern void *data_020b93b8;
extern Pair data_ov011_021cb194;

void func_ov011_021c21a4(uint8_t *p)
{
    void *r;
    r = func_ov011_021c0574(p, p + 0x220, p[0x220 + 0x59]);
    func_02056bc0(p + 0x14, r);
    func_02036a80(p + 0x220, p[0x220 + 0x59]);
    func_0201f1a8(data_020b93b8, p[0x220 + 0xa9], p + 0x220);
    r = func_ov011_021c02a8(p, data_ov011_021cb194);
    func_02056bc0(p + 0x14, r);
}
