#include "ffc/types.h"
typedef struct { uint32_t a; uint32_t b; } DataPair;
typedef struct { uint8_t pad[0xb0]; DataPair d; } Target;
extern DataPair data_ov007_021c6d4c;
void func_ov007_021b6a14(Target *p)
{
    p->d = data_ov007_021c6d4c;
}
