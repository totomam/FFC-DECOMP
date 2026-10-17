/* From libntr libntr/libraries/fx/src/fx_cp.c (thumb build): func_0208123c */
typedef unsigned short int u16;
typedef unsigned long long int u64;
typedef signed long s32;
typedef volatile u16 vu16;
typedef u64 REGType64;
typedef vu16 REGType16v;
typedef s32 fx32;
static inline void CP_SetSqrtImm64_NS_ (u64 param)
{
*((REGType64 *)(0x04000000 + 0x2b8) ) = param;
}
static inline void CP_SetSqrt64 (u64 param)
{
(*( REGType16v *) (0x04000000 + 0x2b0)) = (1UL << 0) ;
CP_SetSqrtImm64_NS_(param);
}
fx32 func_0208123c(fx32 x);
fx32 func_020812c8(void);
fx32 func_0208123c (fx32 x)
{
((void) 0) ;
if (x > 0) {
CP_SetSqrt64((u64)x << 32);
return func_020812c8();
} else {
return 0;
}
}
fx32 func_020812c8 (void);
