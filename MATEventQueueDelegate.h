/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol MATEventQueueDelegate <NSObject>
-(BOOL)isiAdAttribution;
-(id)encryptionKey;
@optional
-(void)queueRequestDidFailWithError:(id)queueRequest;
-(void)queueRequestDidSucceedWithData:(id)queueRequest;
@end
