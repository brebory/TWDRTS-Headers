/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIWebViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface BFWebViewAppLinkResolverWebViewDelegate : XXUnknownSuperclass <UIWebViewDelegate> {
	BOOL _hasLoaded;
	id _didFinishLoad;
	id _didFailLoadWithError;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL hasLoaded;
@property(copy, nonatomic) id didFailLoadWithError;
@property(copy, nonatomic) id didFinishLoad;
-(void).cxx_destruct;
-(BOOL)webView:(id)view shouldStartLoadWithRequest:(id)request navigationType:(int)type;
-(void)webView:(id)view didFailLoadWithError:(id)error;
-(void)webViewDidStartLoad:(id)webView;
-(void)webViewDidFinishLoad:(id)webView;
@end
