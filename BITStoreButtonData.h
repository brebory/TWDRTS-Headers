/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface BITStoreButtonData : XXUnknownSuperclass {
	BOOL _enabled;
	NSString* _label;
}
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;
@property(copy, nonatomic) NSString* label;
+(id)dataWithLabel:(id)label enabled:(BOOL)enabled;
-(void).cxx_destruct;
-(id)initWithLabel:(id)label enabled:(BOOL)enabled;
@end
