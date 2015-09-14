/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol FBRequestConnectionRetryManagerDelegate <NSObject>
@optional
-(void)retryManager:(id)manager willRetryWithRequestConnection:(id)requestConnection;
-(void)retryManagerDidFinishAbortingRetries:(id)retryManager;
-(void)retryManagerDidFinishWithNoRetries:(id)retryManager;
@end

