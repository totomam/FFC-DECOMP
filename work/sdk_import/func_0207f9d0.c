/* From libntr libntr/libraries/fs/src/fs_proc_default.c (thumb build): func_0207f9d0 */
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
typedef struct CARDRomRegion {
u32 offset;
u32 length;
} CARDRomRegion;
typedef struct CARDRomHeader {
char game_name[12];
u32 game_code;
u16 maker_code;
u8 product_id;
u8 device_type;
u8 device_size;
u8 reserved_A[9];
u8 game_version;
u8 property;
void *main_rom_offset;
void *main_entry_address;
void *main_ram_address;
u32 main_size;
void *sub_rom_offset;
void *sub_entry_address;
void *sub_ram_address;
u32 sub_size;
CARDRomRegion fnt;
CARDRomRegion fat;
CARDRomRegion main_ovt;
CARDRomRegion sub_ovt;
u8 rom_param_A[8];
u32 banner_offset;
u16 secure_crc;
u8 rom_param_B[2];
void *main_autoload_done;
void *sub_autoload_done;
u8 rom_param_C[8];
u32 rom_size;
u32 header_size;
u32 main_module_param_offset;
u32 sub_module_param_offset;
u16 normal_area_rom_offset;
u16 twl_ltd_area_rom_offset;
u8 reserved_B[0x2C];
u8 logo_data[0x9C];
u16 logo_crc;
u16 header_crc;
} CARDRomHeader;
const u8 *func_0207caa4(void);
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
FSResult func_0207f9d0(FSArchive *arc,
FSArchiveResource *resource) {
const CARDRomHeader *header = (const CARDRomHeader *)func_0207caa4();
resource->bytesPerSector = 0;
resource->sectorsPerCluster = 0;
resource->totalClusters = 0;
resource->availableClusters = 0;
resource->totalSize = header->rom_size;
resource->availableSize = 0;
resource->maxFileHandles = 0x7FFFFFFF;
resource->currentFileHandles = 0;
resource->maxDirectoryHandles = 0x7FFFFFFF;
resource->currentDirectoryHandles = 0;
(void)arc;
return FS_RESULT_SUCCESS;
}
BOOL FS_LoadArchive(FSArchive *arc, u32 base, u32 fat, u32 fat_size, u32 fnt,
u32 fnt_size, FS_ARCHIVE_READ_FUNC read_func,
FS_ARCHIVE_WRITE_FUNC write_func);
BOOL FS_UnloadArchive(FSArchive *arc);
void FS_SetArchiveProc(FSArchive *arc, FS_ARCHIVE_PROC_FUNC proc, u32 flags);
u32 FS_LoadArchiveTables(FSArchive *p_arc, void *p_mem, u32 max_size);
void *FS_UnloadArchiveTables(FSArchive *arc);
u32 FS_GetArchiveBase(const struct FSArchive *arc);
u32 FS_GetArchiveFAT(const struct FSArchive *arc);
u32 FS_GetArchiveFNT(const struct FSArchive *arc);
u32 FS_GetArchiveOffset(const struct FSArchive *arc, u32 pos);
BOOL FS_IsArchiveTableLoaded(volatile const struct FSArchive *arc);
u32 FS_GetFileImageTop(const struct FSFile *file);
u32 FS_GetFileImageBottom(const struct FSFile *file);
