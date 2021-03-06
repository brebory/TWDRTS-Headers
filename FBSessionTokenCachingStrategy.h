/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class FBKeychainStore, NSString;

@interface FBSessionTokenCachingStrategy : XXUnknownSuperclass {
	NSString* _accessTokenInformationKeyName;
	FBKeychainStore* _keychainStore;
}
+(id)nullCacheInstance;
+(id)defaultInstance;
+(BOOL)isValidTokenInformation:(id)information;
-(id)fetchFBAccessTokenData;
-(void)cacheFBAccessTokenData:(id)data;
-(void)clearToken;
-(id)fetchTokenInformation;
-(void)cacheTokenInformation:(id)information;
-(id)userDefaultsKeyForKeychainValidation;
-(void)overrideKeyChainStoreForTests:(id)tests;
-(id)keychainStore;
-(void)dealloc;
-(id)initWithUserDefaultTokenInformationKeyName:(id)userDefaultTokenInformationKeyName;
-(id)init;
@end

