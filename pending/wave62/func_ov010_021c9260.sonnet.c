/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
extern void func_0201f36c(const void *object, uint32_t index, void *output);
extern void func_0201f460(const void *object, uint32_t index, void *output);
extern void func_0201f600(const void *object, uint32_t index, void *output);
extern void *data_020b93b8;
void func_ov010_021c9260(uint8_t *self, uint32_t index, void *out) {
    switch (self[0x120]) {
    case 0:
        func_0201f36c(data_020b93b8, (*(uint32_t **)(self + 0xf4))[index], out);
        break;
    case 1:
        func_0201f460(data_020b93b8, (*(uint32_t **)(self + 0xf4))[index], out);
        break;
    case 2:
        func_0201f600(data_020b93b8, (*(uint32_t **)(self + 0xf4))[index], self + 0x124);
        break;
    }
}
