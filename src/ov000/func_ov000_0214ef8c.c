#include "ffc/types.h"

extern void func_ov000_0214e940(uint32_t a, uint32_t b);

#define BS(x) ((((x) >> 24) & 0xff) | (((x) >> 8) & 0xff00) | (((x) << 8) & 0xff0000) | (((x) << 24) & 0xff000000))

void func_ov000_0214ef8c(uint32_t *a, uint32_t *b) {
    func_ov000_0214e940(BS(*a), BS(*b));
}
