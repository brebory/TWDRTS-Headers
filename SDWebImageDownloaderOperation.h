/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SDWebImageOperation.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSThread, NSString, NSURLRequest, NSURLConnection, NSMutableData;

__attribute__((visibility("hidden")))
@interface SDWebImageDownloaderOperation : XXUnknownSuperclass <SDWebImageOperation> {
	BOOL _executing;
	BOOL _finished;
	unsigned long width;
	unsigned long height;
	int orientation;
	BOOL responseFromCached;
	NSURLRequest* _request;
	unsigned _options;
	id _progressBlock;
	id _completedBlock;
	id _cancelBlock;
	int _expectedSize;
	NSMutableData* _imageData;
	NSURLConnection* _connection;
	NSThread* _thread;
	unsigned _backgroundTaskId;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) unsigned backgroundTaskId;
@property(retain) NSThread* thread;
@property(retain, nonatomic) NSURLConnection* connection;
@property(retain, nonatomic) NSMutableData* imageData;
@property(assign, nonatomic) int expectedSize;
@property(assign, nonatomic, getter=isFinished) BOOL finished;
@property(assign, nonatomic, getter=isExecuting) BOOL executing;
@property(copy, nonatomic) id cancelBlock;
@property(copy, nonatomic) id completedBlock;
@property(copy, nonatomic) id progressBlock;
@property(readonly, assign, nonatomic) unsigned options;
@property(readonly, assign, nonatomic) NSURLRequest* request;
+(int)orientationFromPropertyValue:(int)propertyValue;
-(void).cxx_destruct;
-(void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;
-(BOOL)connection:(id)connection canAuthenticateAgainstProtectionSpace:(id)space;
-(BOOL)shouldContinueWhenAppEntersBackground;
-(id)connection:(id)connection willCacheResponse:(id)response;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)connectionDidFinishLoading:(id)connection;
-(id)scaledImageForKey:(id)key image:(id)image;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)connection:(id)connection didReceiveResponse:(id)response;
-(BOOL)isConcurrent;
-(void)reset;
-(void)done;
-(void)cancelInternal;
-(void)cancelInternalAndStop;
-(void)cancel;
-(void)start;
-(id)initWithRequest:(id)request options:(unsigned)options progress:(id)progress completed:(id)completed cancelled:(id)cancelled;
@end

