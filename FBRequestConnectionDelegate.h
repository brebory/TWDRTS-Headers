/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol FBRequestConnectionDelegate <NSObject>
@optional
-(void)requestConnection:(id)connection didSendBodyData:(int)data totalBytesWritten:(int)written totalBytesExpectedToWrite:(int)write;
-(void)requestConnection:(id)connection willRetryWithRequestConnection:(id)requestConnection;
-(void)requestConnection:(id)connection didFailWithError:(id)error;
-(void)requestConnectionDidFinishLoading:(id)requestConnection fromCache:(BOOL)cache;
-(void)requestConnectionWillBeginLoading:(id)requestConnection fromCache:(BOOL)cache;
@end

