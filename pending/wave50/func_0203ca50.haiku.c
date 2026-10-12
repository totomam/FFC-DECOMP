#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *data_020b93b8;
extern Pair data_020aecd0;
extern Pair data_020aecd8;
extern void func_0201d1b0(void *a, void *b);
extern void func_0201ba14(void *a, void *b, void *c, int d);
extern void func_0200b65c(void *a, void *b);
extern void *func_020059cc(void *object);
extern int func_0201e9bc(void *a);

void func_0203ca50(uint8_t *obj) {
    uint32_t buf[3];

    func_0201d1b0(data_020b93b8, obj + 0x90);
    func_0201ba14(buf, data_020b93b8, obj + 0x90, 1);
    func_0200b65c(obj + 0xb8, buf);
    func_020059cc(buf);
    if (func_0201e9bc(data_020b93b8) == 0) {
        *(Pair *)(obj + 0x80) = data_020aecd0;
        return;
    }
    *(Pair *)(obj + 0x80) = data_020aecd8;
}
