/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "headshot-Structs.h"
#import "UIActionSheetDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UINavigationControllerDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UITextViewDelegate.h"
#import "HSIssueMessagesDelegate.h"
#import "HSMBProgressHUDDelegate.h"
#import "UITextFieldDelegate.h"
#import "HSAttributedLabelDelegate.h"
#import "HSPreviewControllerDelegate.h"

@class UIViewController, UIView, UITableView, UITextView, UIToolbar, UIBarButtonItem, UIPopoverController, HSMBProgressHUD, NSString, HSButton;

@interface HSChatScreen : XXUnknownSuperclass <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UITextViewDelegate, UIActionSheetDelegate, HSIssueMessagesDelegate, HSMBProgressHUDDelegate, HSAttributedLabelDelegate, HSPreviewControllerDelegate> {
	UITableView* table;
	UIViewController* viewController;
	UITextView* tv;
	UIView* toolbarView;
	HSButton* sendBt;
	HSButton* attachButton;
	UIToolbar* toolbar;
	int currentIssueIndex;
	NSString* currentIssueID;
	UIBarButtonItem* sendButton;
	UIView* overlay;
	CGRect table_FRAME;
	CGRect textView_FRAME;
	CGRect sendBt_FRAME;
	CGRect toolbar_FRAME;
	BOOL comingFromReportAnIssueScreen;
	double keyboardShowingTimeInterval;
	BOOL isParentDecomposed;
	BOOL didReturnFromChildView;
	BOOL forNotification;
	BOOL notificationPollValue;
	BOOL didPressNo;
	BOOL isChoosingScreenshot;
	BOOL didTakeActionPostUserRejection;
	BOOL isUserRejectionAutoResponderAdded;
	BOOL didUserRateCSAT;
	UIPopoverController* popover;
	UIView* lineView;
	UIView* flyingToolbar;
	UIView* conversationFooterView;
	BOOL isViewVisible;
	BOOL isNewConvConfirm;
	BOOL isKeyboardVisible;
	HSMBProgressHUD* notificationLoadingHUD;
	NSString* _prefillMessage;
}
@property(retain, nonatomic) UIView* conversationFooterView;
@property(retain, nonatomic) HSButton* attachButton;
@property(copy, nonatomic) NSString* prefillMessage;
@property(retain, nonatomic) UIView* lineView;
@property(retain, nonatomic) UIPopoverController* popover;
@property(assign, nonatomic) int currentIssueIndex;
@property(retain, nonatomic) NSString* currentIssueID;
@property(retain, nonatomic) UIViewController* viewController;
@property(retain, nonatomic) UITableView* table;
@property(assign, nonatomic) BOOL notificationPollValue;
@property(assign, nonatomic) BOOL forNotification;
@property(assign, nonatomic) BOOL didReturnFromChildView;
@property(assign, nonatomic) BOOL isParentDecomposed;
@property(assign, nonatomic) BOOL comingFromReportAnIssueScreen;
-(void)repaintStarsWithRating:(int)rating;
-(void)selectStar:(id)star;
-(void)setBlankTableFooter;
-(id)getConversationBottomWithMessage:(id)message;
-(id)getCSATView;
-(id)getStartNewConversationViewWithCSAT:(BOOL)csat;
-(id)getYesNoDialog;
-(id)getIssueStatusView;
-(id)getIssueStatusViewButtons:(id)buttons withButtonProperty:(int)buttonProperty;
-(void)newConvButtonTap:(id)tap;
-(void)continueConvButtonTap:(id)tap;
-(void)setResolvedStatus;
-(void)setInProgressStatus;
-(BOOL)prefersStatusBarHidden;
-(void)sendBlockedMessageSuccessForMesgIndex:(int)mesgIndex forIssueID:(id)issueID;
-(void)sendScreenShotFailureForMesgID:(id)mesgID mesgIndex:(int)index forIssueID:(id)issueID forError:(int)error withImageMessageIndex:(int)imageMessageIndex;
-(void)sendScreenShotSuccessForMesgID:(id)mesgID mesgIndex:(int)index forIssueID:(id)issueID withImage:(id)image imageUrl:(id)url withImageMessageIndex:(int)imageMessageIndex;
-(void)sendAcceptedReviewRequestSuccessforIssueID:(id)anId mesgIndex:(int)index;
-(void)sendYesMessageSuccessForMesgID:(id)mesgID mesgIndex:(int)index forIssueID:(id)issueID;
-(void)sendNoMessageSuccessForMesgID:(id)mesgID mesgIndex:(int)index forIssueID:(id)issueID;
-(void)sendNewMessageFailure:(id)failure forIssueID:(id)issueID unsentMessage:(id)message;
-(void)sendNewMessageSuccess:(id)success forIssueID:(id)issueID newMessage:(id)message;
-(void)loadMessagesFailureForIssueID:(id)issueID;
-(void)loadMessagesSuccessForIssueID:(id)issueID isRemote:(BOOL)remote;
-(void)sendAcceptReviewForIssue:(id)issue atIndex:(int)index;
-(void)review:(id)review;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)tryAgain:(id)again;
-(void)imagePickerControllerDidCancel:(id)imagePickerController;
-(void)imagePickerController:(id)controller didFinishPickingMediaWithInfo:(id)info;
-(void)sendScreenshot:(id)screenshot;
-(void)didSelectImage:(id)image;
-(void)takeScreenshotAction;
-(void)backToIssueAction;
-(void)pickGalleryImage;
-(void)pickGalleryImageIPad:(id)pad;
-(void)chooseFromGallery:(id)gallery;
-(void)learn;
-(id)overlayView;
-(void)yesAction:(id)action;
-(void)noAction:(id)action;
-(void)send;
-(void)receivedNotification:(id)notification;
-(void)setChatToolbarHeightWithString:(id)string;
-(BOOL)textView:(id)view shouldChangeTextInRange:(NSRange)range replacementText:(id)text;
-(BOOL)disablesAutomaticKeyboardDismissal;
-(void)textViewDidChangeSelection:(id)textView;
-(void)hideKeyboard;
-(void)resizeView:(id)view;
-(void)handleKeyboardDidChangeFrame:(id)handleKeyboard;
-(void)handleKeyboardWillHide:(id)handleKeyboard;
-(void)handleKeyboardWillShow:(id)handleKeyboard;
-(unsigned)animationOptionsForCurve:(int)curve;
-(unsigned)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)attributedLabel:(id)label didSelectLinkWithPhoneNumber:(id)phoneNumber;
-(void)attributedLabel:(id)label didSelectLinkWithURL:(id)url;
-(void)handleLink:(id)link;
-(void)scrollTableToBottom;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)downloadImage:(id)image;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(CGSize)computeExptectedLabelSize:(id)size forFont:(id)font andWidth:(float)width isAttributedLabel:(BOOL)label;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)viewDidUnload;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)loadConversation;
-(void)loadChatOnNotification;
-(void)loadChat;
-(void)goBack;
-(void)dismissChatScreen:(BOOL)screen;
-(void)loadView;
-(void)didMoveToParentViewController:(id)parentViewController;
@end

