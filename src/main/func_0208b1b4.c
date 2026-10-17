/* cflags: -nothumb */
/* From libntr libntr/libraries/rtc/src/external.c (arm build): func_0208b1b4 */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef signed long s32;
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
typedef enum RTCResult {
RTC_RESULT_SUCCESS = 0,
RTC_RESULT_BUSY,
RTC_RESULT_ILLEGAL_PARAMETER,
RTC_RESULT_SEND_ERROR,
RTC_RESULT_INVALID_COMMAND,
RTC_RESULT_ILLEGAL_STATUS,
RTC_RESULT_FATAL_ERROR,
RTC_RESULT_MAX
} RTCResult;
typedef void (*RTCCallback) (RTCResult result, void * arg);
typedef void (*RTCInterrupt) (void);
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
extern void DSP_SetPipeCallback(int port, void (*callback)(void *, int, int),
void *userdata);
typedef enum RTCLock {
RTC_LOCK_OFF = 0,
RTC_LOCK_ON,
RTC_LOCK_MAX
} RTCLock;
typedef struct RTCWork {
u32 lock;
RTCCallback callback;
void *buffer[2];
void *callbackArg;
u32 sequence;
u32 index;
RTCInterrupt interrupt;
RTCResult
commonResult;
} RTCWork;
extern RTCWork data_02143524;
void func_0208b1b4(void);
asm void func_0208b1b4 (void)
{
ldr r12, = data_02143524.lock
loop:
ldr r0, [r12, #0]
cmp r0, #RTC_LOCK_ON
beq loop
bx lr
}
