/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface WBCacheKey : XXUnknownSuperclass {
	NSString* _key;
}
@property(retain, nonatomic) NSString* key;
+(id)cacheKeyForSettings;
+(id)cacheKeyForBundleSettings;
+(id)cacheKeyForDomain:(id)domain key:(id)key version:(int)version;
+(id)cacheKeyForDomain:(id)domain key:(id)key;
+(id)cacheKeyForDeviceToken;
+(id)cacheKeyForDeviceInfo;
+(id)cacheKeyForExperimentEnrollments;
+(id)cacheKeyForExperimentValues;
+(id)cacheKeyForExperimentEntityTag;
-(void).cxx_destruct;
@end

