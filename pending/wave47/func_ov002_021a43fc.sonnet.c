#include "ffc/types.h"

extern uint32_t func_ov002_021a18bc(const void *object);
extern uint32_t func_ov002_021a1ac4(const void *object);
extern void *func_0203b6fc(void);
extern void *func_0203bd04(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_ov002_021a18c4(const void *object, uint32_t index);
extern void *func_ov002_021ab244(uint32_t a, uint32_t b, void *c);
extern void *func_02056aec(void *object);

typedef struct { uint8_t pad[0x14]; uint8_t f; } N;

void func_ov002_021a43fc(uint8_t *self) {
    uint32_t vals[2];
    uint32_t n4;
    uint32_t n5;
    N *node;
    void *list;
    void *p;
    int i;
    int j;

    n4 = func_ov002_021a18bc((void *)*(uint32_t *)(self + 0x80));
    n5 = func_ov002_021a18bc((void *)func_ov002_021a1ac4((void *)*(uint32_t *)(self + 0x80)));
    list = func_0203b6fc();
    node = (N *)func_0203bd04(0x100fe, 0, 0, n4 + n5);
    func_02056bc0(list, node);

    vals[0] = *(uint32_t *)(self + 0x80);
    vals[1] = func_ov002_021a1ac4((void *)vals[0]);

    for (i = 0; i < 2; i++) {
        {
            for (j = 0; j < (int)func_ov002_021a18bc((void *)vals[i]); j++) {
                uint32_t item = func_ov002_021a18c4((void *)vals[i], j);
                p = &node->f;
                func_02056bc0(list, func_ov002_021ab244(item, 0, p));
            }
        }
    }

    func_02056bc0(self + 0x14, list);
    node = (N *)func_02056aec(self);
    self = self + 0x14;
    func_02056bc0(self, node);
}
