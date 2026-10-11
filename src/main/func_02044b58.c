#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_020375bc(int32_t x);
extern Pair data_020afb40;
extern Pair data_020afb48;

void func_02044b58(uint8_t *p)
{
    func_020375bc(0);
    switch (*(int32_t *)(p + 0x8c)) {
    case 1:
        *(Pair *)(p + 0x80) = data_020afb40;
        break;
    case 2:
        *(Pair *)(p + 0x80) = data_020afb48;
        break;
    }
}
