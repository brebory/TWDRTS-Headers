/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCoding.h"

@class NSString, NSDictionary;

__attribute__((visibility("hidden")))
@interface ADJActivityPackage : XXUnknownSuperclass <NSCoding> {
	NSString* _path;
	NSString* _clientSdk;
	NSDictionary* _parameters;
	int _activityKind;
	NSString* _suffix;
}
@property(copy, nonatomic) NSString* suffix;
@property(assign, nonatomic) int activityKind;
@property(retain, nonatomic) NSDictionary* parameters;
@property(copy, nonatomic) NSString* clientSdk;
@property(copy, nonatomic) NSString* path;
-(void).cxx_destruct;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)failureMessage;
-(id)successMessage;
-(id)extendedString;
-(id)description;
@end

