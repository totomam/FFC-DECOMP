#include "ffc/types.h"

extern void *func_0203b688(void);
extern void *func_0205681c(uint32_t size);
extern void *func_ov003_02165e88(void *obj, void *ctx, uint32_t type, uint32_t val, int flag);
extern void func_02056bc0(void *object, void *node);

typedef struct {
    uint16_t type;
    uint16_t pad;
    uint32_t count;
    uint32_t off;
} Node;

void *func_ov003_0216bf64(void *ctx, Node *node) {
    void *base = func_0203b688();
    int flag = (node->type == 0x4a);
    uint32_t i;
    for (i = 0; i < node->count; i++) {
        void *r = func_0205681c(0x24);
        if (r) {
            uint32_t w = *(uint32_t *)((uint8_t *)node + node->off + i * 4);
            r = func_ov003_02165e88(r, ctx, w >> 24, w & 0xffffff, flag);
        }
        func_02056bc0(base, r);
    }
    return base;
}
