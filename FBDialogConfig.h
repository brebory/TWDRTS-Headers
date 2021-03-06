/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSString, NSURL;

@interface FBDialogConfig : XXUnknownSuperclass <NSCoding> {
	NSString* _name;
	NSURL* _URL;
	NSArray* _versions;
}
@property(copy, nonatomic) NSArray* versions;
@property(copy, nonatomic) NSURL* URL;
@property(copy, nonatomic) NSString* name;
+(id)dialogConfigWithDictionary:(id)dictionary;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(void)dealloc;
@end

