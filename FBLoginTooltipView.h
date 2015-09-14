/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "FBTooltipView.h"
#import "headshot-Structs.h"

@protocol FBLoginTooltipViewDelegate;

@interface FBLoginTooltipView : FBTooltipView {
	BOOL _forceDisplay;
	id<FBLoginTooltipViewDelegate> _delegate;
}
@property(assign, nonatomic) BOOL forceDisplay;
@property(assign, nonatomic) id<FBLoginTooltipViewDelegate> delegate;
-(void)presentInView:(id)view withArrowPosition:(CGPoint)arrowPosition direction:(unsigned)direction;
-(id)init;
@end
