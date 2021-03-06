/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ADJAdjustFactory : XXUnknownSuperclass {
}
+(void)setAttributionHandler:(id)handler;
+(void)setSubsessionInterval:(double)interval;
+(void)setSessionInterval:(double)interval;
+(void)setLogger:(id)logger;
+(void)setActivityHandler:(id)handler;
+(void)setRequestHandler:(id)handler;
+(void)setPackageHandler:(id)handler;
+(id)attributionHandlerForActivityHandler:(id)activityHandler withMaxDelay:(id)maxDelay withAttributionPackage:(id)attributionPackage;
+(double)subsessionInterval;
+(double)sessionInterval;
+(id)logger;
+(id)activityHandlerWithConfig:(id)config;
+(id)requestHandlerForPackageHandler:(id)packageHandler;
+(id)packageHandlerForActivityHandler:(id)activityHandler;
@end

