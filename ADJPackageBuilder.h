/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ADJAttribution, ADJDeviceInfo, ADJActivityState, NSDate, ADJConfig, NSDictionary;

__attribute__((visibility("hidden")))
@interface ADJPackageBuilder : XXUnknownSuperclass {
	ADJDeviceInfo* _deviceInfo;
	ADJActivityState* _activityState;
	ADJConfig* _adjustConfig;
	ADJAttribution* _attribution;
	NSDate* _clickTime;
	NSDate* _purchaseTime;
	NSDictionary* _deeplinkParameters;
}
@property(retain, nonatomic) NSDictionary* deeplinkParameters;
@property(copy, nonatomic) NSDate* purchaseTime;
@property(copy, nonatomic) NSDate* clickTime;
@property(copy, nonatomic) ADJAttribution* attribution;
@property(copy, nonatomic) ADJConfig* adjustConfig;
@property(copy, nonatomic) ADJActivityState* activityState;
@property(copy, nonatomic) ADJDeviceInfo* deviceInfo;
-(void).cxx_destruct;
-(id)joinParamters:(id)paramters parameters:(id)parameters;
-(void)parameters:(id)parameters setNumber:(id)number forKey:(id)key;
-(void)parameters:(id)parameters setNumberBool:(id)aBool forKey:(id)key;
-(void)parameters:(id)parameters setBool:(BOOL)aBool forKey:(id)key;
-(void)parameters:(id)parameters setDictionaryJson:(id)json forKey:(id)key;
-(void)parameters:(id)parameters setDuration:(double)duration forKey:(id)key;
-(void)parameters:(id)parameters setDate:(id)date forKey:(id)key;
-(void)parameters:(id)parameters setDate1970:(double)a1970 forKey:(id)key;
-(void)parameters:(id)parameters setInt:(int)int forKey:(id)key;
-(void)parameters:(id)parameters setString:(id)string forKey:(id)key;
-(id)eventSuffix:(id)suffix;
-(void)injectActivityState:(id)state intoParamters:(id)paramters;
-(void)injectDeviceInfo:(id)info config:(id)config intoParameters:(id)parameters;
-(id)defaultParameters;
-(id)defaultActivityPackage;
-(id)buildAttributionPackage;
-(id)buildClickPackage:(id)package;
-(id)buildEventPackage:(id)package;
-(id)buildSessionPackage;
-(id)initWithDeviceInfo:(id)deviceInfo activityState:(id)state config:(id)config;
@end

