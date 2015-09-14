/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class FBAccessTokenData, FBDialogsData, FBAppLinkData, NSString, NSError;

@interface FBAppCall : XXUnknownSuperclass {
	NSString* _ID;
	NSError* _error;
	FBDialogsData* _dialogData;
	FBAppLinkData* _appLinkData;
	FBAccessTokenData* _accessTokenData;
}
@property(retain, nonatomic) FBAccessTokenData* accessTokenData;
@property(retain, nonatomic) FBAppLinkData* appLinkData;
@property(retain, nonatomic) FBDialogsData* dialogData;
@property(retain, nonatomic) NSError* error;
@property(copy, nonatomic) NSString* ID;
+(void)openDeferredAppLink:(id)link;
+(void)invokeHandler:(id)handler withError:(id)error;
+(BOOL)invokeHandler:(id)handler withAccessToken:(id)accessToken appLinkData:(id)data;
+(BOOL)tryOpenSession:(id)session withAccessToken:(id)accessToken;
+(void)handleDidBecomeActiveWithSession:(id)handle;
+(void)handleDidBecomeActive;
+(BOOL)handleOpenURL:(id)url sourceApplication:(id)application withSession:(id)session fallbackHandler:(id)handler;
+(BOOL)handleOpenURL:(id)url sourceApplication:(id)application withSession:(id)session;
+(BOOL)handleOpenURL:(id)url sourceApplication:(id)application fallbackHandler:(id)handler;
+(BOOL)handleOpenURL:(id)url sourceApplication:(id)application;
+(id)appCallFromURL:(id)url;
+(id)appCallFromApplinkData:(id)applinkData applinkData:(id)data originalQueryParameters:(id)parameters;
+(id)appCallFromApplinkArgs_v2:(id)applinkArgs_v2 applinkArgs:(id)args createTimeUTC:(id)utc originalQueryParameters:(id)parameters;
-(BOOL)isValid;
-(unsigned)hash;
-(BOOL)isEqualToAppCall:(id)appCall;
-(BOOL)isEqual:(id)equal;
-(id)description;
-(void)dealloc;
-(void)logInboundAppLinkEvent;
-(id)initWithID:(id)anId enforceScheme:(BOOL)scheme appID:(id)anId3 urlSchemeSuffix:(id)suffix;
-(id)init:(BOOL)init;
-(id)init;
@end

