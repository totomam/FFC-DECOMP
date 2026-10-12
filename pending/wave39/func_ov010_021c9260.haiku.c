#include "ffc/types.h"

extern void *data_020b93b8;
extern void func_0201f36c(const void *object, uint32_t index, void *output);
extern void func_0201f460(const void *object, uint32_t index, void *output);
extern void func_0201f600(const void *object, uint32_t index, void *output);

void func_ov010_021c9260(void *param0, uint32_t param1, void *param2)
{
    uint8_t *obj = (uint8_t *)param0;
    uint8_t *sub = obj + 0x120;
    uint32_t *table;

    switch (sub[0]) {
    case 0:
        table = *(uint32_t **)(obj + 0xf4);
        func_0201f36c(data_020b93b8, table[param1], param2);
        return;
    case 1:
        table = *(uint32_t **)(obj + 0xf4);
        func_0201f460(data_020b93b8, table[param1], param2);
        return;
    case 2:
        table = *(uint32_t **)(obj + 0xf4);
        func_0201f600(data_020b93b8, table[param1], sub + 4);
        return;
    }
}
