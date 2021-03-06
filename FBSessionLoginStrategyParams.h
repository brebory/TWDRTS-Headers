/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSArray;

@interface FBSessionLoginStrategyParams : XXUnknownSuperclass {
	BOOL _tryIntegratedAuth;
	BOOL _tryFBAppAuth;
	BOOL _trySafariAuth;
	BOOL _tryFallback;
	BOOL _isReauthorize;
	BOOL _canFetchAppSettings;
	unsigned _defaultAudience;
	NSArray* _permissions;
	NSMutableDictionary* _webParams;
}
@property(retain, nonatomic) NSMutableDictionary* webParams;
@property(assign) BOOL canFetchAppSettings;
@property(retain, nonatomic) NSArray* permissions;
@property(assign) unsigned defaultAudience;
@property(assign) BOOL isReauthorize;
@property(assign) BOOL tryFallback;
@property(assign) BOOL trySafariAuth;
@property(assign) BOOL tryFBAppAuth;
@property(assign) BOOL tryIntegratedAuth;
-(void)dealloc;
@end

