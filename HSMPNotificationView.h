/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "headshot-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class HSOBGradientView, UILabel, UITapGestureRecognizer, UIButton, UIImageView;
@protocol MPNotificationViewDelegate;

@interface HSMPNotificationView : XXUnknownSuperclass {
	UILabel* _textLabel;
	UILabel* _detailTextLabel;
	UIImageView* _imageView;
	UIButton* _dismissButton;
	id<MPNotificationViewDelegate> _delegate;
	HSOBGradientView* _contentView;
	id _tapBlock;
	UITapGestureRecognizer* _tapGestureRecognizer;
	double _duration;
}
@property(retain, nonatomic) UITapGestureRecognizer* tapGestureRecognizer;
@property(copy, nonatomic) id tapBlock;
@property(retain, nonatomic) HSOBGradientView* contentView;
@property(assign, nonatomic) double duration;
@property(assign, nonatomic) id<MPNotificationViewDelegate> delegate;
@property(retain, nonatomic) UIButton* dismissButton;
@property(retain, nonatomic) UIImageView* imageView;
@property(retain, nonatomic) UILabel* detailTextLabel;
@property(retain, nonatomic) UILabel* textLabel;
+(id)screenImageWithRect:(CGRect)rect;
+(void)showNextNotification;
+(void)registerNibNameOrClass:(id)aClass forNotificationsOfType:(id)type;
+(id)notifyWithText:(id)text detail:(id)detail image:(id)image duration:(double)duration type:(id)type andTouchBlock:(id)block;
+(id)notifyWithText:(id)text detail:(id)detail image:(id)image duration:(double)duration andTouchBlock:(id)block;
+(id)notifyWithText:(id)text detail:(id)detail andTouchBlock:(id)block;
+(id)notifyWithText:(id)text detail:(id)detail duration:(double)duration andTouchBlock:(id)block;
+(id)notifyWithText:(id)text detail:(id)detail image:(id)image andDuration:(double)duration;
+(id)notifyWithText:(id)text detail:(id)detail andDuration:(double)duration;
+(id)notifyWithText:(id)text andDetail:(id)detail;
-(void)handleTap:(id)tap;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
@end

