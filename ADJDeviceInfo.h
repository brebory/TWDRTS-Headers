/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "headshot-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ADJDeviceInfo : XXUnknownSuperclass <NSCopying> {
	BOOL _trackingEnabled;
	NSString* _macSha1;
	NSString* _macShortMd5;
	NSString* _idForAdvertisers;
	NSString* _fbAttributionId;
	NSString* _vendorId;
	NSString* _pushToken;
	NSString* _clientSdk;
	NSString* _bundeIdentifier;
	NSString* _bundleVersion;
	NSString* _deviceType;
	NSString* _deviceName;
	NSString* _osName;
	NSString* _systemVersion;
	NSString* _languageCode;
	NSString* _countryCode;
	NSString* _networkType;
	NSString* _mobileCountryCode;
	NSString* _mobileNetworkCode;
}
@property(copy, nonatomic) NSString* mobileNetworkCode;
@property(copy, nonatomic) NSString* mobileCountryCode;
@property(copy, nonatomic) NSString* networkType;
@property(copy, nonatomic) NSString* countryCode;
@property(copy, nonatomic) NSString* languageCode;
@property(copy, nonatomic) NSString* systemVersion;
@property(copy, nonatomic) NSString* osName;
@property(copy, nonatomic) NSString* deviceName;
@property(copy, nonatomic) NSString* deviceType;
@property(copy, nonatomic) NSString* bundleVersion;
@property(copy, nonatomic) NSString* bundeIdentifier;
@property(copy, nonatomic) NSString* clientSdk;
@property(copy, nonatomic) NSString* pushToken;
@property(copy, nonatomic) NSString* vendorId;
@property(assign, nonatomic) BOOL trackingEnabled;
@property(copy, nonatomic) NSString* fbAttributionId;
@property(copy, nonatomic) NSString* idForAdvertisers;
@property(copy, nonatomic) NSString* macShortMd5;
@property(copy, nonatomic) NSString* macSha1;
+(id)deviceInfoWithSdkPrefix:(id)sdkPrefix;
-(void).cxx_destruct;
-(id)copyWithZone:(NSZone*)zone;
-(id)initWithSdkPrefix:(id)sdkPrefix;
@end

