/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "headshot-Structs.h"

@class UIView, FBLikeBoxView, FBLikeButton, UIColor, NSString, FBLikeActionController, UILabel;

@interface FBLikeControl : XXUnknownSuperclass {
	FBLikeActionController* _likeActionController;
	FBLikeBoxView* _likeBoxView;
	FBLikeButton* _likeButton;
	UIView* _likeButtonContainer;
	UILabel* _socialSentenceLabel;
	BOOL _soundEnabled;
	UIColor* _foregroundColor;
	unsigned _likeControlAuxiliaryPosition;
	unsigned _likeControlHorizontalAlignment;
	unsigned _likeControlStyle;
	NSString* _objectID;
	unsigned _objectType;
	float _preferredMaxLayoutWidth;
}
@property(assign, nonatomic, getter=isSoundEnabled) BOOL soundEnabled;
@property(assign, nonatomic) float preferredMaxLayoutWidth;
@property(assign, nonatomic) unsigned objectType;
@property(copy, nonatomic) NSString* objectID;
@property(assign, nonatomic) unsigned likeControlStyle;
@property(assign, nonatomic) unsigned likeControlHorizontalAlignment;
@property(assign, nonatomic) unsigned likeControlAuxiliaryPosition;
@property(retain, nonatomic) UIColor* foregroundColor;
+(void)initialize;
-(void)_updateLikeBoxCaretPosition;
-(void)_resetLikeActionController;
-(void)_likeActionControllerDidResetNotification:(id)_likeActionController;
-(FBLikeControlLayout)_layoutWithBounds:(CGRect)bounds subviewSizingBlock:(id)block;
-(void)_initializeContent;
-(void)_handleLikeButtonTouchUp:(id)up;
-(void)_handleLikeButtonTouchDown:(id)down;
-(void)_handleLikeButtonTap:(id)tap;
-(void)_handleLikeActionControllerDidUpdateNotification:(id)_handleLikeActionController;
-(void)_handleLikeActionControllerDidDisableNotification:(id)_handleLikeActionController;
-(void)_ensureLikeActionController;
-(float)_auxiliaryViewPadding;
-(id)_auxiliaryView;
-(id)_analyticsParameters;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)layoutSubviews;
-(CGSize)intrinsicContentSize;
-(void)drawRect:(CGRect)rect;
-(void)setOpaque:(BOOL)opaque;
-(void)setBackgroundColor:(id)color;
-(void)dealloc;
-(void)awakeFromNib;
-(id)initWithFrame:(CGRect)frame;
@end

