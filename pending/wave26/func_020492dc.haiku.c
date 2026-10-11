#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_0203bea0(void *p);
extern void func_0203bf28(int a, int b, int c, uint32_t d, uint32_t e, uint32_t f);
extern void func_0203c354(void);
extern void func_0203c270(void);
extern Pair data_020afed8;

void func_020492dc(uint8_t *p) {
    func_0203bea0(p);
    func_0203bf28(5, 2, 1, 0, 0, 0);
    func_0203c354();
    func_0203c270();
    *(Pair *)(p + 0x80) = data_020afed8;
}
