/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol FBGraphObjectPagingLoaderDelegate <NSObject>
@optional
-(void)pagingLoaderWasCancelled:(id)cancelled;
-(void)pagingLoader:(id)loader handleError:(id)error;
-(void)pagingLoaderDidFinishLoading:(id)pagingLoader;
-(void)pagingLoader:(id)loader didLoadData:(id)data;
-(void)pagingLoader:(id)loader willLoadURL:(id)url;
@end

