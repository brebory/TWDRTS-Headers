/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "headshot-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIColor, CALayer, UIToolbar;

@interface HSBlurView : XXUnknownSuperclass {
	UIColor* _blurTintColor;
	UIToolbar* _toolbar;
	CALayer* _blurLayer;
}
@property(retain, nonatomic) CALayer* blurLayer;
@property(retain, nonatomic) UIToolbar* toolbar;
@property(retain, nonatomic) UIColor* blurTintColor;
-(void)setFrame:(CGRect)frame;
-(void)setup;
-(id)init;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithCoder:(id)coder;
@end

