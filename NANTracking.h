/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface NANTracking : XXUnknownSuperclass {
}
+(void)trackNanigansEvent:(id)event type:(id)type name:(id)name extraParams:(id)params;
+(void)trackNanigansEvent:(id)event type:(id)type name:(id)name value:(id)value;
+(void)trackNanigansEvent:(id)event type:(id)type name:(id)name;
+(BOOL)shouldIgnoreEventType:(id)type name:(id)name;
+(void)checkForEventFiltering;
+(void)enqueueRequestWithParams:(id)params;
+(void)trackNanigansEvent:(id)event name:(id)name extraParams:(id)params;
+(void)trackMultipleProductsPurchase:(id)purchase values:(id)values quantities:(id)quantities extraParams:(id)params;
+(void)trackMultipleProductsPurchase:(id)purchase values:(id)values quantities:(id)quantities;
+(void)trackSingleProductPurchase:(id)purchase value:(int)value quantity:(int)quantity extraParams:(id)params;
+(void)trackSingleProductPurchase:(id)purchase value:(int)value quantity:(int)quantity;
+(void)trackAddMultipleProductsToCart:(id)cart values:(id)values quantities:(id)quantities extraParams:(id)params;
+(void)trackAddMultipleProductsToCart:(id)cart values:(id)values quantities:(id)quantities;
+(void)trackAddSingleProductToCart:(id)cart value:(int)value quantity:(int)quantity extraParams:(id)params;
+(void)trackAddSingleProductToCart:(id)cart value:(int)value quantity:(int)quantity;
+(void)trackUserLogin:(id)login extraParams:(id)params;
+(void)trackUserLogin:(id)login;
+(void)trackUserRegistration:(id)registration extraParams:(id)params;
+(void)trackUserRegistration:(id)registration;
+(id)trackAppLaunch:(id)launch extraParams:(id)params;
+(id)trackAppLaunch:(id)launch;
+(id)uuidStr;
+(id)attributionId;
+(void)unlock;
+(BOOL)lock;
+(void)processQueuedRequests;
+(void)onReachabilityChanged:(id)changed;
+(void)startQueueProcessor;
+(void)notifyRequestObserversWithRequest:(id)request error:(id)error;
+(void)removeRequestObserver:(id)observer;
+(void)registerRequestObserver:(id)observer;
+(void)setUserId:(id)anId;
+(void)setNanigansAppId:(id)anId fbAppId:(id)anId2;
+(void)setDebugMode:(BOOL)mode;
+(id)config;
@end
