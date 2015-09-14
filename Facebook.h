/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "FBLoginDialogDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "FBRequestDelegate.h"

@class FBFrictionlessRequestSettings, NSMutableSet, FBSessionManualTokenCachingStrategy, FBSession, NSDate, FBDialog, FBRequest, NSString;
@protocol FBSessionDelegate;

@interface Facebook : XXUnknownSuperclass <FBRequestDelegate, FBLoginDialogDelegate> {
	id<FBSessionDelegate> _sessionDelegate;
	NSMutableSet* _requests;
	FBSession* _session;
	FBSessionManualTokenCachingStrategy* _tokenCaching;
	FBDialog* _fbDialog;
	NSString* _appId;
	NSString* _urlSchemeSuffix;
	BOOL _isExtendingAccessToken;
	FBRequest* _requestExtendingAccessToken;
	NSDate* _lastAccessTokenUpdate;
	FBFrictionlessRequestSettings* _frictionlessRequestSettings;
	BOOL _hasUpdatedAccessToken;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) FBSessionManualTokenCachingStrategy* tokenCaching;
@property(assign, nonatomic) BOOL hasUpdatedAccessToken;
@property(copy, nonatomic) NSString* appId;
@property(retain, nonatomic) FBSession* session;
@property(readonly, assign, nonatomic) BOOL isFrictionlessRequestsEnabled;
@property(copy, nonatomic) NSString* urlSchemeSuffix;
@property(assign, nonatomic) id<FBSessionDelegate> sessionDelegate;
@property(copy, nonatomic) NSDate* expirationDate;
@property(copy, nonatomic) NSString* accessToken;
+(BOOL)automaticallyNotifiesObserversForKey:(id)key;
-(void)requestLoading:(id)loading;
-(void)request:(id)request didReceiveResponse:(id)response;
-(void)request:(id)request didLoadRawResponse:(id)response;
-(void)request:(id)request didLoad:(id)load;
-(void)request:(id)request didFailWithError:(id)error;
-(void)fbDialogNotLogin:(BOOL)login;
-(void)fbDialogLogin:(id)login expirationDate:(id)date params:(id)params;
-(BOOL)isSessionValid;
-(BOOL)isFrictionlessEnabledForRecipients:(id)recipients;
-(BOOL)isFrictionlessEnabledForRecipient:(id)recipient;
-(void)reloadFrictionlessRecipientCache;
-(void)enableFrictionlessRequests;
-(void)dialog:(id)dialog andParams:(id)params andDelegate:(id)delegate;
-(void)dialog:(id)dialog andDelegate:(id)delegate;
-(id)requestWithGraphPath:(id)graphPath andParams:(id)params andHttpMethod:(id)method andDelegate:(id)delegate;
-(id)requestWithGraphPath:(id)graphPath andParams:(id)params andDelegate:(id)delegate;
-(id)requestWithGraphPath:(id)graphPath andDelegate:(id)delegate;
-(id)requestWithMethodName:(id)methodName andParams:(id)params andHttpMethod:(id)method andDelegate:(id)delegate;
-(id)requestWithParams:(id)params andDelegate:(id)delegate;
-(void)logout:(id)logout;
-(void)logout;
-(BOOL)handleOpenURL:(id)url;
-(BOOL)shouldExtendAccessToken;
-(void)extendAccessTokenIfNeeded;
-(void)extendAccessToken;
-(void)authorize:(id)authorize;
-(void)updateSessionIfTokenUpdated;
-(id)parseURLParams:(id)params;
-(id)getOwnBaseUrl;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)observeTokenContextValueForKeyPath:(id)keyPath change:(id)change;
-(void)observeFinishedContextValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change;
-(void)invalidateSession;
-(void)dealloc;
-(id)initWithAppId:(id)appId urlSchemeSuffix:(id)suffix andDelegate:(id)delegate;
-(id)initWithAppId:(id)appId andDelegate:(id)delegate;
@end

