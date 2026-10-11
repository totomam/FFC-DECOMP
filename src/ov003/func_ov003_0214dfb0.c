#include "ffc/types.h"

extern uint32_t data_0213e098;
extern void func_02055050(uint32_t a, uint32_t b);

typedef struct {
    uint32_t pad[3];
    uint32_t f0c;
    uint32_t pad2;
    uint32_t f14;
} S;

void func_ov003_0214dfb0(S *p) {
    func_02055050(data_0213e098, p->f14);
    p->f0c = (p->f0c & ~0xffu) | 2;
}
