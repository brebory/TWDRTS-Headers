/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSURLConnectionDataDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class WBAnalyticPayload, NSString, NSURLConnection, NSMutableData;

__attribute__((visibility("hidden")))
@interface WBAnalyticNetworkOperation : XXUnknownSuperclass <NSURLConnectionDataDelegate> {
	BOOL _finished;
	BOOL _executing;
	BOOL _cancelled;
	WBAnalyticPayload* _payload;
	id _completionHandler;
	NSURLConnection* _connection;
	NSMutableData* _responseData;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSMutableData* responseData;
@property(retain, nonatomic) NSURLConnection* connection;
@property(assign, getter=isFinished, setter=setFinished:) BOOL finished;
@property(assign, getter=isExecuting, setter=setExecuting:) BOOL executing;
@property(assign, getter=isCancelled, setter=setCancelled:) BOOL cancelled;
@property(copy, nonatomic) id completionHandler;
@property(retain, nonatomic) WBAnalyticPayload* payload;
-(void).cxx_destruct;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)connectionDidFinishLoading:(id)connection;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)connection:(id)connection didReceiveResponse:(id)response;
-(void)cancel;
-(void)start;
-(BOOL)isConcurrent;
-(BOOL)isReady;
-(id)response;
-(void)_startNetworkOperation;
-(void)_onNetworkOperationFinishedError:(id)error;
-(id)initWithPayload:(id)payload;
@end

