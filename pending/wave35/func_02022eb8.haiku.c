#include "ffc/types.h"

extern void func_0208763c(void *a, uint32_t b);
extern void func_02023570(void *a, void *b, void *c);
extern void func_02087678(void *a);

typedef struct {
    uint32_t x;
    void *node;
    uint32_t rest[6];
} Tmp;

void func_02022eb8(uint8_t *obj, uint32_t key) {
    void *a = obj + 0x220;
    void *n;
    Tmp s;
    int c;

    func_0208763c(a, key);
    n = *(void **)(obj + 0x54);
    c = 0;
    if (n != obj + 0x50 && *(uint32_t *)((uint8_t *)n + 8) != key) {
        c = 1;
    }
    while (c) {
        n = *(void **)((uint8_t *)n + 4);
        c = 0;
        if (n != obj + 0x50 && *(uint32_t *)((uint8_t *)n + 8) != key) {
            c = 1;
        }
    }
    if (n != obj + 0x50) {
        s.node = n;
        func_02023570(&s.x, obj + 0x4c, &s.node);
    }
    func_02087678(a);
}
