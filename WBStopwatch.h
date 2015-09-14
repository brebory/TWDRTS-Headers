/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface WBStopwatch : XXUnknownSuperclass {
	NSString* _name;
	long long _startTime;
	long long _endTime;
	double _timingFactor;
}
@property(assign, nonatomic) double timingFactor;
@property(assign, nonatomic) long long endTime;
@property(assign, nonatomic) long long startTime;
@property(retain, nonatomic) NSString* name;
-(void).cxx_destruct;
-(void)elapsed;
-(double)stop;
-(void)start;
-(double)_measureInNanoSeconds;
-(id)initWithName:(id)name;
-(id)init;
@end

