#include "ffc/types.h"

extern uint32_t data_0213eb24;
extern uint32_t data_0213eb28;
extern void func_02077a7c(uint32_t *a, uint32_t b);
extern void func_0207a394(void);
extern void func_0207a3c4(void);

typedef struct {
    uint32_t b0 : 1;
    uint32_t b1 : 1;
} Flags;

void func_0207a054(uint32_t *p) {
    Flags *fl;
    if (data_0213eb24 == 0) {
        func_02077a7c(&data_0213eb28, 0);
        data_0213eb24 = 1;
    }
    fl = (Flags *)&p[0xb];
    p[2] = (uint32_t)func_0207a394;
    p[3] = (uint32_t)p;
    p[6] = (uint32_t)func_0207a3c4;
    p[0x13] = 0;
    p[0x14] = 0;
    p[7] = (uint32_t)p;
    fl->b0 = 0;
    fl->b1 = 0;
}
