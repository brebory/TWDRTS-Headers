/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "FBRequestConnectionDelegate.h"
#import "NSDiscardableContent.h"
#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, FBSession;

@interface FBLikeActionController : XXUnknownSuperclass <FBRequestConnectionDelegate, NSCoding, NSDiscardableContent> {
	unsigned _contentAccessCount;
	FBSession* _session;
	unsigned _refreshState;
	BOOL _objectIsLiked;
	BOOL _contentDiscarded;
	BOOL _objectIsLikedIsPending;
	BOOL _objectIsLikedOnServer;
	BOOL _objectIsPage;
	NSString* _objectID;
	unsigned _objectType;
	NSString* _likeCountStringWithLike;
	NSString* _likeCountStringWithoutLike;
	NSString* _socialSentenceWithLike;
	NSString* _socialSentenceWithoutLike;
	NSString* _unlikeToken;
	NSString* _verifiedObjectID;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(copy, nonatomic) NSString* verifiedObjectID;
@property(copy, nonatomic) NSString* unlikeToken;
@property(copy, nonatomic) NSString* socialSentenceWithoutLike;
@property(copy, nonatomic) NSString* socialSentenceWithLike;
@property(assign, nonatomic) BOOL objectIsPage;
@property(assign, nonatomic) BOOL objectIsLikedOnServer;
@property(assign, nonatomic) BOOL objectIsLikedIsPending;
@property(copy, nonatomic) NSString* likeCountStringWithoutLike;
@property(copy, nonatomic) NSString* likeCountStringWithLike;
@property(assign, nonatomic, getter=isContentDiscarded) BOOL contentDiscarded;
@property(readonly, copy, nonatomic) NSString* socialSentence;
@property(assign, nonatomic) BOOL objectIsLiked;
@property(readonly, assign, nonatomic) unsigned objectType;
@property(readonly, copy, nonatomic) NSString* objectID;
@property(readonly, copy, nonatomic) NSString* likeCountString;
+(id)likeActionControllerForObjectID:(id)objectID objectType:(unsigned)type;
+(BOOL)isDisabled;
-(BOOL)_useOGLike;
-(void)_updateWithObjectIsLiked:(unsigned)objectIsLiked likeCountStringWithLike:(id)like likeCountStringWithoutLike:(id)like3 socialSentenceWithLike:(id)like4 socialSentenceWithoutLike:(id)like5 unlikeToken:(id)token soundEnabled:(BOOL)enabled animated:(BOOL)animated deferred:(BOOL)deferred;
-(void)_setExecuting:(BOOL)executing forKey:(id)key;
-(void)_serialize;
-(void)_refreshWithMode:(unsigned)mode;
-(void)_publishUnlikeWithUpdateBlock:(id)updateBlock analyticsParameters:(id)parameters;
-(void)_publishLikeWithUpdateBlock:(id)updateBlock analyticsParameters:(id)parameters;
-(void)_publishIfNeededWithUpdateBlock:(id)updateBlock analyticsParameters:(id)parameters;
-(void)_presentLikeDialogWithUpdateBlock:(id)updateBlock analyticsParameters:(id)parameters;
-(void)_ensureVerifiedObjectID:(id)anId;
-(void)discardContentIfPossible;
-(void)endContentAccess;
-(BOOL)beginContentAccess;
-(void)toggleLikeWithSoundEnabled:(BOOL)soundEnabled analyticsParameters:(id)parameters;
-(void)refresh;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(void)dealloc;
-(id)init;
-(id)initWithObjectID:(id)objectID objectType:(unsigned)type session:(id)session;
@end

