/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "headshot-Structs.h"
#import "NSFastEnumeration.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSSet;

@interface BITPLCrashMachExceptionPortSet : XXUnknownSuperclass <NSFastEnumeration> {
	NSSet* _state_set;
	plcrash_mach_exception_port_set _asyncSafeRepresentation;
}
@property(readonly, assign, nonatomic) plcrash_mach_exception_port_set asyncSafeRepresentation;
@property(readonly, assign, nonatomic) NSSet* set;
-(unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA*)state objects:(id*)objects count:(unsigned)count;
-(void)dealloc;
-(id)initWithAsyncSafeRepresentation:(plcrash_mach_exception_port_set)asyncSafeRepresentation;
-(id)initWithSet:(id)set;
@end

