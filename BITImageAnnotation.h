/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "headshot-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImage;

@interface BITImageAnnotation : XXUnknownSuperclass {
	BOOL _selected;
	UIImage* _sourceImage;
	CGSize _movedDelta;
	CGRect _imageFrame;
}
@property(assign, nonatomic) CGRect imageFrame;
@property(assign, nonatomic) __weak UIImage* sourceImage;
@property(assign, nonatomic) CGSize movedDelta;
-(void).cxx_destruct;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)selected;
-(BOOL)resizable;
@end
