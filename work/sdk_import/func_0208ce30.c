/* From libntr libntr/libraries/wm/src/wm_system.c (thumb build): func_0208ce30 */
typedef char * va_list;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef signed long s32;
typedef u32 uPtr;
typedef int BOOL;
typedef struct CPContext {
u64 div_numer;
u64 div_denom;
u64 sqrt;
u16 div_mode;
u16 sqrt_mode;
} CPContext;
typedef struct OSContext {
u32 cpsr;
u32 r[13];
u32 sp;
u32 lr;
u32 pc_plus4;
u32 sp_svc;
CPContext cp_context;
} OSContext;
typedef struct _OSThread OSThread;
typedef struct _OSThreadQueue OSThreadQueue;
typedef struct _OSThreadLink OSThreadLink;
typedef struct _OSMutexQueue OSMutexQueue;
typedef struct _OSMutexLink OSMutexLink;
typedef struct OSMutex OSMutex;
typedef struct OSiAlarm OSAlarm;
struct _OSThreadQueue {
OSThread * head;
OSThread * tail;
};
struct _OSThreadLink {
OSThread * prev;
OSThread * next;
};
struct _OSMutexQueue {
OSMutex * head;
OSMutex * tail;
};
struct _OSMutexLink {
OSMutex * next;
OSMutex * prev;
};
typedef enum {
OS_THREAD_STATE_WAITING = 0,
OS_THREAD_STATE_READY = 1,
OS_THREAD_STATE_TERMINATED = 2
} OSThreadState;
typedef void (*OSThreadDestructor) (void *);
struct _OSThread {
OSContext context;
OSThreadState state;
OSThread * next;
u32 id;
u32 priority;
void * profiler;
OSThreadQueue * queue;
OSThreadLink link;
OSMutex * mutex;
OSMutexQueue mutexQueue;
u32 stackTop;
u32 stackBottom;
u32 stackWarningOffset;
OSThreadQueue joinQueue;
void * specific[3 ];
OSAlarm * alarmForSleep;
OSThreadDestructor destructor;
void * userParameter;
int systemErrno;
};
typedef struct OSMessageQueue OSMessageQueue;
typedef void * OSMessage;
struct OSMessageQueue {
OSThreadQueue queueSend;
OSThreadQueue queueReceive;
OSMessage * msgArray;
s32 msgCount;
s32 firstIndex;
s32 usedCount;
};
BOOL func_020874ac(OSMessageQueue * mq, OSMessage msg, s32 flags);
struct OSMutex {
OSThreadQueue queue;
OSThread * thread;
s32 count;
OSMutexLink link;
};
typedef u64 OSTick;
typedef void (*OSAlarmHandler) (void *);
struct OSiAlarm {
OSAlarmHandler handler;
void * arg;
u32 tag;
OSTick fire;
OSAlarm * prev;
OSAlarm * next;
OSTick period;
OSTick start;
};
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
int func_02089218(int fifotag, uPtr data, BOOL err);
void func_02087890(const void * startAddr, u32 nBytes);
typedef enum WMApiid {
WM_APIID_INITIALIZE = 0,
WM_APIID_RESET,
WM_APIID_END,
WM_APIID_ENABLE,
WM_APIID_DISABLE,
WM_APIID_POWER_ON,
WM_APIID_POWER_OFF,
WM_APIID_SET_P_PARAM,
WM_APIID_START_PARENT,
WM_APIID_END_PARENT,
WM_APIID_START_SCAN,
WM_APIID_END_SCAN,
WM_APIID_START_CONNECT,
WM_APIID_DISCONNECT,
WM_APIID_START_MP,
WM_APIID_SET_MP_DATA,
WM_APIID_END_MP,
WM_APIID_START_DCF,
WM_APIID_SET_DCF_DATA,
WM_APIID_END_DCF,
WM_APIID_SET_WEPKEY,
WM_APIID_START_KS,
WM_APIID_END_KS,
WM_APIID_GET_KEYSET,
WM_APIID_SET_GAMEINFO,
WM_APIID_SET_BEACON_IND,
WM_APIID_START_TESTMODE,
WM_APIID_STOP_TESTMODE,
WM_APIID_VALARM_MP,
WM_APIID_SET_LIFETIME,
WM_APIID_MEASURE_CHANNEL,
WM_APIID_INIT_W_COUNTER,
WM_APIID_GET_W_COUNTER,
WM_APIID_SET_ENTRY,
WM_APIID_AUTO_DEAUTH,
WM_APIID_SET_MP_PARAMETER,
WM_APIID_SET_BEACON_PERIOD,
WM_APIID_AUTO_DISCONNECT,
WM_APIID_START_SCAN_EX,
WM_APIID_SET_WEPKEY_EX,
WM_APIID_SET_PS_MODE,
WM_APIID_START_TESTRXMODE,
WM_APIID_STOP_TESTRXMODE,
WM_APIID_KICK_MP_PARENT,
WM_APIID_KICK_MP_CHILD,
WM_APIID_KICK_MP_RESUME,
WM_APIID_ASYNC_KIND_MAX,
WM_APIID_INDICATION = 128,
WM_APIID_PORT_SEND,
WM_APIID_PORT_RECV,
WM_APIID_READ_STATUS,
WM_APIID_UNKNOWN = 255
} WMApiid;
typedef enum WMErrCode {
WM_ERRCODE_SUCCESS = 0,
WM_ERRCODE_FAILED = 1,
WM_ERRCODE_OPERATING = 2,
WM_ERRCODE_ILLEGAL_STATE = 3,
WM_ERRCODE_WM_DISABLE = 4,
WM_ERRCODE_NO_KEYSET = 5,
WM_ERRCODE_NO_DATASET = 5,
WM_ERRCODE_INVALID_PARAM = 6,
WM_ERRCODE_NO_CHILD = 7,
WM_ERRCODE_FIFO_ERROR = 8,
WM_ERRCODE_TIMEOUT = 9,
WM_ERRCODE_SEND_QUEUE_FULL = 10,
WM_ERRCODE_NO_ENTRY = 11,
WM_ERRCODE_OVER_MAX_ENTRY = 12,
WM_ERRCODE_INVALID_POLLBITMAP = 13,
WM_ERRCODE_NO_DATA = 14,
WM_ERRCODE_SEND_FAILED = 15,
WM_ERRCODE_DCF_TEST,
WM_ERRCODE_WL_INVALID_PARAM,
WM_ERRCODE_WL_LENGTH_ERR,
WM_ERRCODE_FLASH_ERROR,
WM_ERRCODE_MAX
} WMErrCode;
WMErrCode func_0208ce30(WMApiid id, u16 paramNum, ...);
extern OSMessageQueue data_02143598;
u32 * func_0208cde8(void);
u32 * func_0208cde8 (void);
WMErrCode func_0208ce30 (WMApiid id, u16 paramNum, ...)
{
va_list vlist;
s32 i;
int result;
u32 * tmpAddr;
((void) 0) ;
tmpAddr = func_0208cde8();
if (tmpAddr == 0L ) {
return WM_ERRCODE_FIFO_ERROR;
}
*(u16 *)tmpAddr = (u16)id;
((vlist) = ((va_list) ((char*) ((unsigned long)(& paramNum) & ~3U) + ((((unsigned long) (sizeof( paramNum))) + 3U) & ~3U)))) ;
for (i = 0; i < paramNum; i++) {
tmpAddr[i + 1] = (*( u32 *) ((vlist += ((((unsigned long) (sizeof( u32))) + 3U) & ~3U)) - ((((unsigned long) (sizeof( u32))) + 3U) & ~3U))) ;
}
((void) 0) ;
func_02087890(tmpAddr, 256 );
result = func_02089218(PXI_FIFO_TAG_WM, (u32)tmpAddr, 0 );
(void)func_020874ac(&data_02143598, tmpAddr, 1 );
if (result < 0) {
((void) 0) ;
return WM_ERRCODE_FIFO_ERROR;
}
return WM_ERRCODE_OPERATING;
}
