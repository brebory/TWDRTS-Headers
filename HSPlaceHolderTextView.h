/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "headshot-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, UIColor, NSString;

@interface HSPlaceHolderTextView : XXUnknownSuperclass {
	NSString* placeholder;
	UIColor* placeholderColor;
	UILabel* placeHolderLabel;
}
@property(retain, nonatomic) UIColor* placeholderColor;
@property(retain, nonatomic) NSString* placeholder;
@property(retain, nonatomic) UILabel* placeHolderLabel;
-(void)drawRect:(CGRect)rect;
-(void)textChanged:(id)changed;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
@end

