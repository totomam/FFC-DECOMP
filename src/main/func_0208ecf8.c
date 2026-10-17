/* From libntr libntr/libraries/ctrdg/src/ctrdg.c (thumb build): func_0208ecf8 */
typedef unsigned long u32;
typedef int BOOL;
typedef u32 OSIntrMode;
extern OSIntrMode func_02088978(void);
extern OSIntrMode func_0208898c(OSIntrMode state);
void func_02087f04(register u32 flags);
void func_02087f14(register u32 flags);
void func_02087f24(u32 flags);
void func_02087f34(u32 flags);
void func_02087f44(u32 setMask, u32 flags);
void func_02087f58(u32 flags);
void func_02087f68(u32 flags);
void func_02087840(void);
void func_020878d0(void);
void func_0208ecf8(BOOL enable);
extern BOOL data_021440c0;
BOOL func_0208eb30(void);
void func_0208ecf8 (BOOL enable)
{
OSIntrMode bak_cpsr = func_02088978();
data_021440c0 = enable;
((void) 0) ;
if (func_0208eb30()) {
u32 dacc = (u32)(enable ? (1 << 12) : (5 << 12) );
(void)func_02087f44((0xf << 12) , dacc);
if (enable) {
func_02087840();
func_020878d0();
func_02087f14(1 << 3);
func_02087f34(1 << 3);
func_02087f68(1 << 3);
} else {
func_02087f04(1 << 3);
func_02087f24(1 << 3);
func_02087f58(1 << 3);
}
}
(void)func_0208898c(bak_cpsr);
}
