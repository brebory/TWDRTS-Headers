/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "FBCacheIndexFileDelegate.h"

@class FBCacheIndex, NSCache, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface FBDataDiskCache : XXUnknownSuperclass <FBCacheIndexFileDelegate> {
	NSCache* _inMemoryCache;
	FBCacheIndex* _cacheIndex;
	NSString* _dataCachePath;
	NSObject<OS_dispatch_queue>* _fileQueue;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(copy, nonatomic) NSString* dataCachePath;
@property(readonly, assign, nonatomic) NSObject<OS_dispatch_queue>* fileQueue;
@property(assign, nonatomic) unsigned cacheSizeMemory;
+(id)sharedCache;
-(void)setData:(id)data forURL:(id)url;
-(void)removeDataForSession:(id)session;
-(void)removeDataForUrl:(id)url;
-(id)dataForURL:(id)url;
-(BOOL)_doesFileExist:(id)exist;
-(void)cacheIndex:(id)index deleteFileWithName:(id)name;
-(void)cacheIndex:(id)index writeFileWithName:(id)name data:(id)data;
-(void)dealloc;
-(id)init;
@end

