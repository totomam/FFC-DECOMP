#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x10];
    uint8_t a;
    uint8_t pad2;
    uint8_t b;
} func_02007a00_s;

void func_02007a00(func_02007a00_s *p)
{
    if (p->a != 1) {
        p->b = 0;
    }
}
