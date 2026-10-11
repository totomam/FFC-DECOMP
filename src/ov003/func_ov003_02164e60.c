#include "ffc/types.h"

extern void *data_020b93b8;
extern int32_t func_0201c218(void *a, void *b);
extern void *func_0203b708(void);
extern void func_02056bc0(void *object, void *node);
extern void *func_02056aec(void *obj);

void func_ov003_02164e60(uint8_t *p) {
    if (func_0201c218(data_020b93b8, *(void **)(p + 0x80)) > 0) {
        func_02056bc0(p + 0x14, func_0203b708());
    }
    func_02056bc0(p + 0x14, func_02056aec(p));
}
