#include "ffc/types.h"

typedef struct { uint32_t a, b; } P;
extern void func_02037598(void *p);
extern void func_ov001_0218c454(void *p, int n);
extern P data_ov001_021948ac;

void func_ov001_0218ca88(uint8_t *p) {
    func_02037598(p);
    func_ov001_0218c454(p, 4);
    *(P *)(p + 0xb0) = data_ov001_021948ac;
}
