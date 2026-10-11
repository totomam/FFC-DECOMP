#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t x);
extern char data_ov002_021d4d10[];
extern uint32_t *data_0213df18;

uint32_t *func_ov002_0219f260(uint32_t *self, uint32_t arg) {
    func_02056c9c(self, 0);
    self[0] = (uint32_t)data_ov002_021d4d10;
    self[0x20] = arg;
    self[0x21] = data_0213df18[8];
    self[0x22] = data_0213df18[9];
    self[0x23] = 0;
    self[0x24] = 0;
    return self;
}
