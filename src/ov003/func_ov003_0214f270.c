#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_0203b75c(uint32_t n);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov003_02179a78;

void func_ov003_0214f270(uint8_t *self) {
    void *node = func_0203b75c(15);
    func_02056bc0(self + 0x14, node);
    {
        Pair tmp = data_ov003_02179a78;
        *(Pair *)(self + 0x80) = tmp;
    }
}
