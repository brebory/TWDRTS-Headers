/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "headshot-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImage, UIImageView;

@interface FBLikeButton : XXUnknownSuperclass {
	UIImage* _iconImageNormal;
	UIImage* _iconImageSelected;
	UIImageView* _iconImageView;
}
-(void)_updateIconForState;
-(CGSize)_sizeWithTitleSize:(CGSize)titleSize;
-(void)_initializeContent;
-(UIEdgeInsets)_contentEdgeInsetsForHeight:(float)height;
-(UIEdgeInsets)_contentEdgeInsetsForContentHeight:(float)contentHeight;
-(CGRect)titleRectForContentRect:(CGRect)contentRect;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)layoutSubviews;
-(CGSize)intrinsicContentSize;
-(CGRect)imageRectForContentRect:(CGRect)contentRect;
-(void)setSelected:(BOOL)selected animated:(BOOL)animated;
-(void)setSelected:(BOOL)selected;
-(void)dealloc;
-(void)awakeFromNib;
-(id)initWithFrame:(CGRect)frame;
@end
