/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

typedef struct _NSZone NSZone;

typedef struct _NSRange {
	unsigned _field1;
	unsigned _field2;
} NSRange;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	unsigned long _field1;
	id* _field2;
	unsigned long* _field3;
	unsigned long _field4[5];
} XXStruct_kFm5bA;

typedef struct app_function_t app_function_t;
template<>
struct atomic_<iugo::app_function_t *, true> {
	/*unknown-type-(A)*/ void* _field1;
	app_function_t* _field2;
};

struct app_function_t {
	/*function-pointer*/ void** _field1;
	atomic_<iugo::app_function_t *, true> _field2;
	float _field3;
};

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct in_addr {
	unsigned _field1;
} in_addr;

typedef struct sockaddr_in {
	unsigned char _field1;
	unsigned char _field2;
	unsigned short _field3;
	in_addr _field4;
	BOOL _field5[8];
} sockaddr_in;

typedef struct PLCrashReporterCallbacks {
	unsigned short _field1;
	void* _field2;
	/*function-pointer*/ void* _field3;
} PLCrashReporterCallbacks;

typedef struct BITCrashManagerCallbacks {
	void* _field1;
	/*function-pointer*/ void* _field2;
} BITCrashManagerCallbacks;

typedef struct __CTFramesetter* CTFramesetterRef;

typedef struct UIEdgeInsets {
	float top;
	float left;
	float bottom;
	float right;
} UIEdgeInsets;

typedef struct timeval {
	int tv_sec;
	int tv_usec;
} timeval;

typedef struct CGContext* CGContextRef;

typedef struct __CTFrame* CTFrameRef;

typedef struct CGAffineTransform {
	float a;
	float b;
	float c;
	float d;
	float tx;
	float ty;
} CGAffineTransform;

typedef struct __darwin_sigaltstack {
	void* ss_sp;
	unsigned ss_size;
	int ss_flags;
} darwin_sigaltstack;

typedef struct _Plcrash__CrashReport__ProcessInfo Plcrash__CrashReport__ProcessInfo;
typedef struct _Plcrash__CrashReport__Thread Plcrash__CrashReport__Thread;
typedef struct _Plcrash__CrashReport__MachineInfo Plcrash__CrashReport__MachineInfo;
typedef struct _Plcrash__CrashReport__ReportInfo Plcrash__CrashReport__ReportInfo;
typedef struct _Plcrash__CrashReport__BinaryImage Plcrash__CrashReport__BinaryImage;
typedef struct _Plcrash__CrashReport__Exception Plcrash__CrashReport__Exception;
typedef struct _Plcrash__CrashReport__SystemInfo Plcrash__CrashReport__SystemInfo;
typedef struct _Plcrash__CrashReport__Signal Plcrash__CrashReport__Signal;
typedef struct _Plcrash__CrashReport__ApplicationInfo Plcrash__CrashReport__ApplicationInfo;
typedef struct _Plcrash__CrashReport {
	ProtobufCMessage _field1;
	Plcrash__CrashReport__SystemInfo* _field2;
	Plcrash__CrashReport__ApplicationInfo* _field3;
	unsigned _field4;
	Plcrash__CrashReport__Thread** _field5;
	unsigned _field6;
	Plcrash__CrashReport__BinaryImage** _field7;
	Plcrash__CrashReport__Exception* _field8;
	Plcrash__CrashReport__Signal* _field9;
	Plcrash__CrashReport__ProcessInfo* _field10;
	Plcrash__CrashReport__MachineInfo* _field11;
	Plcrash__CrashReport__ReportInfo* _field12;
} Plcrash__CrashReport;

typedef struct _PLCrashReportDecoder {
	Plcrash__CrashReport* _field1;
} PLCrashReportDecoder;

typedef struct __CFUUID* CFUUIDRef;

typedef struct _ProtobufCMessageDescriptor ProtobufCMessageDescriptor;

typedef struct _ProtobufCMessageUnknownField ProtobufCMessageUnknownField;

typedef struct _ProtobufCMessage {
	ProtobufCMessageDescriptor* _field1;
	unsigned _field2;
	ProtobufCMessageUnknownField* _field3;
} ProtobufCMessage;

struct _Plcrash__CrashReport__SystemInfo {
	ProtobufCMessage _field1;
	int _field2;
	int _field3;
	char* _field4;
	int _field5;
	long long _field6;
	char* _field7;
};

struct _Plcrash__CrashReport__ApplicationInfo {
	ProtobufCMessage _field1;
	char* _field2;
	char* _field3;
};

struct _Plcrash__CrashReport__Thread Plcrash__CrashReport__Thread;

struct _Plcrash__CrashReport__BinaryImage Plcrash__CrashReport__BinaryImage;

typedef struct _Plcrash__CrashReport__Thread__StackFrame Plcrash__CrashReport__Thread__StackFrame;
struct _Plcrash__CrashReport__Exception {
	ProtobufCMessage _field1;
	char* _field2;
	char* _field3;
	unsigned _field4;
	Plcrash__CrashReport__Thread__StackFrame** _field5;
};

typedef struct _Plcrash__CrashReport__Signal__MachException Plcrash__CrashReport__Signal__MachException;
struct _Plcrash__CrashReport__Signal {
	ProtobufCMessage _field1;
	char* _field2;
	char* _field3;
	unsigned long long _field4;
	Plcrash__CrashReport__Signal__MachException* _field5;
};

struct _Plcrash__CrashReport__ProcessInfo {
	ProtobufCMessage _field1;
	char* _field2;
	unsigned _field3;
	char* _field4;
	char* _field5;
	unsigned _field6;
	int _field7;
	int _field8;
	unsigned long long _field9;
};

typedef struct _Plcrash__CrashReport__Processor Plcrash__CrashReport__Processor;
struct _Plcrash__CrashReport__MachineInfo {
	ProtobufCMessage _field1;
	char* _field2;
	Plcrash__CrashReport__Processor* _field3;
	unsigned _field4;
	unsigned _field5;
};

struct _Plcrash__CrashReport__ReportInfo Plcrash__CrashReport__ReportInfo;

struct _Plcrash__CrashReport__Processor {
	ProtobufCMessage _field1;
	int _field2;
	int _field3;
	unsigned long long _field4;
	unsigned long long _field5;
};

typedef struct _Plcrash__CrashReport__Symbol {
	ProtobufCMessage _field1;
	char* _field2;
	unsigned long long _field3;
	int _field4;
	unsigned long long _field5;
} Plcrash__CrashReport__Symbol;

struct _Plcrash__CrashReport__Thread__StackFrame {
	ProtobufCMessage _field1;
	unsigned long long _field2;
	Plcrash__CrashReport__Symbol* _field3;
};

struct _Plcrash__CrashReport__Signal__MachException {
	ProtobufCMessage _field1;
	unsigned long long _field2;
	unsigned _field3;
	unsigned long long* _field4;
};

typedef struct _opaque_pthread_mutex_t {
	long _field1;
	BOOL _field2[40];
} opaque_pthread_mutex_t;

typedef struct _opaque_pthread_cond_t {
	long _field1;
	BOOL _field2[24];
} opaque_pthread_cond_t;

typedef struct plcrash_exception_server_context {
	unsigned _field1;
	unsigned _field2;
	unsigned _field3;
	unsigned _field4;
	/*function-pointer*/ void* _field5;
	void* _field6;
	opaque_pthread_mutex_t _field7;
	opaque_pthread_cond_t _field8;
	unsigned _field9;
	bool _field10;
} plcrash_exception_server_context;

typedef struct PLCrashHostInfoVersion {
	unsigned major;
	unsigned minor;
	unsigned revision;
} PLCrashHostInfoVersion;

typedef struct plcrash_mach_exception_port_set {
	unsigned count;
	unsigned masks[13];
	unsigned ports[13];
	int behaviors[13];
	int flavors[13];
} plcrash_mach_exception_port_set;

typedef struct dispatch_queue_s dispatch_queue_s;

typedef struct msgpack_packer {
	void* _field1;
	/*function-pointer*/ void* _field2;
} msgpack_packer;

typedef struct msgpack_zone msgpack_zone;

typedef struct msgpack_unpacker {
	char* buffer;
	unsigned used;
	unsigned free;
	unsigned off;
	unsigned parsed;
	msgpack_zone* z;
	unsigned initial_buffer_size;
	void* ctx;
} msgpack_unpacker;

typedef struct msgpack_object_kv msgpack_object_kv;
typedef struct msgpack_object {
	int _field1;
	union {
		bool _field1;
		unsigned long long _field2;
		long long _field3;
		double _field4;
		struct {
			unsigned _field1;
			msgpack_object* _field2;
		} _field5;
		struct {
			unsigned _field1;
			msgpack_object_kv* _field2;
		} _field6;
		struct {
			unsigned _field1;
			char* _field2;
		} _field7;
	} _field2;
} msgpack_object;

struct msgpack_object_kv msgpack_object_kv;

typedef struct WBType {
	Class _field1;
	int _field2;
} WBType;

typedef struct sqlite3 sqlite3;

typedef struct HSDatabaseConstants {
	id _field1;
	id _field2;
	id _field3;
	id _field4;
	id _field5;
	id _field6;
	id _field7;
	id _field8;
	id _field9;
	id _field10;
} HSDatabaseConstants;

typedef struct {
	double latitude;
	double longitude;
} XXStruct_zYrK5D;

typedef struct __SecRandom SecRandom;

typedef struct sqlite3_stmt sqlite3_stmt;

typedef struct FBLikeControlLayout {
	CGSize _field1;
	CGRect _field2;
	CGRect _field3;
} FBLikeControlLayout;

typedef struct CGImageSource* CGImageSourceRef;

