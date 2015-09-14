/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSString, NSDictionary;

__attribute__((visibility("hidden")))
@interface WBURLParser : XXUnknownSuperclass {
	NSString* _url;
	NSDictionary* _parameters;
	NSString* _scheme;
	NSString* _host;
	NSArray* _paths;
}
@property(retain, nonatomic) NSArray* paths;
@property(retain, nonatomic) NSString* host;
@property(retain, nonatomic) NSString* scheme;
@property(retain, nonatomic) NSDictionary* parameters;
@property(readonly, assign, nonatomic) NSString* url;
-(void).cxx_destruct;
-(void)parse;
-(id)initWithURLString:(id)urlstring;
-(id)initWithURL:(id)url;
@end
