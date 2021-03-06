/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "HSMessagesAPIDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, NSMutableDictionary, NSMutableArray;
@protocol HSIssueMessagesDelegate;

@interface HSIssueMessagesModel : XXUnknownSuperclass <HSMessagesAPIDelegate> {
	NSMutableArray* msgArray;
	NSMutableArray* msgIDArray;
	NSMutableArray* msgBodyArray;
	NSMutableArray* msgoriginArray;
	NSMutableArray* typeArray;
	NSMutableArray* stateArray;
	NSMutableArray* timestampArray;
	NSMutableArray* sentStatusArray;
	NSMutableDictionary* rscMapDict;
	NSMutableArray* authorArray;
	id<HSIssueMessagesDelegate> delegate;
	NSTimer* messagePoller;
}
@property(retain, nonatomic) NSTimer* messagePoller;
@property(retain, nonatomic) NSMutableArray* authorArray;
@property(retain, nonatomic) NSMutableDictionary* rscMapDict;
@property(retain, nonatomic) NSMutableArray* sentStatusArray;
@property(retain, nonatomic) NSMutableArray* timestampArray;
@property(retain, nonatomic) NSMutableArray* stateArray;
@property(retain, nonatomic) NSMutableArray* typeArray;
@property(retain, nonatomic) NSMutableArray* msgoriginArray;
@property(retain, nonatomic) NSMutableArray* msgBodyArray;
@property(retain, nonatomic) NSMutableArray* msgIDArray;
@property(retain, nonatomic) NSMutableArray* msgArray;
@property(retain, nonatomic) id<HSIssueMessagesDelegate> delegate;
+(void)setScreenshotSentForIssueID:(id)issueID withScreenshotBase64String:(id)screenshotBase64String;
+(void)setHappyToHelpResponseForIssueID:(id)issueID;
+(void)setSorryResponseForIssueID:(id)issueID;
+(void)setUserRejectionAutoResponseForIssueID:(id)issueID toLocal:(BOOL)local toDB:(BOOL)db;
+(void)setDownloadImgForMessageIndex:(int)messageIndex forIssueID:(id)issueID withScreenshotBase64String:(id)screenshotBase64String;
+(void)updateFailedMessageWithSuccessMsg:(int)successMsg forIssueID:(id)issueID withSuccessMessage:(id)successMessage;
+(void)setResponseForMessageIndex:(int)messageIndex forIssueID:(id)issueID withResponseState:(BOOL)responseState;
+(BOOL)addMessage:(id)message forIssueID:(id)issueID;
+(BOOL)addMessageToDB:(id)db forIssueID:(id)issueID;
+(void)addMessageToLocal:(id)local forIssueID:(id)issueID;
+(void)refreshMessagesForIssue:(id)issue;
+(void)stopPolling;
+(void)startMessageRefreshForIssueID:(id)issueID delay:(BOOL)delay;
+(void)loadMessagesForIssueInfoDictionary:(id)issueInfoDictionary;
+(id)sharedInstance;
-(void)sendAcceptedReviewRequestSuccessforIssueID:(id)anId mesgIndex:(int)index;
-(void)sendBlockedMessageSuccessForMesgIndex:(int)mesgIndex forIssueID:(id)issueID;
-(void)sendScreenShotFailureForMesgID:(id)mesgID mesgIndex:(int)index forIssueID:(id)issueID forError:(int)error withImageMessageIndex:(int)imageMessageIndex;
-(void)sendScreenShotSuccessForMesgID:(id)mesgID mesgIndex:(int)index forIssueID:(id)issueID withImage:(id)image imageUrl:(id)url withImageMessageIndex:(int)imageMessageIndex;
-(void)sendYesMessageSuccessForMesgID:(id)mesgID mesgIndex:(int)index forIssueID:(id)issueID;
-(void)sendNoMessageSuccessForMesgID:(id)mesgID mesgIndex:(int)index forIssueID:(id)issueID;
-(void)sendNewMessageFailureForMessageString:(id)messageString forIssueID:(id)issueID unsentMessage:(id)message;
-(void)sendNewMessageSuccessForMessageString:(id)messageString forIssueID:(id)issueID newMessage:(id)message;
-(void)fetchMessagesFailureForIssueID:(id)issueID;
-(void)fetchMessagesSuccessForIssueID:(id)issueID messageArray:(id)array;
-(void)clearMessages;
-(void)removeMessageAtIndex:(int)index;
-(void)sendAcceptedReviewRequestforIssueIDSuccess:(id)success mesgIndex:(int)index;
-(void)sendBlockedMessageForMesgIndexSuccess:(int)mesgIndexSuccess forIssueID:(id)issueID;
-(void)sendYesMessageForMesgIDSuccess:(id)mesgIDSuccess mesgIndex:(int)index forIssueID:(id)issueID;
-(void)sendNoMessageForMesgIDSuccess:(id)mesgIDSuccess mesgIndex:(int)index forIssueID:(id)issueID;
-(void)sendNewMessageFailure:(id)failure forIssueID:(id)issueID unsentMessage:(id)message;
-(void)sendNewMessageSuccess:(id)success forIssueID:(id)issueID newMessage:(id)message;
-(void)getMessages:(id)messages;
-(id)getMessageAuthorForIndex:(int)index;
-(id)getMessageStatusForIndex:(int)index;
-(id)getMessageOriginForIndex:(int)index;
-(id)getMessageTimestampForIndex:(int)index;
-(id)getMessageStateForIndex:(int)index;
-(id)getMessageTypeForIndex:(int)index;
-(id)getMessageIDForIndex:(int)index;
-(id)getMessageForIndex:(int)index;
-(int)getMessageCount;
-(void)dealloc;
-(id)init;
@end

