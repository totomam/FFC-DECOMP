#include "ffc/types.h"

struct FfcMarDecoded;

extern void func_02052c94(struct FfcMarDecoded *mar, uint32_t index);
extern void *func_02052d90(const struct FfcMarDecoded *mar, uint32_t index);

typedef struct {
    uint8_t pad[0x28];
    struct FfcMarDecoded *mar;
    uint32_t index;
    uint8_t flag;
} func_0205da5c_obj;

void *func_0205daac(func_0205da5c_obj *p)
{
    if (p->mar != 0 && p->flag == 0) {
        p->flag = 1;
        func_02052c94(p->mar, p->index);
    }
    return func_02052d90(p->mar, p->index);
}
