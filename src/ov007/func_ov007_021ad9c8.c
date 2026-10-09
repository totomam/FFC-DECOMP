#include "ffc/types.h"
typedef struct { uint32_t a; uint32_t b; } DataPair;
typedef struct { uint8_t pad[0x80]; DataPair d; } Target;
extern DataPair data_ov007_021c53dc;
void func_ov007_021ad9c8(Target *p)
{
    p->d = data_ov007_021c53dc;
}
