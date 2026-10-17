/* From libntr libntr/libraries/mb/src/mb_parent.c (thumb build): func_ov006_021997cc */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef signed char s8;
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
void func_02084b2c(void * dest, u8 data, u32 size);
static inline void MI_CpuClear8 (void * dest, u32 size)
{
func_02084b2c(dest, 0, size);
}
typedef enum FSResult {
FS_RESULT_SUCCESS = 0,
FS_RESULT_FAILURE,
FS_RESULT_BUSY,
FS_RESULT_CANCELED,
FS_RESULT_CANCELLED = FS_RESULT_CANCELED,
FS_RESULT_UNSUPPORTED,
FS_RESULT_ERROR,
FS_RESULT_INVALID_PARAMETER,
FS_RESULT_NO_MORE_RESOURCE,
FS_RESULT_ALREADY_DONE,
FS_RESULT_PERMISSION_DENIED,
FS_RESULT_MEDIA_FATAL,
FS_RESULT_NO_ENTRY,
FS_RESULT_MEDIA_NOTHING,
FS_RESULT_MEDIA_UNKNOWN,
FS_RESULT_BAD_FORMAT,
FS_RESULT_MAX,
FS_RESULT_PROC_ASYNC = 256,
FS_RESULT_PROC_DEFAULT,
FS_RESULT_PROC_UNKNOWN
} FSResult;
typedef enum FSSeekFileMode {
FS_SEEK_SET,
FS_SEEK_CUR,
FS_SEEK_END
} FSSeekFileMode;
typedef u32 FSCommandType;
struct FSArchive;
struct FSFile;
typedef struct FSDateTime {
u32 year;
u32 month;
u32 day;
u32 hour;
u32 minute;
u32 second;
} FSDateTime;
typedef struct FSDirectoryEntryInfo {
char shortname[16 ];
u32 shortname_length;
char longname[260 ];
u32 longname_length;
u32 attributes;
FSDateTime atime;
FSDateTime mtime;
FSDateTime ctime;
u32 filesize;
u32 id;
} FSDirectoryEntryInfo;
typedef struct FSPathInfo {
u32 attributes;
FSDateTime ctime;
FSDateTime mtime;
FSDateTime atime;
u32 filesize;
u32 id;
} FSPathInfo;
typedef struct FSArchiveResource {
u64 totalSize;
u64 availableSize;
u32 maxFileHandles;
u32 currentFileHandles;
u32 maxDirectoryHandles;
u32 currentDirectoryHandles;
u32 bytesPerSector;
u32 sectorsPerCluster;
u32 totalClusters;
u32 availableClusters;
} FSArchiveResource;
typedef struct FSDirPos {
struct FSArchive *arc;
u16 own_id;
u16 index;
u32 pos;
} FSDirPos;
typedef struct FSFileID {
struct FSArchive *arc;
u32 file_id;
} FSFileID;
typedef struct {
union {
FSFileID file_id;
FSDirPos dir_id;
};
u32 is_directory;
u32 name_len;
char name[127 + 1];
} FSDirEntry;
typedef FSResult (*FS_ARCHIVE_PROC_FUNC)(struct FSFile *, FSCommandType);
typedef FSResult (*FS_ARCHIVE_READ_FUNC)(struct FSArchive *p, void *dst,
u32 pos, u32 size);
typedef FSResult (*FS_ARCHIVE_WRITE_FUNC)(struct FSArchive *p, const void *src,
u32 pos, u32 size);
typedef struct {
FSDirPos pos;
} FSSeekDirInfo;
typedef struct {
FSDirEntry *p_entry;
BOOL skip_string;
} FSReadDirInfo;
typedef struct {
FSDirPos pos;
const char *path;
BOOL find_directory;
union {
FSFileID *file;
FSDirPos *dir;
} result;
} FSFindPathInfo;
typedef struct {
u8 *buf;
u32 buf_len;
u16 total_len;
u16 dir_id;
} FSGetPathInfo;
typedef struct {
FSFileID id;
} FSOpenFileFastInfo;
typedef struct {
u32 top;
u32 bottom;
u32 index;
} FSOpenFileDirectInfo;
typedef struct {
u32 reserved;
} FSCloseFileInfo;
typedef struct {
void *dst;
u32 len_org;
u32 len;
} FSReadFileInfo;
typedef struct {
const void *src;
u32 len_org;
u32 len;
} FSWriteFileInfo;
typedef union FSROMFATCommandInfo {
FSReadFileInfo readfile;
FSWriteFileInfo writefile;
FSSeekDirInfo seekdir;
FSReadDirInfo readdir;
FSFindPathInfo findpath;
FSGetPathInfo getpath;
FSOpenFileFastInfo openfilefast;
FSOpenFileDirectInfo openfiledirect;
FSCloseFileInfo closefile;
} FSROMFATCommandInfo;
typedef struct FSROMFATFileProperty {
u32 own_id;
u32 top;
u32 bottom;
u32 pos;
} FSROMFATFileProperty;
typedef struct FSROMFATDirProperty {
FSDirPos pos;
u32 parent;
} FSROMFATDirProperty;
typedef union FSROMFATProperty {
FSROMFATFileProperty file;
FSROMFATDirProperty dir;
} FSROMFATProperty;
u32 FS_GetArchiveBase(const struct FSArchive *arc);
u32 FS_GetArchiveFAT(const struct FSArchive *arc);
u32 FS_GetArchiveFNT(const struct FSArchive *arc);
u32 FS_GetArchiveOffset(const struct FSArchive *arc, u32 pos);
BOOL FS_IsArchiveTableLoaded(volatile const struct FSArchive *arc);
BOOL FS_LoadArchive(struct FSArchive *arc, u32 base, u32 fat, u32 fat_size,
u32 fnt, u32 fnt_size, FS_ARCHIVE_READ_FUNC read_func,
FS_ARCHIVE_WRITE_FUNC write_func);
BOOL FS_UnloadArchive(struct FSArchive *arc);
u32 FS_LoadArchiveTables(struct FSArchive *arc, void *mem, u32 size);
void *FS_UnloadArchiveTables(struct FSArchive *arc);
void FS_SetArchiveProc(struct FSArchive *arc, FS_ARCHIVE_PROC_FUNC proc,
u32 flags);
u32 FS_GetFileImageTop(const struct FSFile *file);
u32 FS_GetFileImageBottom(const struct FSFile *file);
typedef struct FSArchiveInterface {
FSResult (*ReadFile)(struct FSArchive *, struct FSFile *, void *buffer,
u32 *length);
FSResult (*WriteFile)(struct FSArchive *, struct FSFile *, const void *buffer,
u32 *length);
FSResult (*SeekDirectory)(struct FSArchive *, struct FSFile *, u32 id,
u32 position);
FSResult (*ReadDirectory)(struct FSArchive *, struct FSFile *,
FSDirectoryEntryInfo *info);
FSResult (*FindPath)(struct FSArchive *, u32 base_dir_id, const char *path,
u32 *target_id, BOOL target_is_directory);
FSResult (*GetPath)(struct FSArchive *, struct FSFile *, BOOL is_directory,
char *buffer, u32 *length);
FSResult (*OpenFileFast)(struct FSArchive *, struct FSFile *, u32 id,
u32 mode);
FSResult (*OpenFileDirect)(struct FSArchive *, struct FSFile *, u32 top,
u32 bottom, u32 *id);
FSResult (*CloseFile)(struct FSArchive *, struct FSFile *);
void (*Activate)(struct FSArchive *);
void (*Idle)(struct FSArchive *);
void (*Suspend)(struct FSArchive *);
void (*Resume)(struct FSArchive *);
FSResult (*OpenFile)(struct FSArchive *, struct FSFile *, u32 base_dir_id,
const char *path, u32 mode);
FSResult (*SeekFile)(struct FSArchive *, struct FSFile *, int *offset,
FSSeekFileMode from);
FSResult (*GetFileLength)(struct FSArchive *, struct FSFile *, u32 *length);
FSResult (*GetFilePosition)(struct FSArchive *, struct FSFile *,
u32 *position);
void (*Mount)(struct FSArchive *);
void (*Unmount)(struct FSArchive *);
FSResult (*GetArchiveCaps)(struct FSArchive *, u32 *caps);
FSResult (*CreateFile)(struct FSArchive *, u32 baseid, const char *relpath,
u32 permit);
FSResult (*DeleteFile)(struct FSArchive *, u32 baseid, const char *relpath);
FSResult (*RenameFile)(struct FSArchive *, u32 baseid_src,
const char *relpath_src, u32 baseid_dst,
const char *relpath_dst);
FSResult (*GetPathInfo)(struct FSArchive *, u32 baseid, const char *relpath,
FSPathInfo *info);
FSResult (*SetPathInfo)(struct FSArchive *, u32 baseid, const char *relpath,
FSPathInfo *info);
FSResult (*CreateDirectory)(struct FSArchive *, u32 baseid,
const char *relpath, u32 permit);
FSResult (*DeleteDirectory)(struct FSArchive *, u32 baseid,
const char *relpath);
FSResult (*RenameDirectory)(struct FSArchive *, u32 baseid,
const char *relpath_src, u32 baseid_dst,
const char *relpath_dst);
FSResult (*GetArchiveResource)(struct FSArchive *,
FSArchiveResource *resource);
void *unused_29;
FSResult (*FlushFile)(struct FSArchive *, struct FSFile *);
FSResult (*SetFileLength)(struct FSArchive *, struct FSFile *, u32 length);
FSResult (*OpenDirectory)(struct FSArchive *, struct FSFile *,
u32 base_dir_id, const char *path, u32 mode);
FSResult (*CloseDirectory)(struct FSArchive *, struct FSFile *);
FSResult (*SetSeekCache)(struct FSArchive *, struct FSFile *, void *buf,
u32 buf_size);
u8 reserved[116];
} FSArchiveInterface;
typedef struct FSArchive {
union {
char ptr[3 + 1];
u32 pack;
} name;
struct FSArchive * next;
struct FSFile *list;
OSThreadQueue queue;
u32 flag;
FSCommandType command;
FSResult result;
void *userdata;
const FSArchiveInterface *vtbl;
union {
u8 reserved2[52];
struct { u32 base; u32 fat; u32 fat_size; u32 fnt; u32 fnt_size; u32 fat_bak; u32 fnt_bak; void *load_mem; FS_ARCHIVE_READ_FUNC read_func; FS_ARCHIVE_WRITE_FUNC write_func; u8 reserved3[4]; FS_ARCHIVE_PROC_FUNC proc; u32 proc_flag; } ;
};
} FSArchive;
typedef struct FSFile {
struct FSFile *next;
void *userdata;
struct FSArchive *arc;
u32 stat;
void *argument;
FSResult error;
OSThreadQueue queue[1];
union {
u8 reserved1[16];
FSROMFATProperty prop;
};
union {
u8 reserved2[24];
FSROMFATCommandInfo arg;
};
} FSFile;
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
typedef struct WMCallback {
u16 apiid;
u16 errcode;
u16 wlCmdID;
u16 wlResult;
} WMCallback;
typedef struct WMStartParentCallback {
u16 apiid;
u16 errcode;
u16 wlCmdID;
u16 wlResult;
u16 state;
u8 macAddress[6 ];
u16 aid;
u16 reason;
u8 ssid[24 ];
u16 parentSize;
u16 childSize;
} WMStartParentCallback, WMstartParentCallback;
extern void DSP_SetPipeCallback(int port, void (*callback)(void *, int, int),
void *userdata);
typedef enum {
MB_COMM_PSTATE_NONE,
MB_COMM_PSTATE_INIT_COMPLETE,
MB_COMM_PSTATE_CONNECTED,
MB_COMM_PSTATE_DISCONNECTED,
MB_COMM_PSTATE_KICKED,
MB_COMM_PSTATE_REQ_ACCEPTED,
MB_COMM_PSTATE_SEND_PROCEED,
MB_COMM_PSTATE_SEND_COMPLETE,
MB_COMM_PSTATE_BOOT_REQUEST,
MB_COMM_PSTATE_BOOT_STARTABLE,
MB_COMM_PSTATE_REQUESTED,
MB_COMM_PSTATE_MEMBER_FULL,
MB_COMM_PSTATE_END,
MB_COMM_PSTATE_ERROR,
MB_COMM_PSTATE_WAIT_TO_SEND,
MB_COMM_PSTATE_WM_EVENT = 0x80000000
} MBCommPState;
typedef void (*MBCommPStateCallback) (u16 child_aid, u32 status, void * arg);
typedef enum {
MB_ERRCODE_SUCCESS = 0,
MB_ERRCODE_INVALID_PARAM,
MB_ERRCODE_INVALID_STATE,
MB_ERRCODE_INVALID_DLFILEINFO,
MB_ERRCODE_INVALID_BLOCK_NO,
MB_ERRCODE_INVALID_BLOCK_NUM,
MB_ERRCODE_INVALID_FILE,
MB_ERRCODE_INVALID_RECV_ADDR,
MB_ERRCODE_WM_FAILURE,
MB_ERRCODE_FATAL,
MB_ERRCODE_MAX
} MBErrCode;
typedef struct {
const char * romFilePathp;
u16 * gameNamep;
u16 * gameIntroductionp;
const char * iconCharPathp;
const char * iconPalettePathp;
u32 ggid;
u8 maxPlayerNum;
u8 pad[3];
u8 userParam[0x20 ];
} MBGameRegistry;
typedef struct {
u16 palette[16 ];
u16 data[512 / 2];
} MBIconInfo;
typedef struct {
u8 favoriteColor : 4;
u8 playerNo : 4;
u8 nameLength;
u16 name[10 ];
} MBUserInfo;
typedef struct MBGameInfoFixed {
MBIconInfo icon;
MBUserInfo parent;
u8 maxPlayerNum;
u8 pad[1];
u16 gameName[48 ];
u16 gameIntroduction[96 ];
} MBGameInfoFixed, MbGameInfoFixed;
typedef struct MBGameInfoVolatile {
u8 nowPlayerNum;
u8 pad[1];
u16 nowPlayerFlag;
u16 changePlayerFlag;
MBUserInfo member[15 ];
u8 userVolatData[8 ];
} MBGameInfoVolatile, MbGameInfoVolatile;
typedef struct MBGameInfo {
MBGameInfoFixed fixed;
MBGameInfoVolatile volat;
u16 broadcastedPlayerFlag;
u8 dataAttr;
u8 seqNoFixed;
u8 seqNoVolat;
u8 fileNo;
u8 pad[2];
u32 ggid;
struct MBGameInfo * nextp;
} MBGameInfo, MbGameInfo;
u32 func_ov006_0219c924(void);
u16 func_ov006_0219c930(void);
u8 func_ov006_0219c93c(void);
void func_ov006_021997cc(u16 type, void * arg);
typedef enum MBCommUserReq {
MB_COMM_USER_REQ_NONE = 0,
MB_COMM_USER_REQ_DL_START,
MB_COMM_USER_REQ_SEND_START,
MB_COMM_USER_REQ_ACCEPT,
MB_COMM_USER_REQ_KICK,
MB_COMM_USER_REQ_BOOT
} MBCommUserReq;
typedef struct {
u32 data_buf[15 ][((29) + 1) / sizeof(u32) + 1];
u32 data_bmp[15 ];
} MbRequestPieceBuf;
void func_ov006_0219cd14(u16 child_aid);
void func_ov006_0219af74(MBGameInfo * gameInfop, const MBUserInfo * member, u16 nowPlayerFlag, u16 changePlayerFlag);
void func_ov006_0219b0a4(u32 ggid, u16 tgid, u8 attribute);
typedef struct MbDownloadFileInfoHeader {
u32 arm9EntryAddr;
u32 arm7EntryAddr;
u32 padding;
} MbDownloadFileInfoHeader;
typedef struct MbSegmentInfo {
u32 recv_addr;
u32 load_addr;
u32 size;
u32 target :1;
u32 rsv :31;
} MbSegmentInfo;
typedef struct {
MbDownloadFileInfoHeader header;
MbSegmentInfo seg[(3) ];
u32 auth_code[(136) / sizeof(u32)];
u32 reserved[32 / sizeof(u32)];
} MBDownloadFileInfo;
typedef struct {
u32 seg_src_offset[(3) ];
u16 seg_head_blockno[(3) ];
u16 block_num;
} MB_BlockInfoTable;
typedef struct {
u32 src;
u32 len;
u8 * ptr;
u32 state;
} MBiCacheInfo;
typedef struct {
u32 lifetime;
u32 recent;
MBiCacheInfo * p_list;
u32 size;
char arc_name[3 + 1];
u32 arc_name_len;
FSArchive * arc_pointer;
u8 reserved[32 - 3 - 1 - sizeof(u32) - sizeof(FSArchive *)];
MBiCacheInfo list[4 ];
} MBiCacheList;
struct MBiTaskInfo_tag;
typedef void (*MB_TASK_FUNC) (struct MBiTaskInfo_tag *);
typedef struct MBiTaskInfo_tag {
struct MBiTaskInfo_tag * next;
u32 busy : 1;
u32 priority : 31;
MB_TASK_FUNC task;
MB_TASK_FUNC callback;
u32 param[4];
} MBiTaskInfo;
typedef struct MB_CommCommonWork {
u32 sendbuf[(0x400) / sizeof(u32)] __attribute__ ((aligned(32))) ;
u32 recvbuf[(0x80) * 15 * 2 / sizeof(u32)] __attribute__ ((aligned(32))) ;
MBUserInfo user;
u16 isMbInitialized;
int block_size_max;
BOOL start_mp_busy;
BOOL is_started_ex;
u8 padding[28];
} MB_CommCommonWork;
typedef struct MB_CommPWork {
MB_CommCommonWork common;
MBUserInfo childUser[15 ] __attribute__ ((aligned(4))) ;
u16 childversion[15 ];
u32 childggid[15 ];
MBCommPStateCallback parent_callback;
int p_comm_state[15 ];
u8 file_num;
u8 cur_fileid;
s8 fileid_of_child[15 ];
u8 child_num;
u16 child_entry_bmp;
MbRequestPieceBuf req_data_buf;
u16 req2child[15 ];
MBUserInfo childUserBuf;
struct {
MBDownloadFileInfo dl_fileinfo;
MBGameInfo game_info;
MB_BlockInfoTable blockinfo_table;
MBGameRegistry * game_reg;
void * src_adr;
u16 currentb;
u16 nextb;
u16 pollbmp;
u16 gameinfo_child_bmp;
u16 gameinfo_changed_bmp;
u8 active;
u8 update;
MBiCacheList * cache_list;
u32 * card_mapping;
} fileinfo[(16) ];
BOOL useWvrFlag;
u8 padding2[20];
u8 task_work[2 * 1024];
MBiTaskInfo cur_task;
} MB_CommPWork;
extern MB_CommCommonWork * data_ov006_021ba160;
void func_ov006_0219977c(u16 child, int state, void * arg);
void func_ov006_02199df4(void * arg);
int func_ov006_0219a214(void);
void func_ov006_0219a39c(u16 aid, u16 errcode);
void func_ov006_0219977c (u16 child, int state, void * arg);
void func_ov006_021997cc (u16 type, void * arg)
{
((void)0) ;
switch (type) {
case 21 :
func_ov006_0219977c(0, MB_COMM_PSTATE_INIT_COMPLETE, arg);
break;
case 17 :
break;
case 0 :
{
WMstartParentCallback * sparg = (WMstartParentCallback *)arg;
if (sparg->aid == 0)
break;
if (sparg->aid >= 16) {
((void)0) ;
break;
}
((void)0) ;
func_ov006_0219977c(sparg->aid, MB_COMM_PSTATE_CONNECTED, arg);
}
break;
case 1 :
{
WMstartParentCallback * sparg = (WMstartParentCallback *)arg;
if (sparg->aid == 0)
break;
if (sparg->aid >= 16) {
((void)0) ;
break;
}
((void)0) ;
((MB_CommPWork *)data_ov006_021ba160) ->childversion[sparg->aid - 1] = 0;
MI_CpuClear8(&((MB_CommPWork *)data_ov006_021ba160) ->childggid[sparg->aid - 1], sizeof(u32));
MI_CpuClear8(&((MB_CommPWork *)data_ov006_021ba160) ->childUser[sparg->aid - 1], sizeof(MBUserInfo));
func_ov006_0219cd14(sparg->aid);
((MB_CommPWork *)data_ov006_021ba160) ->req2child[sparg->aid - 1] = MB_COMM_USER_REQ_NONE;
if (((MB_CommPWork *)data_ov006_021ba160) ->fileid_of_child[sparg->aid - 1] != -1) {
u8 fileID = (u8)((MB_CommPWork *)data_ov006_021ba160) ->fileid_of_child[sparg->aid - 1];
u16 nowChildFlag = ((MB_CommPWork *)data_ov006_021ba160) ->fileinfo[fileID].gameinfo_child_bmp;
u16 child = sparg->aid;
((MB_CommPWork *)data_ov006_021ba160) ->fileinfo[fileID].gameinfo_child_bmp &= ~((1 << (child)) );
((MB_CommPWork *)data_ov006_021ba160) ->fileinfo[fileID].gameinfo_changed_bmp |= (1 << (child)) ;
((MB_CommPWork *)data_ov006_021ba160) ->fileid_of_child[child - 1] = -1;
((MB_CommPWork *)data_ov006_021ba160) ->fileinfo[fileID].pollbmp &= ~(0x0001 << (child));
((void)0) ;
}
if (((MB_CommPWork *)data_ov006_021ba160) ->child_entry_bmp & (0x0001 << (sparg->aid))) {
((MB_CommPWork *)data_ov006_021ba160) ->child_num--;
((MB_CommPWork *)data_ov006_021ba160) ->child_entry_bmp &= ~(0x0001 << (sparg->aid));
}
if (((MB_CommPWork *)data_ov006_021ba160) ->p_comm_state[sparg->aid - 1] == MB_COMM_PSTATE_BOOT_REQUEST) {
func_ov006_0219977c(sparg->aid, MB_COMM_PSTATE_BOOT_STARTABLE, 0L );
}
func_ov006_0219977c(sparg->aid, MB_COMM_PSTATE_DISCONNECTED, arg);
((MB_CommPWork *)data_ov006_021ba160) ->p_comm_state[sparg->aid - 1] = MB_COMM_PSTATE_NONE;
}
break;
case 3 :
func_ov006_02199df4(arg);
break;
case 25 :
(void)func_ov006_0219a214();
break;
case 28 :
{
u8 i;
for (i = 0; i < (16) ; i++) {
if (((MB_CommPWork *)data_ov006_021ba160) ->fileinfo[i].active && ((MB_CommPWork *)data_ov006_021ba160) ->fileinfo[i].gameinfo_changed_bmp) {
func_ov006_0219af74(&((MB_CommPWork *)data_ov006_021ba160) ->fileinfo[i].game_info,
&((MB_CommPWork *)data_ov006_021ba160) ->childUser[0],
((MB_CommPWork *)data_ov006_021ba160) ->fileinfo[i].gameinfo_child_bmp,
((MB_CommPWork *)data_ov006_021ba160) ->fileinfo[i].gameinfo_changed_bmp);
((MB_CommPWork *)data_ov006_021ba160) ->fileinfo[i].gameinfo_changed_bmp = 0;
}
}
}
func_ov006_0219b0a4(func_ov006_0219c924(), func_ov006_0219c930(), func_ov006_0219c93c());
break;
case 255 :
{
u16 apiid, errcode;
apiid = ((u16 *)arg)[0];
errcode = ((u16 *)arg)[1];
switch (errcode) {
case WM_ERRCODE_INVALID_PARAM:
case WM_ERRCODE_FAILED:
case WM_ERRCODE_WM_DISABLE:
case WM_ERRCODE_NO_DATASET:
case WM_ERRCODE_FIFO_ERROR:
case WM_ERRCODE_TIMEOUT:
func_ov006_0219a39c(0, MB_ERRCODE_FATAL);
break;
case WM_ERRCODE_OPERATING:
case WM_ERRCODE_ILLEGAL_STATE:
case WM_ERRCODE_NO_CHILD:
case WM_ERRCODE_OVER_MAX_ENTRY:
case WM_ERRCODE_NO_ENTRY:
case WM_ERRCODE_INVALID_POLLBITMAP:
case WM_ERRCODE_NO_DATA:
case WM_ERRCODE_SEND_QUEUE_FULL:
case WM_ERRCODE_SEND_FAILED:
default:
func_ov006_0219a39c(0, MB_ERRCODE_WM_FAILURE);
break;
}
}
break;
case 256 :
{
WMCallback * pWmcb = (WMCallback *)arg;
switch (pWmcb->apiid) {
case WM_APIID_INITIALIZE:
case WM_APIID_SET_LIFETIME:
case WM_APIID_SET_P_PARAM:
case WM_APIID_SET_BEACON_IND:
case WM_APIID_START_PARENT:
case WM_APIID_START_MP:
case WM_APIID_SET_MP_DATA:
case WM_APIID_START_DCF:
case WM_APIID_SET_DCF_DATA:
case WM_APIID_DISCONNECT:
case WM_APIID_START_KS:
func_ov006_0219a39c(0, MB_ERRCODE_FATAL);
break;
case WM_APIID_RESET:
case WM_APIID_END:
default:
func_ov006_0219a39c(0, MB_ERRCODE_WM_FAILURE);
break;
}
}
break;
}
if (type == 17 ) {
MBCommPStateCallback tmpCb = ((MB_CommPWork *)data_ov006_021ba160) ->parent_callback;
MI_CpuClearFast(((MB_CommPWork *)data_ov006_021ba160) , sizeof(MB_CommPWork));
((MB_CommPWork *)data_ov006_021ba160) = 0L ;
if (tmpCb) {
(*tmpCb)(0, MB_COMM_PSTATE_END, 0L );
}
}
}
void func_ov006_02199df4 (void * arg);
int func_ov006_0219a214 (void);
void func_ov006_0219a39c (u16 aid, u16 errcode);
