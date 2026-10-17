/* From libntr libntr/libraries/wm/src/wm_ds.c (thumb build): func_0208e0d8 */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef signed long s32;
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
extern void OSi_EnterDmaCallback(u32 dmaNo, void (*callback)(void *), void *arg);
extern void OSi_EnterNDmaCallback(u32 dmaNo, void (*callback)(void *), void *arg);
extern void OSi_EnterTimerCallback(u32 timerNo, void (*callback)(void *), void *arg);
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
void func_02084a0c(u32 data, void * destp, u32 size);
static inline void MI_CpuFillFast (void * dest, u32 data, u32 size)
{
((void) 0) ;
((void) 0) ;
func_02084a0c(data, dest, size);
}
static inline void MI_CpuClearFast (void * dest, u32 size)
{
MI_CpuFillFast(dest, 0, size);
}
typedef u32 FATFSResult;
typedef u32 FATFSCommandID;
typedef struct FATFSCommandHeader {
FATFSCommandID command;
FATFSResult result;
u32 flags;
struct FATFSCommandHeader *next;
} FATFSCommandHeader;
typedef struct FATFSRequestBuffer {
union {
FATFSCommandHeader header;
u8 buffer[2048 ];
};
OSThread *thread;
void (*callback)(struct FATFSRequestBuffer *);
void *userdata;
struct FATFSRequestBuffer *next;
u8 padding[16];
} FATFSRequestBuffer;
extern void FATFSi_SetRequestBuffer(FATFSRequestBuffer *buffer,
void (*callback)(FATFSRequestBuffer *),
void *userdata);
typedef enum WMPriorityLevel {
WM_PRIORITY_URGENT = 0,
WM_PRIORITY_HIGH,
WM_PRIORITY_NORMAL,
WM_PRIORITY_LOW
} WMPriorityLevel;
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
typedef enum WMState {
WM_STATE_READY = 0,
WM_STATE_STOP,
WM_STATE_IDLE,
WM_STATE_CLASS1,
WM_STATE_TESTMODE,
WM_STATE_SCAN,
WM_STATE_CONNECT,
WM_STATE_PARENT,
WM_STATE_CHILD,
WM_STATE_MP_PARENT,
WM_STATE_MP_CHILD,
WM_STATE_DCF_CHILD,
WM_STATE_TESTMODE_RX,
WM_STATE_MAX
} WMState;
typedef enum WMDataSharingState {
WM_DS_STATE_READY = 0,
WM_DS_STATE_START,
WM_DS_STATE_PAUSING,
WM_DS_STATE_PAUSED,
WM_DS_STATE_RETRY_SEND,
WM_DS_STATE_ERROR
} WMDataSharingState;
typedef void (*WMCallbackFunc) (void * arg);
typedef struct WMDataSet {
u16 aidBitmap;
u16 receivedBitmap;
u16 data[508 / sizeof(u16)];
} WMDataSet;
typedef struct WMDataSharingInfo {
WMDataSet ds[4 ];
u16 seqNum[4 ];
u16 writeIndex;
u16 sendIndex;
u16 readIndex;
u16 aidBitmap;
u16 dataLength;
u16 stationNumber;
u16 dataSetLength;
u16 port;
u16 doubleMode;
u16 currentSeqNum;
u16 state;
u16 reserved[1];
} WMDataSharingInfo;
WMErrCode func_0208d350(u16 port, WMCallbackFunc callback, void * arg);
WMErrCode func_0208de98(WMCallbackFunc callback,
void * arg,
const u16 * sendData,
u16 sendDataSize, u16 destBitmap, u16 port, u16 prio);
WMErrCode func_0208e0d8(WMDataSharingInfo * dsInfo, u16 port, u16 aidBitmap, u16 dataLength, BOOL doubleMode);
u16 func_0208d260(void);
u16 func_0208d284(void);
u8 func_02083728(u32 x);
extern void DSP_SetPipeCallback(int port, void (*callback)(void *, int, int),
void *userdata);
WMErrCode func_0208cf38(s32 paramNum, ...);
void func_0208e534(void * callback);
void func_0208e5c4(void * callback);
void func_0208e688(void * callback);
static inline u16 WmDataSharingGetNextIndex (u32 index)
{
return (u16)((index + 1) % 4 );
}
WMErrCode func_0208e0d8 (WMDataSharingInfo * dsInfo, u16 port, u16 aidBitmap, u16 dataLength, BOOL doubleMode)
{
WMErrCode result;
int aid;
u16 connectedAIDs = 0x0001;
result = func_0208cf38(2, WM_STATE_MP_PARENT, WM_STATE_MP_CHILD);
if((result) != WM_ERRCODE_SUCCESS ) { return (result); } ;
if (dsInfo == 0L ) {
((void) 0) ;
return WM_ERRCODE_INVALID_PARAM;
}
if (port >= 16 ) {
((void) 0) ;
return WM_ERRCODE_INVALID_PARAM;
}
if ((u32)dsInfo & 0x01f) {
((void) 0) ;
}
if (aidBitmap == 0) {
((void) 0) ;
return WM_ERRCODE_INVALID_PARAM;
}
aid = func_0208d260();
if (aid == 0) {
connectedAIDs = func_0208d284();
}
MI_CpuClearFast(dsInfo, sizeof(WMDataSharingInfo));
dsInfo->writeIndex = 0;
dsInfo->sendIndex = 0;
dsInfo->readIndex = 0;
dsInfo->dataLength = dataLength;
dsInfo->port = port;
dsInfo->aidBitmap = 0;
dsInfo->doubleMode = (u16)((doubleMode) ? 1 : 0 );
aidBitmap |= (1 << aid);
dsInfo->aidBitmap = aidBitmap;
{
u16 count = func_02083728(aidBitmap);
dsInfo->stationNumber = count;
dsInfo->dataSetLength = (u16)(dataLength * count);
if (dsInfo->dataSetLength > 508 ) {
dsInfo->aidBitmap = 0;
((void) 0) ;
return WM_ERRCODE_INVALID_PARAM;
}
dsInfo->dataSetLength += 4;
}
dsInfo->state = WM_DS_STATE_START;
if (aid == 0) {
int i;
for (i = 0; i < 4 ; i++) {
dsInfo->ds[i].aidBitmap = (u16)(dsInfo->aidBitmap & (connectedAIDs | 0x0001));
}
(void)func_0208d350(port, func_0208e5c4, (void *)dsInfo);
for (i = 0; i < ((dsInfo->doubleMode == 1 ) ? 2 : 1); i++) {
int res;
dsInfo->writeIndex = WmDataSharingGetNextIndex(dsInfo->writeIndex);
res =
func_0208de98(func_0208e534, dsInfo, (u16 *)&dsInfo->ds[i],
dsInfo->dataSetLength,
(u16)(dsInfo->aidBitmap & connectedAIDs), dsInfo->port,
WM_PRIORITY_HIGH);
if (res == WM_ERRCODE_NO_CHILD) {
dsInfo->seqNum[i] = 0xffff;
dsInfo->sendIndex = WmDataSharingGetNextIndex(dsInfo->sendIndex);
} else {
if (res != WM_ERRCODE_SUCCESS && res != WM_ERRCODE_OPERATING) {
((void) 0) ;
dsInfo->state = WM_DS_STATE_ERROR;
return WM_ERRCODE_FAILED;
}
}
}
} else {
dsInfo->sendIndex = (u16)(4 - 1);
(void)func_0208d350(port, func_0208e688, (void *)dsInfo);
}
return WM_ERRCODE_SUCCESS;
}
void func_0208e534 (void * callback);
void func_0208e5c4 (void * callback);
void func_0208e688 (void * callback);
