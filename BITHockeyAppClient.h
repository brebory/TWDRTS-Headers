/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSURL, NSOperationQueue;

@interface BITHockeyAppClient : XXUnknownSuperclass {
	NSURL* _baseURL;
	NSOperationQueue* _operationQueue;
}
@property(retain, nonatomic) NSOperationQueue* operationQueue;
@property(retain, nonatomic) NSURL* baseURL;
+(id)queryStringFromParameters:(id)parameters withEncoding:(unsigned)encoding;
+(id)dataWithPostValue:(id)postValue forKey:(id)key contentType:(id)type boundary:(id)boundary filename:(id)filename;
+(id)dataWithPostValue:(id)postValue forKey:(id)key boundary:(id)boundary;
-(void).cxx_destruct;
-(unsigned)cancelOperationsWithPath:(id)path method:(id)method;
-(void)enqeueHTTPOperation:(id)operation;
-(void)postPath:(id)path parameters:(id)parameters completion:(id)completion;
-(void)getPath:(id)path parameters:(id)parameters completion:(id)completion;
-(id)operationWithURLRequest:(id)urlrequest completion:(id)completion;
-(id)requestWithMethod:(id)method path:(id)path parameters:(id)parameters;
-(id)initWithBaseURL:(id)baseURL;
-(void)dealloc;
@end

