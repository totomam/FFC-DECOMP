#include "ffc/types.h"

extern void *func_02052d90(void *mar, void *index);
extern void *func_02056830(uint32_t size);
extern void func_02056858(void *p);
extern void *func_0205681c(uint32_t size);
extern void *func_02047920(void *node, void *a, uint32_t b, uint32_t c);
extern void func_02056bc0(void *object, void *node);
extern int func_0201c044(void *obj, uint32_t key);
extern int func_0201bf6c(void *obj, uint32_t key);
extern void *data_020b93b8;
extern uint32_t data_ov003_0217b7c8[2];

#define MAR_OF(s) func_02052d90(*(void **)((s) + 0xb0), *(void **)((s) + 0xb4))

typedef struct { uint32_t a; uint32_t b; } Pair;

void func_ov003_02172f64(uint8_t *self) {
    uint8_t *mar;
    uint8_t *flags;
    uint8_t *elem;
    uint32_t cnt = 0;
    uint32_t i;
    uint32_t state;
    void *node;

    mar = MAR_OF(self);
    flags = func_02056830(*(uint32_t *)(mar + 0x18));

    for (i = 0; i < *(uint32_t *)((uint8_t *)MAR_OF(self) + 0x18); i++) {
        mar = MAR_OF(self);
        elem = mar + *(uint32_t *)(mar + 0x1c) + i * 12;
        
        uint32_t key = *(uint16_t *)elem;
        flags[i] = 0;
        if (func_0201c044(data_020b93b8, key) != 0 ||
            func_0201bf6c(data_020b93b8, *(uint16_t *)(elem + 8)) != 0) {
            flags[i] = 1;
            cnt++;
        }
    }

    if (cnt != 0) {
        *(uint32_t *)(self + 0xa8) = cnt;
        *(void **)(self + 0xa4) = func_02056830(cnt * 4);
        cnt = 0;
        for (i = 0; i < *(uint32_t *)((uint8_t *)MAR_OF(self) + 0x18); i++) {
            if (flags[i] != 0) {
                ((uint32_t *)(*(uint8_t **)(self + 0xa4)))[cnt] = i;
                cnt++;
            }
        }
        state = 1;
    } else {
        state = 2;
    }
    *(uint32_t *)(self + 0x90) = state;

    if (flags != 0) {
        func_02056858(flags);
    }

    node = func_0205681c(0x88);
    if (node != 0) {
        node = func_02047920(node, *(void **)(self + 0x88), (uint16_t)*(uint32_t *)(self + 0x8c), 0);
    }
    func_02056bc0(self + 0x14, node);

    *(Pair *)(self + 0x80) = *(Pair *)data_ov003_0217b7c8;
}
