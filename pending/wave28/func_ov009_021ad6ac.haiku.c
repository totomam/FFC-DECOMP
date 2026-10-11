#include "ffc/types.h"

extern void *data_020b93b8;
extern void func_0201f36c(const void *object, uint32_t index, void *output);
extern void func_0201f460(const void *object, uint32_t index, void *output);

void func_ov009_021ad6ac(uint8_t *self, uint32_t index, void *output)
{
    if (self[0x27b] == 0) {
        uint32_t *tbl = *(uint32_t **)(self + 0x184);
        uint8_t k = self[0x27d];
        func_0201f36c(data_020b93b8, tbl[index + k * 10], output);
    } else if (self[0x27b] == 1) {
        uint32_t *tbl = *(uint32_t **)(self + 0x1cc);
        uint8_t k = self[0x27d];
        func_0201f460(data_020b93b8, tbl[index + k * 10], output);
    }
}
