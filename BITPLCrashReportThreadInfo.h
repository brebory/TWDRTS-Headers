/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

@interface BITPLCrashReportThreadInfo : XXUnknownSuperclass {
	int _threadNumber;
	NSArray* _stackFrames;
	BOOL _crashed;
	NSArray* _registers;
}
@property(readonly, assign, nonatomic) NSArray* registers;
@property(readonly, assign, nonatomic) BOOL crashed;
@property(readonly, assign, nonatomic) NSArray* stackFrames;
@property(readonly, assign, nonatomic) int threadNumber;
-(void)dealloc;
-(id)initWithThreadNumber:(int)threadNumber stackFrames:(id)frames crashed:(BOOL)crashed registers:(id)registers;
@end

