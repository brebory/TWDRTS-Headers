/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface BITCrashReportTextFormatter : XXUnknownSuperclass {
}
+(id)bit_formatStackFrame:(id)frame frameIndex:(unsigned)index report:(id)report lp64:(BOOL)a64;
+(id)bit_archNameFromCPUType:(unsigned long long)cputype subType:(unsigned long long)type;
+(id)bit_archNameFromImageInfo:(id)imageInfo;
+(id)arrayOfAppUUIDsForCrashReport:(id)crashReport;
+(id)selectorForRegisterWithName:(id)name ofThread:(id)thread report:(id)report;
+(id)stringValueForCrashReport:(id)crashReport crashReporterKey:(id)key;
@end

