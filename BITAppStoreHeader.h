/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "headshot-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, NSString, UIImage;

@interface BITAppStoreHeader : XXUnknownSuperclass {
	UILabel* _headerLabelView;
	UILabel* _middleLabelView;
	NSString* _headerText;
	NSString* _subHeaderText;
	UIImage* _iconImage;
	unsigned _style;
}
@property(assign, nonatomic) unsigned style;
@property(retain, nonatomic) UIImage* iconImage;
@property(copy, nonatomic) NSString* subHeaderText;
@property(copy, nonatomic) NSString* headerText;
-(void).cxx_destruct;
-(void)layoutSubviews;
-(void)drawRect:(CGRect)rect;
-(id)initWithFrame:(CGRect)frame;
@end

