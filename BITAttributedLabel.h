/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "headshot-Structs.h"
#import "BITAttributedLabel.h"
#import "UIGestureRecognizerDelegate.h"
#import "NSObject.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSAttributedString, NSDataDetector, NSTextCheckingResult, NSDictionary, NSString, NSArray;
@protocol BITAttributedLabelDelegate;

@protocol BITAttributedLabel <NSObject>
@property(copy, nonatomic) id text;
@end

@interface BITAttributedLabel : XXUnknownSuperclass <BITAttributedLabel, UIGestureRecognizerDelegate> {
	BOOL _needsFramesetter;
	NSAttributedString* _attributedText;
	NSAttributedString* _inactiveAttributedText;
	NSAttributedString* _renderedAttributedText;
	CTFramesetterRef _framesetter;
	CTFramesetterRef _highlightFramesetter;
	id<BITAttributedLabelDelegate> _delegate;
	unsigned _dataDetectorTypes;
	NSDataDetector* _dataDetector;
	NSArray* _links;
	NSDictionary* _linkAttributes;
	NSDictionary* _activeLinkAttributes;
	float _shadowRadius;
	float _leading;
	float _lineHeightMultiple;
	float _firstLineIndent;
	int _verticalAlignment;
	NSTextCheckingResult* _activeLink;
	UIEdgeInsets _textInsets;
}
@property(copy, nonatomic) id text;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSTextCheckingResult* activeLink;
@property(retain, nonatomic) NSDataDetector* dataDetector;
@property(assign, nonatomic) CTFramesetterRef highlightFramesetter;
@property(assign, nonatomic) CTFramesetterRef framesetter;
@property(copy, nonatomic) NSAttributedString* renderedAttributedText;
@property(copy, nonatomic) NSAttributedString* inactiveAttributedText;
@property(copy, nonatomic) NSAttributedString* attributedText;
@property(assign, nonatomic) int verticalAlignment;
@property(assign, nonatomic) UIEdgeInsets textInsets;
@property(assign, nonatomic) float lineHeightMultiple;
@property(assign, nonatomic) float leading;
@property(assign, nonatomic) float firstLineIndent;
@property(assign, nonatomic) float shadowRadius;
@property(retain, nonatomic) NSDictionary* activeLinkAttributes;
@property(retain, nonatomic) NSDictionary* linkAttributes;
@property(retain, nonatomic) NSArray* links;
@property(assign, nonatomic) unsigned dataDetectorTypes;
@property(assign, nonatomic) id<BITAttributedLabelDelegate> delegate;
-(void).cxx_destruct;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)drawTextInRect:(CGRect)rect;
-(CGRect)textRectForBounds:(CGRect)bounds limitedToNumberOfLines:(int)lines;
-(void)setTextColor:(id)color;
-(id)textColor;
-(void)setHighlighted:(BOOL)highlighted;
-(void)setText:(id)text afterInheritingLabelAttributesAndConfiguringWithBlock:(id)block;
-(void)drawStrike:(CTFrameRef)strike inRect:(CGRect)rect context:(CGContextRef)context;
-(void)drawBackground:(CTFrameRef)background inRect:(CGRect)rect context:(CGContextRef)context;
-(void)drawFramesetter:(CTFramesetterRef)framesetter attributedString:(id)string textRange:(timeval)range inRect:(CGRect)rect context:(CGContextRef)context;
-(long)characterIndexAtPoint:(CGPoint)point;
-(id)linkAtPoint:(CGPoint)point;
-(id)linkAtCharacterIndex:(long)characterIndex;
-(void)addLinkToDate:(id)date timeZone:(id)zone duration:(double)duration withRange:(NSRange)range;
-(void)addLinkToDate:(id)date withRange:(NSRange)range;
-(void)addLinkToPhoneNumber:(id)phoneNumber withRange:(NSRange)range;
-(void)addLinkToAddress:(id)address withRange:(NSRange)range;
-(void)addLinkToURL:(id)url withRange:(NSRange)range;
-(void)addLinkWithTextCheckingResult:(id)textCheckingResult;
-(void)addLinkWithTextCheckingResult:(id)textCheckingResult attributes:(id)attributes;
-(id)detectedLinksInString:(id)string range:(NSRange)range error:(id*)error;
-(void)setLinkActive:(BOOL)active withTextCheckingResult:(id)textCheckingResult;
-(void)setNeedsFramesetter;
-(void)dealloc;
-(void)commonInit;
-(id)initWithCoder:(id)coder;
-(id)initWithFrame:(CGRect)frame;
@end

