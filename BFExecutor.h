/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "headshot-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface BFExecutor : XXUnknownSuperclass {
	id _block;
}
@property(copy) id block;
+(id)executorWithOperationQueue:(id)operationQueue;
+(id)executorWithDispatchQueue:(dispatch_queue_s*)dispatchQueue;
+(id)executorWithBlock:(id)block;
+(id)mainThreadExecutor;
+(id)immediateExecutor;
+(id)defaultExecutor;
-(void).cxx_destruct;
-(void)execute:(id)execute;
-(id)initWithBlock:(id)block;
@end

