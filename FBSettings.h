/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface FBSettings : XXUnknownSuperclass {
}
+(void)publishInstall:(id)install isAutoPublish:(BOOL)publish;
+(void)publishInstall:(id)install;
+(void)setLimitEventAndDataUsage:(BOOL)usage;
+(BOOL)limitEventAndDataUsage;
+(BOOL)isBetaFeatureEnabled:(unsigned)enabled;
+(void)disableBetaFeature:(unsigned)feature;
+(void)enableBetaFeature:(unsigned)feature;
+(void)enableBetaFeatures:(unsigned)features;
+(void)autoPublishInstallImpl:(id)impl;
+(void)autoPublishInstall:(id)install;
+(id)defaultURLSchemeWithAppID:(id)appID urlSchemeSuffix:(id)suffix;
+(void)setShouldAutoPublishInstall:(BOOL)autoPublishInstall;
+(BOOL)shouldAutoPublishInstall;
+(void)setRestrictedTreatment:(unsigned)treatment;
+(unsigned)restrictedTreatment;
+(void)setResourceBundleName:(id)name;
+(id)resourceBundleName;
+(void)setLoggingBehavior:(id)behavior;
+(id)loggingBehavior;
+(void)setFacebookDomainPart:(id)part;
+(id)facebookDomainPart;
+(void)setDefaultUrlSchemeSuffix:(id)suffix;
+(id)defaultUrlSchemeSuffix;
+(void)setdefaultJPEGCompressionQuality:(float)quality;
+(float)defaultJPEGCompressionQuality;
+(void)setDefaultDisplayName:(id)name;
+(id)defaultDisplayName;
+(void)setDefaultAppID:(id)anId;
+(id)defaultAppID;
+(void)setClientToken:(id)token;
+(id)clientToken;
+(void)setAppVersion:(id)version;
+(id)appVersion;
+(id)platformVersion;
+(void)enablePlatformCompatibility:(BOOL)compatibility;
+(BOOL)isPlatformCompatibilityEnabled;
+(id)sdkVersion;
+(void)FBSDKInitializeWithLaunchData:(id)launchData;
+(void)load;
@end

