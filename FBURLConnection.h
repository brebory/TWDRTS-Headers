/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSURLConnectionDataDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSURLConnection, NSURLResponse, NSMutableData;
@protocol FBURLConnectionDelegate;

@interface FBURLConnection : XXUnknownSuperclass <NSURLConnectionDataDelegate> {
	BOOL _skipRoundtripIfCached;
	id<FBURLConnectionDelegate> _delegate;
	NSURLConnection* _connection;
	NSMutableData* _data;
	id _handler;
	NSURLResponse* _response;
	unsigned long _requestStartTime;
	unsigned _loggerSerialNumber;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL skipRoundtripIfCached;
@property(readonly, assign, nonatomic) unsigned loggerSerialNumber;
@property(assign, nonatomic) unsigned long requestStartTime;
@property(retain, nonatomic) NSURLResponse* response;
@property(copy, nonatomic) id handler;
@property(retain, nonatomic) NSMutableData* data;
@property(retain, nonatomic) NSURLConnection* connection;
@property(assign, nonatomic) id<FBURLConnectionDelegate> delegate;
+(void)initialize;
-(id)getCache;
-(BOOL)isCDNURL:(id)cdnurl;
-(BOOL)shouldShortCircuitRedirectResponse:(id)response;
-(void)connection:(id)connection didSendBodyData:(int)data totalBytesWritten:(int)written totalBytesExpectedToWrite:(int)write;
-(id)connection:(id)connection willSendRequest:(id)request redirectResponse:(id)response;
-(void)connectionDidFinishLoading:(id)connection;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)connection:(id)connection didReceiveResponse:(id)response;
-(void)cancel;
-(void)dealloc;
-(void)logMessage:(id)message;
-(void)invokeHandler:(id)handler error:(id)error response:(id)response responseData:(id)data;
-(void)logAndInvokeHandler:(id)handler cachedData:(id)data forURL:(id)url;
-(void)logAndInvokeHandler:(id)handler response:(id)response responseData:(id)data;
-(void)logAndInvokeHandler:(id)handler error:(id)error;
-(id)initWithRequest:(id)request skipRoundTripIfCached:(BOOL)cached completionHandler:(id)handler;
-(id)initWithURL:(id)url completionHandler:(id)handler;
@end

