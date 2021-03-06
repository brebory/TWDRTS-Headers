/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "headshot-Structs.h"
#import "QLPreviewItem.h"

@class NSData, NSNumber, NSMutableDictionary, NSURL, UIImage, NSFileManager, NSString;

@interface BITFeedbackMessageAttachment : XXUnknownSuperclass <NSCoding, QLPreviewItem> {
	NSString* _tempFilename;
	NSString* _cachePath;
	NSFileManager* _fm;
	BOOL _isLoading;
	NSNumber* _identifier;
	NSString* _originalFilename;
	NSString* _contentType;
	NSString* _sourceURL;
	NSMutableDictionary* _thumbnailRepresentations;
	NSData* _internalData;
	NSString* _filename;
}
@property(readonly, assign) NSString* previewItemTitle;
@property(readonly, assign) NSURL* previewItemURL;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(copy, nonatomic) NSString* filename;
@property(retain, nonatomic) NSData* internalData;
@property(retain, nonatomic) NSMutableDictionary* thumbnailRepresentations;
@property(readonly, assign) UIImage* imageRepresentation;
@property(readonly, assign, nonatomic) NSData* data;
@property(assign, nonatomic) BOOL isLoading;
@property(copy, nonatomic) NSString* sourceURL;
@property(copy, nonatomic) NSString* contentType;
@property(copy, nonatomic) NSString* originalFilename;
@property(copy, nonatomic) NSNumber* identifier;
+(id)attachmentWithData:(id)data contentType:(id)type;
-(void).cxx_destruct;
-(void)deleteContents;
-(id)possibleFilename;
-(id)thumbnailWithSize:(CGSize)size;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(id)localURL;
-(BOOL)isImage;
-(BOOL)needsLoadingFromURL;
-(void)replaceData:(id)data;
-(void)setData:(id)data;
-(id)init;
@end

