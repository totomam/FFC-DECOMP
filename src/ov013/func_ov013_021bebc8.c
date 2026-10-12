#include "ffc/types.h"

typedef struct {
    uint32_t w0;
    uint32_t w1;
} Pair;

extern uint32_t func_0206cb98(uint32_t x);
extern uint32_t func_0206cb74(uint32_t x);
extern void func_0208d350(uint32_t a, uint32_t b, uint32_t c);
extern void func_ov013_021bec9c(void *p);
extern Pair data_ov013_021c4348;
extern Pair data_ov013_021c4350;

void func_ov013_021bebc8(uint8_t *p) {
    if (func_0206cb98(*(uint32_t *)(p + 0xf4)) != 0) {
        if (func_0206cb74(*(uint32_t *)(p + 0xf4)) != 0) {
            func_0208d350(14, 0, 0);
        }
        *(Pair *)(p + 0xb8) = data_ov013_021c4348;
        return;
    }
    if (func_0206cb74(*(uint32_t *)(p + 0xf4)) == 0) {
        func_ov013_021bec9c(p);
    }
    *(Pair *)(p + 0xb8) = data_ov013_021c4350;
}
