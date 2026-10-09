#include "ffc/types.h"
typedef struct { uint32_t a; uint32_t b; } DataPair;
typedef struct { uint8_t pad[0x80]; DataPair d; } Target;
extern DataPair data_ov007_021c43d8;
void func_ov007_021a6834(Target *p)
{
    p->d = data_ov007_021c43d8;
}
