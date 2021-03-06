/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "headshot-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, NSMutableArray;

@interface HSMPNotificationWindow : XXUnknownSuperclass {
	NSMutableArray* _notificationQueue;
	UIView* _currentNotification;
}
@property(retain, nonatomic) UIView* currentNotification;
@property(retain, nonatomic) NSMutableArray* notificationQueue;
-(void)rotateNotificationWindow;
-(void)rotateNotificationWindowAnimated;
-(void)willRotateScreen:(id)screen;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
@end

