#include "ffc/types.h"

extern void func_02089e64(void);
extern void func_02089e74(void);
extern void func_02087890(void *p, uint32_t n);

void func_0208a458(uint8_t *base, uint32_t idx, uint8_t *node)
{
    uint8_t *cur;
    uint8_t *prev;
    uint8_t *old;
    uint8_t *head;

    func_02089e64();
    head = *(uint8_t **)(base + (idx << 3) + 0x18);
    if (head != 0) {
        if (node == head) {
            func_02089e74();
            return;
        }
        cur = *(uint8_t **)(head + 0x18);
        if (cur == base + 0x18 + (idx << 3)) {
            *(uint8_t **)(head + 0x18) = *(uint8_t **)(base + (idx << 3) + 0x1c);
            func_02087890(head, 0x3c);
        } else {
            prev = cur;
            while (prev != 0 && *(uint8_t **)(prev + 4) != base + 0x18 + (idx << 3)) {
                prev = *(uint8_t **)(prev + 4);
            }
            *(uint8_t **)(prev + 4) = *(uint8_t **)(base + (idx << 3) + 0x1c);
            func_02087890(prev, 8);
        }
    }
    old = *(uint8_t **)(node + 0x18);
    *(uint8_t **)(node + 0x18) = base + 0x18 + (idx << 3);
    *(uint8_t **)(base + (idx << 3) + 0x1c) = old;
    *(uint8_t **)(base + 0x18 + (idx << 3)) = node;
    func_02089e74();
    func_02087890(base, 0x3c);
    func_02087890(node, 0x3c);
}
