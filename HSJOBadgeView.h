/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "headshot-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIColor, NSString;

@interface HSJOBadgeView : XXUnknownSuperclass {
	NSString* _badgeValue;
	UIColor* _fillColor;
	UIColor* _borderColor;
	BOOL _showBorder;
	BOOL _showGloss;
	BOOL _showShadow;
	BOOL _autoPositioning;
}
@property(assign, nonatomic) BOOL autoPositioning;
@property(assign, nonatomic) BOOL showShadow;
@property(assign, nonatomic) BOOL showGloss;
@property(assign, nonatomic) BOOL showBorder;
@property(retain, nonatomic) UIColor* borderColor;
@property(retain, nonatomic) UIColor* fillColor;
@property(retain, nonatomic) NSString* badgeValue;
-(void)dealloc;
-(void)drawRect:(CGRect)rect;
-(void)autoPositionFromSuperView;
-(void)initialize;
-(void)setText:(id)text;
-(void)setFont:(id)font;
-(id)initWithCoder:(id)coder;
-(id)init;
@end

