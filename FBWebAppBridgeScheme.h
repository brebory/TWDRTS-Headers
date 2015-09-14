/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "FBAppBridgeScheme.h"

@class NSURL, NSString;

@interface FBWebAppBridgeScheme : FBAppBridgeScheme {
	NSString* _method;
	NSURL* _URL;
}
+(id)bridgeSchemeForFBMessengerForOpenGraphActionShareDialogParams:(id)openGraphActionShareDialogParams;
+(id)bridgeSchemeForFBMessengerForShareDialogPhotos;
+(id)bridgeSchemeForFBMessengerForShareDialogParams:(id)shareDialogParams;
+(id)bridgeSchemeForFBAppForLike;
+(id)bridgeSchemeForFBAppForOpenGraphActionShareDialogParams:(id)openGraphActionShareDialogParams;
+(id)bridgeSchemeForFBAppForShareDialogPhotos;
+(id)bridgeSchemeForFBAppForShareDialogParams:(id)shareDialogParams;
+(id)schemePrefix;
-(id)URLForMethod:(id)method queryParams:(id)params;
-(void)dealloc;
-(id)initWithURL:(id)url method:(id)method;
@end
