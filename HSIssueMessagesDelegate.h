/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol HSIssueMessagesDelegate <NSObject>
-(void)sendAcceptedReviewRequestSuccessforIssueID:(id)anId mesgIndex:(int)index;
-(void)sendBlockedMessageSuccessForMesgIndex:(int)mesgIndex forIssueID:(id)issueID;
-(void)sendScreenShotFailureForMesgID:(id)mesgID mesgIndex:(int)index forIssueID:(id)issueID forError:(int)error withImageMessageIndex:(int)imageMessageIndex;
-(void)sendScreenShotSuccessForMesgID:(id)mesgID mesgIndex:(int)index forIssueID:(id)issueID withImage:(id)image imageUrl:(id)url withImageMessageIndex:(int)imageMessageIndex;
-(void)sendYesMessageSuccessForMesgID:(id)mesgID mesgIndex:(int)index forIssueID:(id)issueID;
-(void)sendNoMessageSuccessForMesgID:(id)mesgID mesgIndex:(int)index forIssueID:(id)issueID;
-(void)sendNewMessageFailure:(id)failure forIssueID:(id)issueID unsentMessage:(id)message;
-(void)sendNewMessageSuccess:(id)success forIssueID:(id)issueID newMessage:(id)message;
-(void)loadMessagesFailureForIssueID:(id)issueID;
-(void)loadMessagesSuccessForIssueID:(id)issueID isRemote:(BOOL)remote;
@end

