/* From libntr libntr/libraries/pxi/src/pxi_fifo.c (thumb build): func_02089218 */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef u32 uPtr;
typedef vu16 REGType16v;
typedef vu32 REGType32v;
typedef int BOOL;
typedef u32 OSIntrMode;
extern OSIntrMode func_02088978(void);
extern OSIntrMode func_0208898c(OSIntrMode state);
typedef enum {
PXI_FIFO_TAG_EX = 0,
PXI_FIFO_TAG_USER_0,
PXI_FIFO_TAG_USER_1,
PXI_FIFO_TAG_SYSTEM,
PXI_FIFO_TAG_NVRAM,
PXI_FIFO_TAG_RTC,
PXI_FIFO_TAG_TOUCHPANEL,
PXI_FIFO_TAG_SOUND,
PXI_FIFO_TAG_PM,
PXI_FIFO_TAG_MIC,
PXI_FIFO_TAG_WM,
PXI_FIFO_TAG_FS,
PXI_FIFO_TAG_OS,
PXI_FIFO_TAG_CTRDG,
PXI_FIFO_TAG_CARD,
PXI_FIFO_TAG_WVR,
PXI_FIFO_TAG_CTRDG_Ex,
PXI_FIFO_TAG_CTRDG_PHI,
PXI_FIFO_TAG_MI,
PXI_FIFO_TAG_AES,
PXI_FIFO_TAG_FATFS,
PXI_FIFO_TAG_CAMERA,
PXI_FIFO_TAG_WMW,
PXI_FIFO_TAG_SCFG,
PXI_FIFO_TAG_SNDEX,
PXI_FIFO_TAG_SEA = 31,
PXI_MAX_FIFO_TAG = 32
} PXIFifoTag;
typedef enum {
PXI_FIFO_SUCCESS = 0,
PXI_FIFO_FAIL_SEND_ERR = -1,
PXI_FIFO_FAIL_SEND_FULL = -2,
PXI_FIFO_FAIL_RECV_ERR = -3,
PXI_FIFO_FAIL_RECV_EMPTY = -4,
PXI_FIFO_NO_CALLBACK_ENTRY = -5
} PXIFifoStatus;
typedef union {
struct {
u32 tag : 5 ;
u32 err : 1 ;
u32 data : 26 ;
} e;
u32 raw;
} PXIFifoMessage;
int func_02089218(int fifotag, uPtr data, BOOL err);
inline PXIFifoStatus PXIi_SetToFifo(u32 data);
int func_02089218 (int fifotag, uPtr data, BOOL err)
{
PXIFifoMessage fifomsg;
((void) 0) ;
((void) 0) ;
fifomsg.e.tag = (PXIFifoTag)fifotag;
fifomsg.e.err = (u32)err;
fifomsg.e.data = data;
return PXIi_SetToFifo(fifomsg.raw);
}
static inline PXIFifoStatus PXIi_SetToFifo (u32 data)
{
OSIntrMode enabled;
if ((*( REGType16v *) (0x04000000 + 0x184)) & 0x4000 ) {
(*( REGType16v *) (0x04000000 + 0x184)) |= (0x8000 | 0x4000 );
return PXI_FIFO_FAIL_SEND_ERR;
}
enabled = func_02088978();
if ((*( REGType16v *) (0x04000000 + 0x184)) & 0x0002 ) {
(void)func_0208898c(enabled);
return PXI_FIFO_FAIL_SEND_FULL;
}
(*( REGType32v *) (0x04000000 + 0x188)) = data;
(void)func_0208898c(enabled);
return PXI_FIFO_SUCCESS;
}
