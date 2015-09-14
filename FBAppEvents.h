/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableSet, NSRegularExpression, NSMutableDictionary, NSTimer, NSString, FBSession;

@interface FBAppEvents : XXUnknownSuperclass {
	BOOL _haveOutstandingPersistedData;
	BOOL _explicitEventsLoggedYet;
	BOOL _appSupportsImplicitLogging;
	BOOL _shouldAccessAdvertisingID;
	BOOL _haveFetchedAppSettings;
	unsigned _flushBehavior;
	NSString* _loggingOverrideAppID;
	FBSession* _lastSessionLoggedTo;
	NSTimer* _flushTimer;
	NSTimer* _attributionIDRecheckTimer;
	unsigned _appSupportsAttributionStatus;
	NSRegularExpression* _eventNameRegex;
	NSMutableSet* _validatedIdentifiers;
	NSMutableDictionary* _appAuthSessions;
	NSMutableDictionary* _anonymousSessions;
}
@property(readonly, retain) NSMutableDictionary* anonymousSessions;
@property(readonly, retain) NSMutableDictionary* appAuthSessions;
@property(retain) NSMutableSet* validatedIdentifiers;
@property(copy) NSRegularExpression* eventNameRegex;
@property(assign) BOOL haveFetchedAppSettings;
@property(assign) BOOL shouldAccessAdvertisingID;
@property(assign) BOOL appSupportsImplicitLogging;
@property(assign) unsigned appSupportsAttributionStatus;
@property(retain) NSTimer* attributionIDRecheckTimer;
@property(retain) NSTimer* flushTimer;
@property(retain) FBSession* lastSessionLoggedTo;
@property(assign) BOOL explicitEventsLoggedYet;
@property(assign) BOOL haveOutstandingPersistedData;
@property(copy) NSString* loggingOverrideAppID;
@property(assign) unsigned flushBehavior;
+(void)registerAutoResetSourceApplication;
+(id)getSourceApplication;
+(void)setSourceApplication:(id)application openURL:(id)url;
+(void)setSourceApplication:(id)application isAppLink:(BOOL)link;
+(id)flushReasonToString:(unsigned)string;
+(id)customAudienceThirdPartyIDRequest:(id)request;
+(void)ensureOnMainThread;
+(id)persistenceFilePath:(id)path directory:(unsigned)directory;
+(id)persistenceLibraryFilePath:(id)path;
+(id)persistenceDocumentFilePath:(id)path;
+(void)clearPersistedAppEventData;
+(id)retrievePersistedAppEventData;
+(void)persistAppEventsData:(id)data;
+(void)logAndNotify:(id)notify;
+(void)logAndNotify:(id)notify allowLogAsDeveloperError:(BOOL)error;
+(long)unixTimeNow;
+(id)unaffinitizedSessionFromToken:(id)token appID:(id)anId;
+(id)singleton;
+(void)flush;
+(void)setLoggingOverrideAppID:(id)anId;
+(id)loggingOverrideAppID;
+(void)setFlushBehavior:(unsigned)behavior;
+(unsigned)flushBehavior;
+(void)activateApp;
+(void)setLimitEventUsage:(BOOL)usage;
+(BOOL)limitEventUsage;
+(void)logConversionPixel:(id)pixel valueOfPixel:(double)pixel2 session:(id)session;
+(void)logPurchase:(double)purchase currency:(id)currency parameters:(id)parameters session:(id)session;
+(void)logPurchase:(double)purchase currency:(id)currency parameters:(id)parameters;
+(void)logPurchase:(double)purchase currency:(id)currency;
+(void)logImplicitEvent:(id)event valueToSum:(id)sum parameters:(id)parameters session:(id)session;
+(void)logEvent:(id)event valueToSum:(id)sum parameters:(id)parameters session:(id)session;
+(void)logEvent:(id)event valueToSum:(double)sum parameters:(id)parameters;
+(void)logEvent:(id)event parameters:(id)parameters;
+(void)logEvent:(id)event valueToSum:(double)sum;
+(void)logEvent:(id)event;
-(id)instanceCustomAudienceThirdPartyIDRequest:(id)request;
-(void)persistEventDataIfNotInFlight;
-(void)applicationMovingFromActiveStateOrTerminating;
-(BOOL)updateAppEventsStateWithPersistedData:(id)persistedData;
-(void)applicationDidBecomeActive;
-(void)attributionIDRecheckTimerFired:(id)fired;
-(void)flushTimerFired:(id)fired;
-(void)handleActivitiesPostCompletion:(id)completion loggingEntry:(id)entry session:(id)session;
-(id)sessionToSendRequestTo:(id)to;
-(id)appIDToLogEventsWith:(id)with;
-(BOOL)doesSessionHaveUserToken:(id)token;
-(void)flushOnMainQueue:(unsigned)queue session:(id)session;
-(void)flush:(unsigned)flush session:(id)session;
-(void)instanceFlush:(unsigned)flush;
-(void)instanceLogEvent:(id)event valueToSum:(id)sum parameters:(id)parameters isImplicitlyLogged:(BOOL)logged session:(id)session;
-(BOOL)regexValidateIdentifier:(id)identifier;
-(BOOL)validateIdentifier:(id)identifier;
-(void)dealloc;
-(id)init;
@end

