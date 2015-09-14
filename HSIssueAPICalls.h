/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@protocol HSMessagesAPIDelegate;

@interface HSIssueAPICalls : XXUnknownSuperclass {
	id<HSMessagesAPIDelegate> msgDelegate;
}
@property(retain, nonatomic) id<HSMessagesAPIDelegate> msgDelegate;
+(id)sharedInstance;
-(void)sendCustomerSatisfactionRating:(int)rating withFeedback:(id)feedback forIssue:(id)issue onSuccess:(id)success onFailure:(id)failure;
-(BOOL)markMessagesAsReadForIssueID:(id)issueID fromArray:(id)array fromSource:(id)source at:(id)at;
-(void)sendAcceptedReviewRequestforIssueID:(id)anId mesgID:(id)anId2 mesgIndex:(int)index;
-(void)sendBlockedMessageForMesgBody:(id)mesgBody mesgIndex:(int)index forIssueID:(id)issueID;
-(id)generateScreenshotRequestForMesgID:(id)mesgID forIssueID:(id)issueID withImage:(id)image;
-(void)sendScreenShotForMesgID:(id)mesgID mesgIndex:(int)index forIssueID:(id)issueID withImage:(id)image withImageMessageIndex:(int)imageMessageIndex;
-(void)sendYesMessageForMesgID:(id)mesgID mesgIndex:(int)index forIssueID:(id)issueID;
-(void)sendNoMessageForMesgID:(id)mesgID mesgIndex:(int)index forIssueID:(id)issueID;
-(void)sendNewMessage:(id)message forIssueID:(id)issueID;
-(void)fetchMessagesForIssueID:(id)issueID;
-(void)makeIssuesAPICall;
-(void)fetchIssue;
-(void)dealloc;
-(id)init;
@end

