#include "ffc/types.h"
typedef struct { uint32_t a; uint32_t b; } DataPair;
typedef struct { uint8_t pad[0xb0]; DataPair d; } Target;
extern DataPair data_ov007_021c5f84;
void func_ov007_021b1fb8(Target *p)
{
    p->d = data_ov007_021c5f84;
}
