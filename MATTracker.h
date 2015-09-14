/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MATEventQueueDelegate.h"
#import "ADBannerViewDelegate.h"

@class NSDictionary, MATRegionMonitor, MATSettings, MATAppToAppTracker, ADBannerView, NSString;
@protocol MobileAppTrackerDelegate;

@interface MATTracker : XXUnknownSuperclass <MATEventQueueDelegate, ADBannerViewDelegate> {
	ADBannerView* iAd;
	BOOL debugMode;
	MATAppToAppTracker* appToAppTracker;
	MATRegionMonitor* regionMonitor;
	BOOL _shouldUseCookieTracking;
	BOOL _fbLogging;
	BOOL _fbLimitUsage;
	BOOL _trackerStarted;
	BOOL _shouldDetectJailbroken;
	BOOL _shouldGenerateVendorIdentifier;
	id<MobileAppTrackerDelegate> _delegate;
	MATSettings* _parameters;
	NSDictionary* _doNotEncryptDict;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSDictionary* doNotEncryptDict;
@property(assign, nonatomic) BOOL shouldGenerateVendorIdentifier;
@property(assign, nonatomic) BOOL shouldDetectJailbroken;
@property(assign, nonatomic, getter=isTrackerStarted) BOOL trackerStarted;
@property(readonly, assign, nonatomic) MATRegionMonitor* regionMonitor;
@property(assign, nonatomic) BOOL fbLimitUsage;
@property(assign, nonatomic) BOOL fbLogging;
@property(assign, nonatomic) BOOL shouldUseCookieTracking;
@property(retain, nonatomic) MATSettings* parameters;
@property(assign, nonatomic) id<MobileAppTrackerDelegate> delegate;
-(void).cxx_destruct;
-(BOOL)isiAdAttribution;
-(id)encryptionKey;
-(void)waitForInit;
-(void)queueRequestDidFailWithError:(id)queueRequest;
-(void)queueRequestDidSucceedWithData:(id)queueRequest;
-(void)fetchCWorksImpressionKey:(id*)key andValue:(id*)value;
-(void)fetchCWorksClickKey:(id*)key andValue:(id*)value;
-(void)sendRequestWithEventItems:(id)eventItems isId:(BOOL)anId receipt:(id)receipt referenceId:(id)anId4;
-(void)initVariablesForTrackAction:(id)trackAction;
-(void)setPayingUser:(BOOL)user;
-(void)setEventAttributeN:(unsigned)n toValue:(id)value;
-(void)setAllowDuplicateRequests:(BOOL)requests;
-(void)setDebugMode:(BOOL)mode;
-(void)setShouldAutoGenerateAppleVendorIdentifier:(BOOL)autoGenerateAppleVendorIdentifier;
-(void)setShouldAutoDetectJailbroken:(BOOL)autoDetectJailbroken;
-(void)setTracking:(id)tracking advertiserId:(id)anId offerId:(id)anId3 publisherId:(id)anId4 redirect:(BOOL)redirect;
-(void)notifyDelegateFailureWithErrorCode:(int)errorCode key:(id)key message:(id)message;
-(void)notifyDelegateSuccessMessage:(id)message;
-(void)trackSession;
-(void)trackActionForEventIdOrName:(id)eventIdOrName eventItems:(id)items referenceId:(id)anId revenueAmount:(float)amount currencyCode:(id)code transactionState:(int)state receipt:(id)receipt postConversion:(BOOL)conversion;
-(void)trackInstallPostConversion;
-(void)trackActionForEventIdOrName:(id)eventIdOrName eventItems:(id)items referenceId:(id)anId revenueAmount:(float)amount currencyCode:(id)code transactionState:(int)state receipt:(id)receipt;
-(void)trackActionForEventIdOrName:(id)eventIdOrName eventItems:(id)items referenceId:(id)anId revenueAmount:(float)amount currencyCode:(id)code transactionState:(int)state;
-(void)trackActionForEventIdOrName:(id)eventIdOrName eventItems:(id)items referenceId:(id)anId revenueAmount:(float)amount currencyCode:(id)code;
-(void)trackActionForEventIdOrName:(id)eventIdOrName eventItems:(id)items referenceId:(id)anId;
-(void)trackActionForEventIdOrName:(id)eventIdOrName eventItems:(id)items revenueAmount:(float)amount currencyCode:(id)code;
-(void)trackActionForEventIdOrName:(id)eventIdOrName eventItems:(id)items;
-(void)trackActionForEventIdOrName:(id)eventIdOrName referenceId:(id)anId revenueAmount:(float)amount currencyCode:(id)code;
-(void)trackActionForEventIdOrName:(id)eventIdOrName referenceId:(id)anId;
-(void)trackActionForEventIdOrName:(id)eventIdOrName revenueAmount:(float)amount currencyCode:(id)code;
-(void)trackActionForEventIdOrName:(id)eventIdOrName;
-(void)bannerView:(id)view didFailToReceiveAdWithError:(id)error;
-(void)bannerViewDidLoadAd:(id)bannerView;
-(void)removeiAd;
-(void)positioniAd;
-(void)displayiAdInView:(id)view;
-(void)checkIadAttribution:(id)attribution;
-(void)handleNotification:(id)notification;
-(void)applicationDidOpenURL:(id)application sourceApplication:(id)application2;
-(void)startTrackerWithMATAdvertiserId:(id)matadvertiserId MATConversionKey:(id)key;
-(id)init;
@end
