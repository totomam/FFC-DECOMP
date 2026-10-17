/* From libntr libntr/libraries/fx/src/fx_cp.c (thumb build): func_020812e8 */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef signed long s32;
typedef volatile u16 vu16;
typedef u64 REGType64;
typedef vu16 REGType16v;
static inline void CP_SetDivImm64_32_NS_ (u64 numer, u32 denom)
{
*(REGType64 *)(0x04000000 + 0x290) = numer;
*(REGType64 *)(0x04000000 + 0x298) = denom;
}
static inline void CP_SetDiv64_32 (u64 numer, u32 denom)
{
(*( REGType16v *) (0x04000000 + 0x280)) = (1UL << 0) ;
CP_SetDivImm64_32_NS_(numer, denom);
}
typedef s32 fx32;
void func_020812e8(fx32 numer, fx32 denom);
void func_020812e8 (fx32 numer, fx32 denom)
{
((void) 0) ;
((void) 0) ;
CP_SetDiv64_32((u64)numer << 32, (u32)denom);
}
